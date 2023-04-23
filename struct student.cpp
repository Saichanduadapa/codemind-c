#include<stdio.h>
struct student{
	char roll[100];
	char name[100];
	int age;
	float cgpa;
};
void printstructure(struct student *st)
{
	printf("%s\t%s\t%d\t%.2f",st->roll,st->name,st->age,st->cgpa);
}
int main()
{ struct student s1;
struct student *s1_ptr;
s1_ptr=&s1;
	scanf("%s%s%d%f",&s1_ptr->roll,&s1_ptr->name,&s1_ptr->age,&s1_ptr->cgpa);
	printf("roll number\tstudent name \tage\tcgpa\n");
	printstructure(s1_ptr);
}
