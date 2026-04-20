#include <stdio.h>
int main() {
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    if(marks >= 40) printf("Result: Pass\n");
    else printf("Result: Fail\n");
    return 0;
}
