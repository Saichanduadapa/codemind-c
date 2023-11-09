#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s1=0,s2;
    for(int i=1;i<=n;i++){
        s1+=i*i;
    }
    s2=((n*(n+1))/2)*((n*(n+1))/2);
    printf("%d",(s2-s1));
}