<div align="center">

![](https://raw.githubusercontent.com/ayogun/42-project-badges/refs/heads/main/badges/fract-ole.png)

# **fract-ol**

**Computer Graphics Fractals**

</div>

## Features

- Display fractals such as the Mandelbrot set and Julia set.
- Implement zoom and pan functionalities to navigate the fractal.
- Support real-time interactive rendering with customizable colors.
- Handle user input via keyboard and mouse events.
- Optimize rendering performance to handle complex fractal calculations.
- Provide graphical interface with adjustable parameters (e.g., zoom level, color scheme).
- Implement fractal iteration limits to control precision and performance.

## Installation

### Mandatory

1. Clone the repository:

```bash
git clone https://github.com/lanceleau02/fract-ol.git
```

2. Navigate to the project directory:

```bash
cd fract-ol
```

3. Compile the program:

```bash
make
```

To compile the bonus part (Burning Ship set and more features):

```bash
make bonus
```

## Usage

If you want to see the Mandelbrot set:

```bash
./fractol Mandelbrot
```

If you want to see the Julia set (constants must be between -2.00 and 2.00):

```bash
./fractol Julia <constant> <constant>
```

If you want to see the Julia set:

```bash
./checker 3 2 1 0
```

## License

This project is licensed under the **42 School** License.

- **Educational Use Only**: This project is intended for educational purposes at the 42 School as part of the curriculum.
- **Non-commercial Use**: The code may not be used for commercial purposes or redistributed outside of the 42 School context.
- **No Warranty**: The project is provided "as-is", without any warranty of any kind.

For more details, see the [LICENSE](https://github.com/lanceleau02/ft_printf/blob/main/LICENSE) file.

## Resources

- [printfTester](https://github.com/Tripouille/printfTester)
- [ft_printf tester](https://github.com/paulo-santana/ft_printf_tester)
- [printf Manual](https://man7.org/linux/man-pages/man3/printf.3.html)
- [stdarg Manual](https://man7.org/linux/man-pages/man3/va_arg.3.html)
