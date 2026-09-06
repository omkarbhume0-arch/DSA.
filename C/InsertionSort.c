#include <stdio.h>
#include <conio.h>

int main()
{
    int a[20];
    int i,j,temp,N;

    printf("Enter a Range:");
    scanf("%d",&N);

    printf("Enter %d Numbers :",N);

    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=1;i<=N;i++)
    {
        temp = a[i];
        for(j=i-1;j>=0 && temp<a[j];j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=temp;
    }
    for(i=0;i<N;i++)
    {
        printf("%d ",a[i]);
    }
}
