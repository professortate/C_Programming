#include <stdio.h>

void towers(int n, char src, char dest, char aux) {
    if (n == 1) {
        printf("Move Disk 1 from PEG %c to PEG %c\n", src, dest);
        return;
    }

    towers(n - 1, src, aux, dest);
    printf("Move Disk %d from PEG %c to PEG %c\n", n, src, dest);
    towers(n - 1, aux, dest, src);
}

int main() {
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);

    towers(n, 'A', 'C', 'B');

    return 0;
}
