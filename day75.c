
#include <stdio.h>
int main() {
    FILE *fp;
    char text[200];
    fp = fopen("file.txt", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);
    fprintf(fp, "%s", text);
    fclose(fp);
    printf("Text appended successfully.\n");
    return 0;
}
