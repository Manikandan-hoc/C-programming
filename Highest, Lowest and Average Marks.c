#include<stdio.h>

void marks(int arr[],int n)
{
    int max=arr[0],min=arr[0],sum=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];

        if(arr[i]<min)
            min=arr[i];

        sum+=arr[i];
    }

    printf("Highest = %d\n",max);
    printf("Lowest = %d\n",min);
    printf("Average = %.2f",(float)sum/n);
}

int main()
{
    int arr[]={80,60,95,75,90};

    marks(arr,5);

    return 0;
}
