import java.util.Scanner;
class BinarySearch
{
	public static void main(String args[])
	{
		Scanner s=new Scanner(System.in);
		
		int N,i,search,m,l=0,r;
	
		System.out.println("Enter a range:");
		N= s.nextInt();
		
		int a[]= new int[N];
		r=N-1;
	
		System.out.println("Enter"+ N +"Numbers:");
	
		for(i=0;i<N;i++)
		{
	  	 a[i]=s.nextInt();	
		}
	
		System.out.println("ENter a number you want to search:");
		search= s.nextInt();
		
		while(l<=r)
		{
			m=(l+r)/2;
			if(a[m]==search)
			{
				System.out.println("NO is found at possition:"+(m+1));
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
		if(l>r)
		{
				System.out.println("NO is not found");
		}

		}

	
	}

}