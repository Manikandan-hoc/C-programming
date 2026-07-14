#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("D:\\Code Blocks\\filehandling\\filehandling.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be opened.\n");
        return 1;
    }

    fprintf(fp, "Hey Buddy");

    fclose(fp);

    printf("Data written successfully.");

    return 0;
}
