#include <stdio.h>
void judge(int* f,int* s){
    if (*f>*s){
        int temp=*f;
        *f=*s;
        *s=temp;
    }
}

int main(){
    int n,i;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        judge(&a,&b);
        judge(&b,&c);
        judge(&c,&d);
        judge(&a,&b);
        judge(&b,&c);
        judge(&a,&b);
        printf("%d %d %d %d\n",a,b,c,d);
    }
    return 0;
}