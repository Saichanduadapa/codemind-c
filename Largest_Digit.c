#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    char s[100];
    scanf("%s",&s);
    char  m=s[0];
    for(int i=0;i<strlen(s)-1;i++){
       if(m<s[i]){
           m=s[i];
       }
    }
    printf("%c",m);
}