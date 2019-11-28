#include <stdio.h>
#include <string.h>
int main(){
    int a,i=0;
    char x[100];
    char c[]=",";
    while ((a=getchar())!=EOF){
        if ((a<=57&&a>=48)||(a<=122&&a>=97))
            x[i]=a;
        else if (a<=90&&a>=65)
            x[i]=a+32;
        else
            x[i]=44;
        i++;
    }
    char *s=strdup(x);
    char as[100][100]={};
    char *p;
    i=0;
    p = strsep(&s,c);
    while (p){
        if (strcmp(p,"")==0) {
            p=strsep(&s,c);
            continue;
        }
        strcpy(as[i],p);
        i++;
        p=strsep(&s,c);
    }
    int ca[100]={};
    for (int k = 0; k < i; k++) {
        for (int j = k+1; j < i; j++) {
            if (strcmp(as[k],as[j])==0){
                ca[k]++;
            }
        }
    }
    for (int k=i-1;k>0;k--){
        for (int j = 0;j<k;j++){
            if (ca[j]>ca[j+1]){
                int temp=ca[j];
                ca[j]=ca[j+1];
                ca[j+1]=temp;
                char ch[100];
                strcpy(ch,as[j]);
                strcpy(as[j],as[j+1]);
                strcpy(as[j+1],ch);
            }
        }
    }
    int k;
    for (k=i-1;k>=0;k--){
        if (ca[k]!=ca[k-1])
            break;
    }
    for (int j=i-1;j>=k;j--){
        for (int b=k;b<j;b++){
            if (strcmp(as[b],as[b+1])>0){
                char te[100];
                strcpy(te,as[b]);
                strcpy(as[b],as[b+1]);
                strcpy(as[b+1],te);
            }
        }
    }
    printf("%s %d",as[i-1],ca[i-1]+1);
    return 0;
}