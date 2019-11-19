#include <stdio.h>
#include <ctype.h>
char x[100];
int nu[100],st[100],m=0;
int get_char(char str[]) {
    int ch, i = 0;
    while ((ch = getchar()) != '\n') {
        str[i] = ch;
        i++;
    }
    str[i] = ' ';
    return i;
}

int cal(int n){
    int i,temp=0;
    for (i=0;i<=n;i++){
        if(x[i]!=' '){
            temp++;
        }
        else{
            nu[m]=temp;
            st[m]=i;
            m++;
            temp=0;
        }
    }
    return 0;
}

void change(int a,int b){
    int i,count=0,l=0;
    char r[100]={};
    for (i=b-a;i<b;i++){
        if (ispunct(x[b-1-l])==0){
            r[i-count]=x[b-1-l];
        }
        else{
            r[b-1-l]=x[b-1-l];
            count++;
        }
        l++;
    }
    for (i=b-a;i<b;i++){
        x[i]=r[i];
    }
}

int main(){
    int n,i;
    n=get_char(x);
    cal(n);
    for (i=0;i<m;i++){
        change(nu[i],st[i]);
    }
    printf("%s",x);
    return 0;
}









//6










/*  2/3scores
#include<stdio.h>
#include<string.h>
#include <ctype.h>
int main(void)
{
    char a[1000];
    char aa[1000];
    char c[] = " ";
    scanf("%[^\n]",&a);
    char *p = strtok(a,c);
    while(p)
    {
        int n=strlen(p),i;
        char r[1000]={};
        int count=0;
        for (i=0;i<n;i++){
            if (ispunct(p[n-1-i])!=0) {
                r[n - 1 - i] = p[n - 1 - i];
                count++;
            }
            else {
                r[i-count]=p[n-1-i];
            }
        }
        printf("%s ",r);
        p = strtok(NULL,c);
    }
    return 0;
}*/