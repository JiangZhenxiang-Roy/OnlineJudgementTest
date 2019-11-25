#include <stdio.h>
int main(){
    int m,n,i;
    scanf("%d %d",&m,&n);
    int as[m+n];
    for(i=0;i<m;i++){
        scanf("%d",&as[i]);
    }
    for (i=0;i<n;i++){
        scanf("%d",&as[m+i]);
    }
    int j,k;
    for (j=m+n-1;j>0;j--){
        for (k=0;k<j;k++){
            if (as[k]<as[k+1]){
                int temp=as[k];
                as[k]=as[k+1];
                as[k+1]=temp;
            }
        }
    }
    for (i=m+n-1;i>=0;i--){
        printf("%d ",as[i]);
    }
    return 0;
}