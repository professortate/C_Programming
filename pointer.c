#include <stdio.h>

int main() {
    int num = 42;
    int *ptr1, *ptr2, *ptr3;

    // Initialize the first pointer
    ptr1 = &num;

    // Create a chain of 3 pointers
    ptr2 = ptr1;
    ptr3 = ptr2;

    // Check the values pointed to by ptr2 and ptr3
    printf("Value pointed to by ptr1: %d\n", *ptr1);
    printf("Address of num is : %u\n", ptr1);
    printf("Value pointed to by ptr2: %d\n", *ptr2);
    printf("Address of ptr1  is : %u\n", ptr2);
    printf("Value pointed to by ptr3: %d\n", *ptr3);
    printf("Address of ptr2 is : %u\n", ptr2);

    return 0;
}
