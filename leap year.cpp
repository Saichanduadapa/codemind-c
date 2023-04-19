#include<stdio.h>
struct student{
	char name [20];
	char roll [12];
	int age;
	float cgpa;
};
int main()
{
	struct student s1{"thor","4",28,8.9};
	printf("%s %s %d %.2f",s1.name,s1.roll,s1.age,s1.cgpa);
}
			
