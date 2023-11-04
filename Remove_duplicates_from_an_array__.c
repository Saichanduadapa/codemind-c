#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n], i;
    for(i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    
    for(i = 0; i < n; i++){
        
        if(arr[i] == -1){ //Check this after
            continue; // understanding inner loop
        }
        
        for(int j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                arr[j] = -1;
            }
        }
    }
    
    for(i = 0; i < n; i++){
        if(arr[i] != -1){
            printf("%d ", arr[i]);
            
        }
}
}