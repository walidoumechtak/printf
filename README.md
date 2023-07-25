# Printf Project - Custom Printf Function

## Introduction
This project implements a custom `printf` function, a popular standard library function in C, that handles the following format specifiers: `%d`, `%i`, `%s`, `%%`, and `%c`. This function mimics the functionality of the standard `printf` but with limited format specifiers.

## Functionality
The custom `printf` function supports the following format specifiers:

1. `%d` or `%i`: Integers
   - Usage: `printf("%d", num);` or `printf("%i", num);`
   - Description: Prints a signed decimal integer.

2. `%s`: Strings
   - Usage: `printf("%s", str);`
   - Description: Prints a string of characters.

3. `%%`: Percentage sign
   - Usage: `printf("%%");`
   - Description: Prints a single `%` character.

4. `%c`: Characters
   - Usage: `printf("%c", ch);`
   - Description: Prints a single character.

## How to Use
1. Clone the repository:
   ```
   git clone <repository_url>
   ```

2. Include the `main.h` header file in your C project:
   ```c
   #include "main.h"
   ```

3. Call the custom `printf` function with the desired format specifiers:
   ```c
   int num = 42;
   char* str = "Hello, World!";
   char ch = 'A';

   _printf("Integer: %d\n", num);
   _printf("String: %s\n", str);
   _printf("Character: %c\n", ch);
   _printf("Percentage: %%\n");
   ```

4. Compile your C program with the custom `printf` implementation:
   ```
   gcc *.c -o printf
   ```

5. Run the executable:
   ```
   ./printf
   ```

## Limitations
- The custom `printf` function only supports a limited set of format specifiers as mentioned above. Other format specifiers found in the standard `printf` are not implemented in this version.
- Floating-point numbers, hexadecimal, and other specialized format specifiers are not supported.

## License
This project is open-source and distributed under the MIT License. Feel free to use, modify, and distribute it according to the terms specified in the LICENSE file.

## Contributions
Contributions to this project are welcome. If you encounter any issues or have improvements to suggest, please open an issue or submit a pull request.

## Acknowledgments
This project was inspired by the standard `printf` function in the C programming language.

---

Note: This is a basic README for the `printf` project that handles `%d`, `%i`, `%s`, `%%`, and `%c` format specifiers. Depending on your specific project and repository setup, you may need to modify and expand this README with additional details, build instructions, and examples.
