#include<stdio.h>
struct complex
{
	int real;
	int imag;
};
struct complex add(struct complex c1,struct complex c2)
{
	struct complex c3;
	c3.real=c1.real+c2.real;
	c3.imag=c1.imag+c2.imag;
	return c3;
}
int main()
{
	struct complex c1,c2,c3;
	printf("Enter 1st complex no of real and imag parts:\n");
	scanf("%d%d",&c1.real,&c1.imag);
	printf("Enter 2nd complex no of real and imag parts:\n");
	scanf("%d%d",&c2.real,&c2.imag);
	c3=add(c1,c2);
	printf("sum=%d+%di",c3.real,c3.imag);
	return 0;
}