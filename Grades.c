
#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e); 
    if(a>=90,b>=90,c>=90,d>=90,e>=90)
    {
        printf("Grade A"); 
        }
        else if(a>=80&&b>=80&&c>=80&&d>=80&&e>=80) 
        { 
            printf("Grade B"); 
            
        } 
        else if(a>=70,b>=70,c>=70,d>=70,e>=70)
        { 
            printf("Grade C");
            }
            else if(a>=60,b>=60,c>=60,d>=60,e>=60)
            {
                printf("Grade D");
                } 
                else if(a>=40,b>=40,c>=40,d>=40,e>=40)
                {
                    printf("Grade E");
                    }
                    else 
                    {
                        printf("Grade F");
                        }
}
}
