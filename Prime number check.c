#include <stdio.h>
int main() {
    int n=7, flag=0;
    for(int i=2; i<=n/2; i++) if(n%i==0) flag=1;
    if(flag==0) printf("Prime"); else printf("Not Prime");
    return 0;
}
