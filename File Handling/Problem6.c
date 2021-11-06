#include <stdio.h>

int main() {

    char name[100];
    char input;
    int counter = 1;
    FILE* pFile;

    printf("Input the file name to be opened: ");
    scanf("%s", name);
    pFile = fopen(name, "r");

    while(!feof(pFile)) {
        input = getc(pFile);
        printf("%c", input);
        if(input == '\n')
            counter++;
    }
    printf("\nThe lines in the file %s are: %d", name, counter);
    fclose(pFile);
    return 0;
}
