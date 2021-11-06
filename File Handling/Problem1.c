#include <stdio.h>

int main() {

    FILE* file = fopen("test.txt", "w");
    char input[1000];

    printf("Input a sentence for the file: ");
    gets(input);
    fprintf(file, input);

    fclose(file);
    printf("The file test.txt created successfully...!!");
}
