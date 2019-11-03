#include <stdio.h>
int main (){
    //Collect data
    int x[100][100];
    int i,j,k,l,temp;
    int n;
    int a,b;
    scanf ("%d",&n);
    for (i =0;i<n;i++){
        x[i][0]=100;
        for (j=0;;j++){
            if (x[i][0]==j-1){
                break;
            }
            scanf("%d",&x[i][j]);
        }
        for (k=x[i][0]-1;k>0;k--){
            for (l=1;l<=k;l++){
                if (x[i][l]>x[i][l+1]){
                    temp=x[i][l];
                    x[i][l]=x[i][l+1];
                    x[i][l+1]=temp;
                }
            }
        }
        a=x[i][1];
        for (k=2;k<=x[i][0];k++){
            if (x[i][1]<x[i][k]){
                a = x[i][k];
                break;
            }
        }
        if (a!=x[i][1]){
            printf("%d\n",a);
        }
        else{
            printf("ERROR\n");
        }
    }
    return 0;
}