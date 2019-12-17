#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int show_str(char x[], int n){
    for (int j=0;j<n;j++){
        if (x[j]=='\0'){
            printf(" ");
        }
        else {
            printf("%c",x[j]);
        }
    }
    printf("\n");
}

int main(){
    int n;
    scanf("%d",&n);
    char x[20][5]={};
    int ans[20]={};
    char sym[21]={};
    int flag[31]={};
    char show[31][40]={};
    for (int i=0;i<n;i++) {
        scanf("%s", x[i]);
        int len;
        len = strlen(x[i]);
        if ((x[i][len - 1] >= 48) && (x[i][len - 1] <= 57)) {
            sym[i] = '+';
        } else {
            sym[i] = x[i][len - 1];
            x[i][len - 1] = '\0';
        }
        ans[i]=atoi(x[i]);
        if (ans[i]>0){
            for (int j=0;j<ans[i];j++){
                show[j+16][2*i]=sym[i];
                flag[j+16]=1;
            }
        } else {
            for (int j=0;j>ans[i];j--){
                show[j+14][2*i]=sym[i];
                flag[j+14]=1;
            }
        }
    }
    for (int i=0;i<2*n-1;i++)
        show[15][i]='-';
    flag[15]=1;
    for (int i=30;i>=0;i--){
        if (flag[i]==1){
            show_str(show[i],2*i-1);
        }
    }
    /*for (int j=30;j>=0;j--){
        if (strcmp(show[j],"")!=0){
            printf("%s\n",show[j]);
        }
    }*/
    return 0;
}