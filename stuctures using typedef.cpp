#include<stdio.h>
typedef struct student {
	char name[20];
	char roll[10];
	int age;
	float cgpa;
}stu;
int main()
{
	stu s1{"chandu","22a91a61d1",18,9.0};
	printf("%s %s %d %f",s1.name,s1.roll,s1.age,s1.cgpa);
}
