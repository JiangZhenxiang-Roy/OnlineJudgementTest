#include <stdio.h>

void sort(long x[]){
    long temp;
    for (int i=2;i>0;i--){
        for (int j=0;j<i;j++){
            if (x[j]>x[j+1]){
                temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        long x[3]={};
        for (int j=0;j<3;j++){
            scanf("%ld",&x[j]);
        }
        sort(x);
        if (x[0]<=0||x[1]<=0||x[2]<=0){
            printf("No\n");
            continue;
        }
        if (x[0]*x[0]+x[1]*x[1]==x[2]*x[2]){
            printf("Yes\n");
        }
        else {
            printf("No\n");
        }
    }
    return 0;
}