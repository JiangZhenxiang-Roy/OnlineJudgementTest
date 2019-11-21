#include <stdio.h>
int main(){
    int n,i,m,j,k,l,temp;
    scanf("%d",&n);
    int x[1000];
    for (l=0;l<n;l++) {
        for (i = 0; i < 1000; i++) {
            scanf("%d", &x[i]);
            if (x[i] == 0) {
                m = i + 1;
                break;
            }
        }

        for (j=m;j>0;j--){
            for (k=0;k<j-1;k++){
                if (x[k]>x[k+1]){
                    temp=x[k];
                    x[k]=x[k+1];
                    x[k+1]=temp;
                }
            }
        }

        for (i=1;i<=m;i++){
            if (x[i]!=i){
                printf("%d\n",i);
                break;
            }
        }
    }
    return 0;

}