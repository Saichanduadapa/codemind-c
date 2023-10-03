#include<stdio.h>
#include<math.h>
int isprime(int n){
    if(n<2){
        return 0;
    }
    for(int i=2;i<=floor(sqrt(n));i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    scanf("%d",&n);
    for(int k=0;k<n;k++){
        int n,cn=0,cb=0,np,bp;
        scanf("%d",&n);
        if(isprime(n)){
            printf("%d
", n);
        }
        else{
        np = n+1;
        while(!isprime(np)){
            cn++;
            np++;
        }
        bp = n - 1;
        while(!isprime(bp)){
            cb++;
            bp--;
        }
        if(cb<=cn){
            printf("%d
",bp);
        }
        
        else{
            printf("%d
",np);
        }}
    }
}