#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int lineNum, counter = 1, maxNum = 200;
    char fname[30], str[maxNum], tempName[20] = "temp.txt", ch;
    FILE *textFile, *tempText;

    printf("Input the file name to be opened: ");
    scanf("%s", &fname);

    textFile = fopen(fname, "r");
    tempText = fopen(tempName, "w");

    rewind(textFile);
    printf("Input the line you want to remove: ");
    scanf("%d", &lineNum);
    while(ch != EOF)
    {
        ch = fgetc(textFile);
        if(ch == '\n')
            counter++;
        if (counter != lineNum)
            fputc(ch, tempText);
    }

    fclose(textFile);
    fclose(tempText);
    remove(fname);
    rename(tempName, fname);

    textFile = fopen(fname, "r");
    ch = fgetc(textFile);
    printf("The content of the file %s is: \n",fname);
    while(ch!=EOF)
    {
        printf("%c", ch);
        ch = fgetc(textFile);
    }
    fclose(textFile);
}


