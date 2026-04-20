#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if(a > b) printf("Larger: %d\n", a);
    else printf("Larger: %d\n", b);
    return 0;
}
