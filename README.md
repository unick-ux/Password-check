# Password Validator in C

A simple C program that checks whether a password meets basic security requirements.

## Description

This program checks the password entered by the user and verifies that it:

* Contains at least 10 characters
* Contains at least one digit
* Contains at least one uppercase letter
* Contains at least one lowercase letter
* Contains at least one special character

If all requirements are satisfied, the program displays:

```text
Your password is Valid
```

Otherwise, it displays:

```text
Invalid password
```

## Example

### Valid Password

Input:

```text
HelloWorld123!
```

Output:

```text
Your password is Valid
```

### Invalid Password

Input:

```text
helloworld
```

Output:

```text
Invalid password
```

## Concepts Used

* C programming
* Strings
* `strlen()`
* `scanf()`
* `for` loop
* Character checking
* `isdigit()`
* `isupper()`
* `islower()`
* Conditional statements

## How It Works

The program uses four variables to track the password requirements:

```text
hasdigit
hasupper
haslower
hasspecial
```

Each variable becomes `1` when the corresponding character type is found.

For example:

```c
if (isdigit(pass[i]))
{
    hasdigit = 1;
}
```

After checking the complete password, the program verifies all four conditions.

## How to Run

Compile the program:

```bash
gcc password_validator.c -o password_validator
```

Run it:

```bash
./password_validator
```

On Windows:

```bash
password_validator.exe
```

## Note

This is an educational password-validation program. It checks password format only; it does not store, encrypt, or securely manage passwords.

## Author

**MD. Unick Sardar**

C Programming Project
