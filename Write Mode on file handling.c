#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("D:\\Code Blocks\\filehandling\\File_Handling.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be opened");
        return 1;
    }

    fputc('A', fp);
    fputc('B', fp);
    fputc('C', fp);

    fclose(fp);

    printf("Characters Written");

    return 0;
}
