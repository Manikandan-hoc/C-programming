# include <stdio.h>
int main()
{
    int i, j , num[]= {2,7,11,15} ;
    int target = 18;
    int n= 4;
    for (i=0;i<n;i++)
    {
      for (j=i+1;j < n;j++)
      {
           if (num[i]+num[j]== target)
  {
            printf("[%d,%d]\n",i,j);
            return 0;
    }
   }
  }
  return 0;
  
}
