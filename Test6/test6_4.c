#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void char_change(char* ch1,char* ch2){
    char ch[100];
    strcpy(ch,ch1);
    strcpy(ch1,ch2);
    strcpy(ch2,ch);
}

void int_change(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int n;
    scanf("%d",&n);
    char na[100][11];
    char id[100][19];
    int  gr[100];
    getchar();
    for (int i=0;i<n;i++){
        char temp[4];
        scanf("%s %s %s",na[i],id[i],temp);
        if (temp[0]==110){
            gr[i]=0;
            i--;
            n--;
        }
        else
            gr[i]=atoi(temp);
    }
    for (int i=n-1;i>0;i--){
        for (int j=0;j<n-1;j++){
            if (gr[j]>gr[j+1]){
                int_change(&gr[j],&gr[j+1]);
                char_change(id[j],id[j+1]);
                char_change(na[j],na[j+1]);
            }
        }
    }
    int k;
    for (k=n-1;k>=0;k--){
        if (gr[k]!=gr[k-1])
            break;
    }
    for (int j=n-1;j>=k;j--){
        for (int l=k;l<j;l++) {
            if (strcmp(na[l], na[l + 1]) > 0) {
                char_change(na[l], na[l + 1]);
                char_change(id[l],id[l+1]);
            }
        }
    }
    printf("%s %s\n",na[k],id[k]);
    for (k=0;k<=n-1;k++){
        if (gr[k]!=gr[k+1])
            break;
    }
    for (int j=k;j>=0;j--){
        for (int l=0;l<j;l++) {
            if (strcmp(na[l], na[l + 1]) > 0) {
                char_change(na[l], na[l + 1]);
                char_change(id[l], id[l + 1]);
            }
        }
    }
    printf("%s %s",na[k],id[k]);
    return 0;
}