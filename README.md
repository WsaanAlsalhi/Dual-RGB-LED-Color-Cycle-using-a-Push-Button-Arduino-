# Dual RGB LED Color Cycle using a Push Button (Arduino)

This project allows you to control **two RGB LEDs** using a **single button**. Each press of the button toggles the LEDs between ON (showing a specific color) and OFF. When turning ON again, the color advances to the next one in a predefined sequence.

---

##  Features

- Supports **7 colors**: Red, Green, Blue, Yellow, Cyan, Magenta, and White.
- Controls **two RGB LEDs** in perfect sync.
- **Single button** interaction:
  - First press → show current color.
  - Second press → turn off.
  - Next press → show next color.
- Built-in **debounce delay** to avoid noisy input.
- Starts with LEDs turned **off**.

---

##  Components Required

| Component            | Quantity |
|----------------------|----------|
| Arduino Uno/Nano     | 1        |
| RGB LED (Common Cathode) | 2    |
| 220Ω resistors (for RGB lines) | 6 |
| Push Button          | 1        |
| Breadboard + Wires   | -        |

---

##  Wiring Diagram

| RGB LED 1 Pin | Arduino Pin |
|--------------|-------------|
| Red          | D3          |
| Green        | D4          |
| Blue         | D6          |

| RGB LED 2 Pin | Arduino Pin |
|--------------|-------------|
| Red          | D9          |
| Green        | D10         |
| Blue         | D11         |

| Button Pin   | Arduino Pin |
|--------------|-------------|
| One side     | D2          |
| Other side   | GND         |

> Note: Use 220Ω resistors between each RGB pin and Arduino to prevent damage.
