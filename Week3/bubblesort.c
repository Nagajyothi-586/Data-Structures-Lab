//Program for bubble_sorting
#include<stdio.h>
void bubble_sort(int a[20],int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}
	

int main()
{
	int a[20],n,i;
	printf("Enter number of elements:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	bubble_sort(a,n);
	printf("Elements after sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d \n",a[i]);
	}
	return 0;
}
	
	