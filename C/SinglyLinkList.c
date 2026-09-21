#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *next;
};
struct node *start = 0;
struct node *CreateNode()
{
    struct node *k1;
    k1=(struct node*) malloc (sizeof(struct node));
    printf("Enter a data:");
    scanf("%d",&k1 -> info);
    k1->next= NULL;
    return k1;
};

void InsertStart()
{
    struct node *b1;
    b1 = CreateNode();
    if(start==NULL)
    {
        start=b1;
    }
    else
    {
        b1->next = start;
        start = b1;
    }
}

void InsertEnd()
{
    struct node *s1,*s2;
    s1 = CreateNode();
    if(start==NULL)
    {
        start = s1;
    }
    else
    {
        s2 = start;
        while(s2->next!=NULL)
        {
            s2=s2->next;
        }
        s2->next=s1;
    }
}

void InsertMiddle()
{
    struct node *b1,*b2;
    int n;
    b1 = CreateNode();
    if(start==NULL)
    {
        start = b1;
    }
    else
    {
        printf("Enter a data where you want to enter data:");
        scanf("%d",&n);

        b2 = start;
        while(b2 -> info!=n)
        {
            b2 = b2->next;
        }
        b1->next = b2->next;
        b2->next = b1;
    }
}

void DeleteStart()
{
    struct node *k1;
    if(start== NULL)
    {
        printf("there is no any node to delete");
    }
    else
    {
        k1 = start;
        start = start->next;
        k1->next = NULL;
        free (k1);
        printf("Node is deleted succesfully");
    }
}

void DeleteEnd()
{
    struct node *j1,*j2;
    if(start== NULL)
    {
        printf("there is no any node to delete");
    }
    else if(start->next == NULL)
    {
        free(start);
        start=NULL;
    }
    else
    {
        j1 = start;
        while(j1->next->next != NULL)
        {
            j1 = j1->next;
        }
        j2= j1->next;
        j1->next=NULL;
        free(j2);
        printf("Node deleted successfully");
    }
}

void DeleteMiddle()
{
    struct node *v1,*v2;
    int m;
    if(start==NULL)
    {
        printf("there ia no any node to delete");
    }
    else
    {
        printf("Enter a data which you want to delete:");
        scanf("%d",&m);
        v1 = start;
        while(v1->next->info!=m)
        {
            v1 = v1->next;
        }
        v2 = v1 ->next;
        v1->next=v2->next;
        v2->next=NULL;
        free(v2);
    }
}

void Display()
{
    struct node *d1;
    if(start== NULL)
    {
        printf("there is no node to display");
    }
    else
    {
        d1=start;
        while(d1!= NULL)
        {
            printf("%d ",d1->info);
            d1=d1->next;
        }
    }
}
int main()
{
    int ch;
    printf("\n 1] Insert from start");
    printf("\n 2] INsert from End");
    printf("\n 3] Insert from Middle");
    printf("\n 4] Delete from Start");
    printf("\n 5] Delete from End");
    printf("\n 6] Delete from Middle");
    printf("\n 7] Display");
    printf("\n 8] Exit");

    while(1)
    {
        printf("\nEnter your choice:");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            {
                InsertStart();
                break;
            }
        case 2:
            {
                InsertEnd();
                break;
            }
        case 3:
            {
                InsertMiddle();
                break;
            }
        case 4:
            {
                DeleteStart();
                break;
            }
        case 5:
            {
                DeleteEnd();
                break;
            }
        case 6:
            {
                DeleteMiddle();
                break;
            }
        case 7:
            {
                Display();
                break;
            }
        case 8:
            {
                exit(0);
                printf("\n");
            }
        default:
            {
                 printf("wrong input..");
            }
        }
    }
    return 0;
}

