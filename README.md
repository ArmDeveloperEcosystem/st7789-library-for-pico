# ST7789 library for Pico

Use an ST7789 based TFT LCD display with your [Raspberry Pi Pico](https://www.raspberrypi.org/products/raspberry-pi-pico/) or any [RP2040](https://www.raspberrypi.org/products/rp2040/) based board 📺

## Hardware

 * RP2040 board
   * [Raspberry Pi Pico](https://www.raspberrypi.org/products/raspberry-pi-pico/)
 * ST7789 TFT Display
   * [Adafruit 2.0" 320x240 Color IPS TFT Display with microSD Card Breakout](https://www.adafruit.com/product/4311)

### Default Pinout

```
+---------+-------------------+
| ST7789  | Raspberry Pi Pico |
|---------+-------------------|
|   VIN   |        3V3        |
|---------+-------------------|
|   GND   |        GND        |
|---------+-------------------|
|   SCK   |      GPIO18       |
|---------+-------------------|
|   MOSI  |      GPIO19       |
|---------+-------------------|
|   CS    |      GPIO17       |
|---------+-------------------|
|   RST   |      GPIO21       |
|---------+-------------------|
|   D/C   |      GPIO20       |
+---------+-------------------+
```

GPIO pins are configurable in examples or API.

`CS` can be set to `-1` if your display has the CS pin grounded.

## Examples

See [examples](examples/) folder.


## Cloning

```sh
git clone https://github.com/ArmDeveloperEcosystem/st7789-library-for-pico.git 
```

## Building

1. [Set up the Pico C/C++ SDK](https://datasheets.raspberrypi.org/pico/getting-started-with-pico.pdf)
2. Set `PICO_SDK_PATH`
```sh
export PICO_SDK_PATH=/path/to/pico-sdk
```
3. Create `build` dir, run `cmake` and `make`:
```
mkdir build
cd build
cmake .. -DPICO_BOARD=pico
make
```
4. Copy example `.uf2` to Pico when in BOOT mode.

## License

[Apache-2.0 License](LICENSE)

---

Disclaimer: This is not an official Arm product.
