#include <stdio.h>

/*void change_1(int x[], int a){
    printf("--> ");
    for (int i=a;i<=x[0];i++){
        printf("%d ",x[i]);
    }
    printf("\n");
    for (int i=x[0];i>a;i--){
        printf("--> ");
        for (int j=1;j<=x[0];j++){
            if (j!=i&&j>=a)
                printf("%d ",x[j]);
        }
        printf("\n");
    }
    if (a!=x[0]){
        change_1(x,a+1);
    }
}*/

void change(int x[],int flag[],int n, int len){
    if (n==len){
        printf("--> ");
        for (int i=1;i<len;i++){
            if (flag[i]==1){
                printf("%d ",x[i]);
            }
        }
        printf("\n");
        return;
    }
    flag[n]=1;
    change(x,flag,n+1,len);

    flag[n]=0;
    change(x,flag,n+1,len);
}

int main(){
    int n;
    scanf("%d",&n);
    getchar();
    for (int i=0;i<n;i++){
        int a,j=0;
        int x[100]={},flag[100]={};
        while((a=getchar())!='\n'){
            if (a>=48&&a<=57) {
                x[j] = a - 48;
                j++;
            }
        }
        change(x,flag,1,x[0]+1);
    }
    return 0;
}