#include <stdio.h>
#include <math.h>

void rev(int a,int* re) {
    int temp=1,nu=-1,mo;
    for (mo=1;temp!=0;){
        temp=a/mo;
        nu++;
        mo *= 10;
    }
    int i;
    for (i=0;i<nu;i++){
        temp=a/pow(10,nu-i-1);
        a=a-temp*pow(10,nu-i-1);
        *re += temp*pow(10,i);
    }
}

int main(void){
    int i,n;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        int x=0,re=0;
        scanf("%d",&x);
        rev(x,&re);
        if (re==x){
            printf("yes\n");
        }
        else {
            printf("no\n");
        }
    }
    return 0;
}