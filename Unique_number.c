#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    int c=0;
    scanf("%[^
]%*c",s);
    for(int i=0;i<strlen(s);i++){
        for(int j=i+1;j<strlen(s);j++){
            if(s[i]==s[j]){
                c+=1;
            }
        }
    }
    if(c!=0){
        printf("Not Unique Number");
    }
    else{
        printf("Unique Number");
    }
}