#include <stdio.h>
#include <string.h>

int main()
{
    char word1[] = "abc";
    char word2[] = "pqr";
    char merged[100];

    int i = 0, j = 0, k = 0;

    while(word1[i] != '\0' && word2[j] != '\0')
    {
        merged[k++] = word1[i++];
        merged[k++] = word2[j++];
    }

    while(word1[i] != '\0')
    {
        merged[k++] = word1[i++];
    }

    while(word2[j] != '\0')
    {
        merged[k++] = word2[j++];
    }

    merged[k] = '\0';

    printf("MERGED VALUES ARE : %s", merged);

    return 0;
}
