#include <stdio.h>
#include <conio.h>

int main()
{
    int a[10];
    int i,temp,j,N;

    printf("Enter a range :");
    scanf("%d",&N);

    printf("Enter %d Numbers:",N);

    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }

    printf("After Swapping:\n");
    for(i=0;i<N;i++)
    {
        printf("%d  ", a[i]);
    }

    return 0;
}



