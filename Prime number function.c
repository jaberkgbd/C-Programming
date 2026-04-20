#include <stdio.h>
int isPrime(int n) {
    for(int i=2; i<=n/2; i++) if(n%i==0) return 0;
    return 1;
}
int main() {
    if(isPrime(7)) printf("7 is Prime\n");
    else printf("7 is not Prime\n");
    return 0;
}
