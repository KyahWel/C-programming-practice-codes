#include <stdio.h>

int main() {

    char name[100];
    char input[100];
    char replace[100];
    int line;
    int counter = 0;
    FILE* pFile;
    FILE* temp;

    printf("Input the file name to be opened: ");
    scanf("%s%*[^\n]", name);
    getchar();

    printf("Input the content of the new line: ");
    fgets(replace, 100, stdin);

    printf("Input the line no you want to replace: ");
    scanf("%d", &line);

    pFile = fopen(name, "r");
    temp = fopen("temp.txt", "w");

    while(!feof(pFile)) {
        fgets(input, 100, pFile);
        counter++;
        if(counter == line)
            fprintf(temp, "%s", replace);
        else
            fprintf(temp, input);
    }
    fclose(pFile);
    fclose(temp);

    pFile = fopen(name, "w");
    temp = fopen("temp.txt", "r");
    printf("The content of the file %s is:\n", name);
    while(!feof(temp)) {
        fgets(input, 100, temp);
        fprintf(pFile, input);
    }
    printf("Replacement did successfully..!!");

    fclose(pFile);
    fclose(temp);
    remove("temp.txt");
    return 0;
}
