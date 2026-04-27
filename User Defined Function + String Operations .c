#include <stdio.h>
#include <string.h>

void stringOperations()
{
    char s1[100];
    char s2[100];
    char result[200];

    printf("=== String Operations with User Input ===\n\n");


    printf("Enter first string  : ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = 0;

    printf("Enter second string : ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = 0;

    printf("\n--- Operations Result ---\n\n");
    
    strcpy(result, s1);
    printf("1. strcpy(result, s1)  => %s\n", result);
    printf("   Length = %d\n\n", (int)strlen(result));

    strcat(result, s2);
    printf("2. strcat(result, s2) => %s\n", result);
    printf("   Length = %d\n\n", (int)strlen(result));

    int cmp = strcmp(s1, s2);
    printf("3. strcmp(s1, s2) => %d ", cmp);
    if(cmp == 0)
        printf("(Both strings are same)\n\n");
    else
        printf("(Strings are different)\n\n");


    printf("4. Replace Example:\n");
    printf("   Original : %s\n", s1);

    strcpy(result, s1);
    strcat(result, " replaced by ");
    strcat(result, s2);

    printf("   After replace with second string : %s\n", result);
    printf("   New Length = %d\n", (int)strlen(result));

    printf("\n=== All operations completed successfully! ===\n");
}

int main()
{
    printf("Lab Assignment - User Defined Function + String Operations (with Input)\n\n");

    stringOperations();

    return 0;
}






