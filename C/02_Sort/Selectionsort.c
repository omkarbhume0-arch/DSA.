/* #include <stdio.h>
#include <conio.h>

int main()
{
    int a[]={45,64,32,12,00};
    int i,j,index,min,temp,N=5;

    for(i=0;i<5;i++)
    {
        min=a[i];
        index=i;

        for(j=i+1;j<5;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                index=j;
            }
        }
        temp=a[i];
        a[i]=a[index];
        a[index]=temp;
    }
    printf("After sorting:\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}*/


//TAKING INPUT FROM KEYBOARD FOR SELECTION SORT

#include <stdio.h>
#include <conio.h>

int main()
{   int a[10];
    int i,j,min,index,temp,N;

    printf("Enter a range:");
    scanf("%d",&N);

    printf("Enter %d Numbers :",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<N-1;i++)
    {
        min=a[i];
        index=i;
        for(j=i+1;j<N;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                index=j;
            }
        }
        temp=a[i];
        a[i]=a[index];
        a[index]=temp;
    }
    printf("After swapping :\n");
    for(i=0;i<N;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;

}

































