#include <stdio.h>

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("After swapping without pointers:\n");
    printf("a = %d b = %d\n", a, b);
}

int main() {
    int a = 10, b = 20;
    swapByValue(a, b);
    return 0;
}
