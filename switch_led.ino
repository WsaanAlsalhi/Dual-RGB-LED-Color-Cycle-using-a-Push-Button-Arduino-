const int buttonPin = 2;

// First RGB unit
const int red1 = 3;
const int green1 = 4;
const int blue1 = 6;

// Second RGB unit
const int red2 = 9;
const int green2 = 10;
const int blue2 = 11;

int buttonState = HIGH;
int lastButtonState = HIGH;
int colorIndex = 0;
bool showingColor = false; // Variable to track whether the color is currently displayed

const int colors[][3] = {
  {255, 0, 0},    // أحمر
  {0, 255, 0},    // أخضر
  {0, 0, 255},    // أزرق
  {255, 255, 0},  // أصفر
  {0, 255, 255},  // سماوي
  {255, 0, 255},  // أرجواني
  {255, 255, 255} // أبيض
};

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);

  pinMode(red1, OUTPUT);
  pinMode(green1, OUTPUT);
  pinMode(blue1, OUTPUT);

  pinMode(red2, OUTPUT);
  pinMode(green2, OUTPUT);
  pinMode(blue2, OUTPUT);

  setColor(-1); // ابدأ مطفأ
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == LOW && lastButtonState == HIGH) {
    if (!showingColor) {
      // عرض اللون الحالي
      setColor(colorIndex);
      showingColor = true;
    } else {
      // إطفاء المصابيح
      setColor(-1);
      showingColor = false;
      colorIndex = (colorIndex + 1) % 7; // انتقل للون التالي
    }

    delay(200); // للتعامل مع الاهتزاز
  }

  lastButtonState = buttonState;
}

void setColor(int index) {
  int r = 0, g = 0, b = 0;

  if (index >= 0) {
    r = colors[index][0];
    g = colors[index][1];
    b = colors[index][2];
  }

  // وحدة 1
  analogWrite(red1, r);
  analogWrite(green1, g);
  analogWrite(blue1, b);

  // وحدة 2
  analogWrite(red2, r);
  analogWrite(green2, g);
  analogWrite(blue2, b);
}
