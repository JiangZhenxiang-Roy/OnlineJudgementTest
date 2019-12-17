#include <stdio.h>
#include <stdlib.h>

void abs_sort(long x[],int n){
    long temp;
    for (int i=n-1;i>0;i--){
        for (int j=0;j<i;j++){
            if (labs(x[j])>labs(x[j+1])){
                temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
        }
    }
}

int main(){
    int n;
    long x[21]={};
    x[0]=20;
    long ans[20]={};
    for (int i=0;i<=x[0];i++){
        scanf("%ld",&x[i]);
        if (i!=0)
            ans[i-1]=x[i];
    }
    abs_sort(ans,x[0]);
    printf("%ld",ans[x[0]-1]);
    return 0;
}