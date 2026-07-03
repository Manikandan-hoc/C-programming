#include<stdio.h>

int main()
{
    char str[100];
    int alpha=0,digit=0,special=0;

    fgets(str,sizeof(str),stdin);

    for(int i=0;str[i]!='\0';i++)
    {
        if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
            alpha++;
        else if(str[i]>='0'&&str[i]<='9')
            digit++;
        else if(str[i]!='\n')
            special++;
    }

    printf("Alphabets = %d\n",alpha);
    printf("Digits = %d\n",digit);
    printf("Special = %d",special);

    return 0;
}
