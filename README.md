## Caesar Cipher Implementation

This program implements the Caesar cipher, a simple encryption technique where each letter in the plaintext is shifted a certain number of places down or up the alphabet.

### Usage

To use this program, follow these steps:

1. **Compile**: Compile the program using `gcc` compiler.
   ```bash
   gcc -o caesar caesar.c -lcs50
   ```

2. **Run**: Execute the compiled program with a single command-line argument, which is the encryption key (a non-negative integer).
   ```bash
   ./caesar key
   ```

   Replace `key` with the integer value you want to use as the encryption key.

### Example

Suppose you want to encrypt the message "HELLO" with a key of 3.

```bash
./caesar 3
Plaintext: HELLO
Ciphertext: KHOOR
```

### Explanation

- The program first checks if there is exactly one command-line argument (besides the program name). If not, it prints an error message and exits.
- It then validates that the command-line argument is a non-negative integer.
- After obtaining the key, it prompts the user for plaintext input.
- The plaintext is then encrypted using the provided key using the Caesar cipher algorithm:
  - Uppercase letters are shifted within the range of 'A' to 'Z'.
  - Lowercase letters are shifted within the range of 'a' to 'z'.
  - Non-alphabetical characters remain unchanged.
- The encrypted text (ciphertext) is printed as output.

### Notes

- The program assumes the plaintext input consists of only alphabetical and space characters.
- Only non-negative integer keys are supported.
- The cipher wraps around the alphabet, meaning if a shift moves beyond 'Z' or 'z', it wraps back to 'A' or 'a' respectively.

### Error Handling

- If the user does not provide exactly one command-line argument, or if the argument is not a valid non-negative integer, the program outputs an error message and exits with a status code of 1.

### Dependencies

- This program depends on the CS50 library (`#include <cs50.h>`) for `get_string` function to obtain plaintext input.

### Author

This program was written by **Muhammad Abdullah**.
