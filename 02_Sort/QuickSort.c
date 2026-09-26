#include <stdio.h>
#include <conio.h>

int quick(int a[], int beg , int end);

void quick_sort(int a[],int N)
{
    int top =-1 , beg , end , pivot ;
    int lower[20] , upper[20];

    if (N>1)
    {
            top++;
            lower[top] = 0;
            upper[top] = N-1;
    }

    while(top != -1)
    {
        beg = lower[top];
        end = upper[top];
        top --;
        pivot = quick(a,beg,end);

        if(beg < pivot-1)
        {
            top ++;
            lower[top] = beg;
            upper[top] = pivot-1;
        }

        if (pivot+1 < end )
        {
            top ++;
            lower[top] = pivot+1;
            upper[top] = end;
        }
    }
}

        int quick(int a[],int beg ,int end)
        {
            int l,r,t,pivot;
            l = beg;
            r = end;
            pivot = l;

            s1: while(a[pivot]<=a[r] && pivot!=r)
            {
                r--;
            }
            if (pivot == r)
            {
                return pivot;
            }
            if(a[pivot] > a[r])
            {
                t = a[pivot];
                a[pivot]=a[r];
                a[r]=t;
                pivot=r;
            }

            while(a[pivot]>= a[l] && pivot != l)
            {
                l++;
            }
            if (pivot == l)
            {
                return pivot;
            }

            if(a[pivot] < a[l])
            {
                t=a[pivot];
                a[pivot]=a[l];
                a[l]=t;
                pivot=l;
            }
            goto s1;
        }

int main()
{
    int a[]={77,44,56,84,45,65,12,32,21,66};
    int N=10,i;

    quick_sort(a,N);
    for(i=0;i<N;i++)
    {
        printf("%d ",a[i]);
    }
    getch();
    return 0;
}
