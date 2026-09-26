#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

struct node *createNode()
{
    struct node *g1;

    g1 = (struct node *)malloc(sizeof(struct node));
    printf("Enter a data:");
    scanf("%d",&g1 -> info);

    g1->prev = NULL;
    g1->next = NULL;

    return g1;
}

void InsertStart()
{
    struct node *s1;
    s1 = createNode();
    if (head == NULL)
    {
        head = s1;
        return;
    }
    s1 ->next = head;
    head->prev = s1;
    head = s1;
}

void InsertEnd()
{
    struct node *e1,*e2;

    e1 = createNode();
    if(head == NULL)
    {
        head = e1;
        return;
    }
    e2 = head;
    while(e2 -> next!=NULL)
    {
        e2 = e2 -> next;
    }
    e1 -> prev = e2;
    e2 -> next = e1;
}

void InsertMiddle()
{
    int data;
    struct node *m1 , *m2;

    printf("Enter a data infront of who you want to add new data: ");
    scanf("%d", &data);
    m1 = createNode();
    if (head == NULL)
    {
        head = m1;
    }
    m2 = head;
    while(m2->info != data)
    {
        m2 = m2->next;
    }
    m1 -> next = m2 -> next;
    m1 -> prev = m2;
    m2 -> next -> prev = m1;
    m2 -> next = m1;
}

void DeleteStart()
{
    struct node *d1;

    if(head == NULL)
    {
        printf("there is no any node to delete\n");
    }
    d1 = head;
    head = head->next;
    head -> prev = NULL;
    d1 -> next = NULL;
    free(d1);
}

void DeleteEnd()
{
    struct node *e3;

    if (head == NULL)
    {
        printf("There is no any node to delete\n");
    }
    e3 = head;
    while(e3-> next != NULL)
    {
        e3 = e3 -> next;
    }
    e3 -> prev -> next = NULL;
    e3 -> prev = NULL;
    free(e3);
}

void DeleteMiddle()
{
    int data;
    struct node *e3;

    if (head == NULL)
    {
        printf("There is no any node to delete\n");
    }
    e3 = head;
    printf("Enter a data which you want to delete: ");
    scanf("%d", &data);

    while (e3 -> info!= data)
    {
        e3 = e3->next;
    }
    e3->prev->next = e3->next;
    e3->next->prev = e3->prev;
    e3->next = NULL;
    e3->prev = NULL;
    free(e3);
}

void Display()
{
    struct node *d1;

    if (head == NULL)
    {
        printf("There is no node to display\n");
    }
    else
    {
        d1 = head;
        while(d1 != NULL)
        {
            printf("%d ",d1->info);
            d1 = d1->next;
        }
    }
}

int main()
{
    int choice;
        printf("\n");
        printf("1] Insert Start\n");
        printf("2] Insert End\n");
        printf("3] Insert Middle\n");
        printf("4] Delete Start\n");
        printf("5] Delete End\n");
        printf("6] Delete Middle\n");
        printf("7] display\n");
        printf("8] Exit\n");
    while(1)
    {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
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
            }

        default:
            {
                printf("Default Input");
            }
        }
    }

    return 0;
}
