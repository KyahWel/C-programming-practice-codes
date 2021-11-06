#include <stdio.h>

int main() {

    char name[100];
    char input;
    int wCounter = 1;
    int cCounter = 0;
    FILE* pFile;

    printf("Input the file name to be opened: ");
    scanf("%s", name);
    pFile = fopen(name, "r");

    while(!feof(pFile)) {
        input = getc(pFile);

        if(input == ' ' || input == '\n')
            wCounter++;
        else
            cCounter++;

    }

    printf("\nThe number of words in the file %s are: %d", name, wCounter);
    printf("\nThe number of characters in the file %s are: %d", name, cCounter-1);
    fclose(pFile);
    return 0;
}
