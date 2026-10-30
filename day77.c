
#include <stdio.h>
#include <ctype.h>
int main()
{
    FILE *fin, *fout;
    char ch;

    fin = fopen("input.txt", "r");
    fout = fopen("output.txt", "w");

    if (fin == NULL || fout == NULL)
    {
        printf("Error opening file!");
        return 1;
    }

    while ((ch = fgetc(fin)) != EOF)
    {
        ch = toupper((unsigned char)ch);
        fputc(ch, fout);
    }

    fclose(fin);
    fclose(fout);

    printf("File converted successfully!");

    return 0;
}
