//Absolute Diffrence of two matrices skillupcoder | level-38
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int e=0,o=0;
    int m1[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int r;
            cin>>r;
            m1[i][j]=r;
            if(i%2==0){
                e+=m1[i][j];
            }
            else{
                o+=m1[i][j];
            }
        }
    }
    cout<<e<<" "<<o;
    
}