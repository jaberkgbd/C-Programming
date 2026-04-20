#include <stdio.h>
int main() {
    char line[100];
    printf("Enter a full sentence: ");
    gets(line); 
    printf("You entered: ");
    puts(line); 
    return 0;
}
