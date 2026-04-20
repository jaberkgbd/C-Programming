#include <stdio.h>
int main() {
    int i = 10;
    float f = 5.5;
    float result = i + f; // int স্বয়ংক্রিয়ভাবে float-এ রূপান্তরিত হয়
    printf("Result: %.2f\n", result);
    return 0;
}
