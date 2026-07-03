#include<stdio.h>

void count(int *p,int n)
{
    int even=0,odd=0,sum=0;

    for(int i=0;i<n;i++)
    {
        if(*p%2==0)
            even++;
        else
            odd++;

        sum+=*p;
        p++;
    }

    printf("Even = %d\n",even);
    printf("Odd = %d\n",odd);
    printf("Sum = %d",sum);
}

int main()
{
    int arr[]={10,5,8,7,2};

    count(arr,5);

    return 0;
}
