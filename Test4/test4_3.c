#include <stdio.h>
void sort(int list[],int nu){
    int temp,j,k;
    for (j=nu-1;j>0;j--){
        for (k=0;k<j;k++) {
            if (list[k] > list[k + 1]) {
                temp = list[k];
                list[k]=list[k+1];
                list[k+1]=temp;
            }
        }
    }
    for (j=0;j<nu;j++){
        printf("%d ",list[j]);
    }
    
}

int main(){
    int n,i;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        int m,s;
        int x[100]={};
        s=0;
        for(m=0;s!='\n';m++){
            scanf("%d",&x[m]);
            s=getchar();
        }
        int j;
        int a[100]={},b[100]={},k=0,l=0;
        for (j=0;j<m;j++){
            if (x[j]%2==0) {
                b[l] = x[j];
                l++;
            }
            else {
                a[k] = x[j];
                k++;
            }
        }
        sort(a,k);
        sort(b,l);
        printf("\n");
    }
    return 0;
}