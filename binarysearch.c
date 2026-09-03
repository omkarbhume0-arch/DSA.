void binarysearch(int a[], int n, int search)
{
	int i;
	int m;
	int l=0;
	int r=n-1;
	
	while(l<=r)
	{
		m=(l+r)/2;
		if(a[m]==search)
		{
			printf("No is found at position %d",m);
			break;
		}
		else if(a[m]>search)
		{
			r=m-1;
		}
		else if(a[m]<search)
		{
			l=m+1;
		}
	}
	if(l>r)
	{
		printf("No is not found");
	}

}
int main()
{
	int search;
	int i;
	int n;
	int a[100];
	
	printf("Enter a range:");
	scanf("%d",&n);
	
	printf("Enter a %d numbers : ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter a number %d you want to search:",n);\n \n
	scanf("%d",&search);\n
	
	binarysearch(a,n,search);

return 0;

}