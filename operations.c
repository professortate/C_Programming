
#include <stdio.h>

int main() {
    int a = 10, b = 5, result;
    int x = 1, y = 0;
    int num = 6;

    // Arithmetic operations
    result = a + b;
    printf("Addition: a + b = %d\n", result);

    result = a - b;
    printf("Subtraction: a - b = %d\n", result);

    result = a * b;
    printf("Multiplication: a * b = %d\n", result);

    result = a / b;
    printf("Division: a / b = %d\n", result);

    result = a % b;
    printf("Modulus: a %% b = %d\n", result);

    // Relational operations
    printf("Relational Operations:\n");
    if (a == b) {
        printf("a is equal to b\n");
    } else {
        printf("a is not equal to b\n");
    }

    if (a != b) {
        printf("a is not equal to b\n");
    } else {
        printf("a is equal to b\n");
    }

    if (a > b) {
        printf("a is greater than b\n");
    } else {
        printf("a is not greater than b\n");
    }

    if (a < b) {
        printf("a is less than b\n");
    } else {
        printf("a is not less than b\n");
    }

    // Logical operations
    printf("Logical Operations:\n");
    if (x && y) {
        printf("x && y is true\n");
    } else {
        printf("x && y is false\n");
    }

    if (x || y) {
        printf("x || y is true\n");
    } else {
        printf("x || y is false\n");
    }

    if (!x) {
        printf("!x is true\n");
    } else {
        printf("!x is false\n");
    }

    // Bitwise operations
    result = a & b;
    printf("Bitwise AND: a & b = %d\n", result);

    result = a | b;
    printf("Bitwise OR: a | b = %d\n", result);

    result = a ^ b;
    printf("Bitwise XOR: a ^ b = %d\n", result);

    result = ~a;
    printf("Bitwise NOT: ~a = %d\n", result);

    result = a << 1;
    printf("Left Shift: a << 1 = %d\n", result);

    result = a >> 1;
    printf("Right Shift: a >> 1 = %d\n", result);

    // Unary operation
    result = -a;
    printf("Unary Minus: -a = %d\n", result);

    result = ++a;
    printf("Pre Increament: +a = %d\n", result);


    // Ternary operator
    result = (num % 2 == 0) ? 1 : 0;
    printf("Ternary Operator: Is num even? %d\n", result);

    return 0;
}
