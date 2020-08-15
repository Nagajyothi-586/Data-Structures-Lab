#include<stdio.h>
struct student
{
	char name[50];
	int roll;
	int m1,m2,m3;
	float avg;
	char grade;
};
int main(void)
{
	struct student s1={"John",57,24,23,22,23.00,'A'};
	printf("Name:%s\n",s1.name);
	printf("Roll no:%d\n",s1.roll);
	printf("m1=%d m2=%d m3=%d\n",s1.m1,s1.m2,s1.m3);
	printf("Average=%f\n",s1.avg);
	printf("Grade:%c\n\n",s1.grade);
	struct student s2={"Bob",58,19,20,18,19.00,'B'};
	printf("Name:%s\n",s2.name);
	printf("Roll no:%d\n",s2.roll);
	printf("m1=%d m2=%d m3=%d\n",s2.m1,s2.m2,s2.m3);
	printf("Average=%f\n",s2.avg);
	printf("Grade:%c\n\n",s2.grade);
	struct student s3={"Jack",59,10,15,12,12.33,'D'};
	printf("Name:%s\n",s3.name);
	printf("Roll no:%d\n",s3.roll);
	printf("m1=%d m2=%d m3=%d\n",s3.m1,s3.m2,s3.m3);
	printf("Average=%f\n",s3.avg);
	printf("Grade:%c\n\n",s3.grade);
}
