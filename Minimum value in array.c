#include <stdio.h>
int main() {
    int arr[] = {12, 45, 2, 89, 23};
    int min = arr[0];
    for(int i=1; i<5; i++) if(arr[i] < min) min = arr[i];
    printf("Min: %d\n", min);
    return 0;
}
