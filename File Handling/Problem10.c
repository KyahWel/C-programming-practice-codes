#include <stdio.h>

int main() {

    char name[100];
    char input[100];
    char c;
    int counter = 0;
    int line;
    FILE* pFile;

    printf("Input the file name to be opened: ");
    scanf("%s", name);
    printf("Input the number of lines to be written: ");
    scanf("%d", &line);

    pFile = fopen(name, "r+");
    while(!feof(pFile)) {
        if(getc(pFile) == '\n')
        counter++;
    }
    counter++;

    printf("The lines are:");
    fprintf(pFile, "\n");
    for(int x = 1; x <= line; x++) {
        printf("\ntest line %d", x+counter);
        fprintf(pFile, "\ntest line %d", x+counter);
    }

    printf("\n\nThe content of the file %s is:\n", name);

    rewind(pFile);
    while(!feof(pFile)) {
        c = getc(pFile);
        printf("%c", c);
    }
    fclose(pFile);

    return 0;
}
