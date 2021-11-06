#include <stdio.h>

int main() {

    FILE* file;
    char input[100];
    char name[50];
    printf("Input the file name to be opened: ");
    scanf("%s", &name);
    file = fopen(name, "r");
    if (file == NULL)
        printf("File doesn't exist");
    else
    {
        fgets(input, 100, file);
        printf("The content of the file is: %s", input);
        fclose(file);
    }
}

