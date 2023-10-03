#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    int c=0;
    scanf("%s",&s);
    for(int i=0; i<=strlen(s)-1;i++){
        for(int j=i+1;j<strlen(s)-1;j++){
            if(s[i]==s[j]){
                c+=1;
            }
        }
    }
    if(c==0){
        printf("Unique Number");
    }
    else{
        printf("Not Unique Number");
    }
}