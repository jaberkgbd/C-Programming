#include <stdio.h>
//#include <stdlib.h>
int sum(int a, int b);

int main()
{
    int num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    result = sum(num1, num2);
    printf("sum = %d\n\n", result);
    return 0;
}

int sum(int n1, int n2)
{
    int s;
    s = n1 + n2;
    return s;
}
