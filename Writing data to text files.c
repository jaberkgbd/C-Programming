#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("test.txt", "w"); 
    
    if(fptr == NULL) {
        printf("Error: File could not be opened!");
        return 1;
    }
    
    fprintf(fptr, "This is Jaber Hassan's Lab Assessment File.");
    fclose(fptr); 
    
    printf("Data successfully written to test.txt\n");
    return 0;
}
