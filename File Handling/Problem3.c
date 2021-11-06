#include <stdio.h>

int main() {

    int num;
    char input;
    FILE* pFile = fopen("test.txt", "w+");

    printf("Input the number of lines to be written: ");
    scanf("%d", &num);

    printf("::The lines are::\n");
    for(int x = 1; x <= num; x++) {
        fprintf(pFile, "test line %d\n", x);
        printf("test line %d\n", x);
    }

    rewind(pFile);
    printf("\nThe content of the file test.txt is:\n");
    while(!feof(pFile)) {
        input = getc(pFile);
        printf("%c", input);
    }
    fclose(pFile);
    return 0;
}
