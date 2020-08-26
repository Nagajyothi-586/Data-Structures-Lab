//Program for selection_sorting
#include<stdio.h>
void selection_sort(int a[30],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
			int t=a[i];
			a[i]=a[min];
			a[min]=t;

		}
		
	}
	
}
int main()
{
	int a[30],n,i;
	printf("Enter number of elements:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	selection_sort(a,n);
	printf("Elements after sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d \n",a[i]);
	}
	return 0;
}
	
	