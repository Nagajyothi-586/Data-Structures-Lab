//Program for binary_search by using non-recursion
#include<stdio.h>
int binary_search(int first,int last,int a[20],int key)
{
	int i,mid,pos=-1;
	while(first<=last)
	{
		mid=(first+last)/2;
		if(a[mid]==key)
		{	pos=mid;
			break;
		}
		else if(key<a[mid])
		{

			last=mid-1;
		}
		else
			first=mid+1;
	}
}
int main()
{
	int i,n,a[20],key,pos;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&key);
	pos=binary_search(0,n-1,a,key);
	if(pos==-1)
		printf("Element is not found\n");
	else
		printf("Element is found at %d location\n",pos+1);
	return 0;
}
