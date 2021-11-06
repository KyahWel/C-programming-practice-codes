#include <stdio.h>

int main() {

    char name[100];
    char input;
    FILE* pFile;

    printf("Input the file name to be opened: ");
    scanf("%s", &name);
    pFile = fopen(name, "r");

    while(!feof(pFile)) {
        input = getc(pFile);
        printf("%c", input);
    }
    fclose(pFile);
    return 0;
}
