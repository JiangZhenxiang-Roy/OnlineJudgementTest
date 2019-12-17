#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int state=0;
    for (int i=3;i<=n/2;){
        int flag=0;
        for (int j=2;j<i;j++){
            if (i%j==0){
                flag=1;
                goto end;
            }
        }
        for (int j=2;j<n-i;j++){
            if ((n-i)%j==0){
                flag=1;
                goto end;
            }
        }
        end:
        if (flag==0){
            printf("%d %d\n",i,n-i);
            state=1;
        }
        i+=2;
    }
    if (state==0){
        printf("ERROR");
    }
}