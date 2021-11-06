#include <stdio.h>

int main() {

    char name[100];
    int counter = 1;
    FILE* pFile;

    printf("Input the file name to be opened: ");
    scanf("%s", name);
    pFile = fopen(name, "r");

    while(!feof(pFile)) {
        if(getc(pFile) == '\n')
            counter++;
    }

    printf("The lines in the file %s are: %d", name, counter);
    fclose(pFile);
    return 0;
}
