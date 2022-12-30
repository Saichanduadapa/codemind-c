#include<stdio.h>
int main() 
{
    int num;
    scanf("%d",&num);
    if(num%400==0)
    {
        printf("True");
        }
        else
        {
            if(num%100==0) 
            {
                printf("False"); 
                        } 
                        else if(num%4==0)
                        {
                            printf("True");
                            }
                            else
                            {
                                printf("False");
                                }
            }
      }