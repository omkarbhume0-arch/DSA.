void linearsearch(int a[],int r,int search)
{
int k=0,i;
for(i=0;i<6;i++)
	{
	
		if(a[i]==search)
		{
			printf("No is found at possition: %d",i+1);
			k++;
			break;
		}
	}
		if(k==0)
		{
			printf("No is not found");
		}
}

int main()
{	
	int i,search,r;
	int a[10];
	
	printf("Enter a range:");
	scanf("%d",&r);
	
	printf("Enter a %d Numbers :",r);
	for(i=0;i<r;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter a number you want to search :");
	scanf("%d",&search);
	linearsearch(a,r,search);
	getch();
	
	
}






