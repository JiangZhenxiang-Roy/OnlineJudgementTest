#include <stdio.h>
int main(){
    int n,i,m,k,l,j;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&m);
        for (k=0;k<m;k++){
            for (j=0;j<k;j++){
                printf(" ");
            }
            for (l=0;l<2*m-1-2*k;l++){
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}