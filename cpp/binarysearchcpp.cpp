#include <iostream>
#include <conio.h>

int main()
{
    int a[100];
    int N,i,search,m,l=0,r;

    cout <<"Enter a range:";
    cin>>N;

    r=n-1;

    cout<<"ENTER"<<N<<"NUMBERS:";

    for(i=0;i<N;i++)
    {
        cin>>a[i];
    }

    cout<<"Enter a NO you want to search :";
    cin>>search;


    while(l<=r)
    {
        m=(l+r/2);

        if(a[m]==search)
        {
            cout<<"NO is found at possition"<<m+1;
            break;
        }

        else if(a[m]>search)
        {
            r=m-1;
        }

        else if(a[m]<search])
        {
            l=m+1;
        }
    }
    if(l>r)
    {
        cout<<"NO is not found";
    }

    getch();
}
