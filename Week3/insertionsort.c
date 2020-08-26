//Program for insertion_sorting
#include<stdio.h>
void insertion_sort(int a[30],int n)
{
	for(int i=1;i<n;i++)
	{
		int index=a[i];
		int j=i;
		while((j>0)&&(a[j-1]>index))
		{
			a[j]=a[j-1];
			j=j-1;
		}
		a[j]=index;
	}
}
int main()
{
	int a[30],n,i;
	printf("Enter number of elements:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	insertion_sort(a,n);
	printf("Elements after sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d \n",a[i]);
	}
	return 0;
}
	
	