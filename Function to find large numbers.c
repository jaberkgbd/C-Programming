#include <stdio.h>
int findMax(int a, int b) {
    return (a > b) ? a : b;
}
int main() {
    printf("Max: %d\n", findMax(15, 25));
    return 0;
}
