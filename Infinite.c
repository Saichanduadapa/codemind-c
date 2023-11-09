#include<stdio.h>
int  main(){
    while(true){
        int a;
        scanf("%d",&a);
        if(a==-1){
            break;
        }
        else{
            printf("%d
",a*a);
        }
    }
}