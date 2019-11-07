#include <stdio.h>
int main(){
    int n,i,a,b,c,j,res;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        res=0;
        scanf("%d %d %d",&a,&b,&c);
        for (j=11;j<100;j++){
            if (j%3==a && j%5==b && j%7==c){
                res = j;
                break ;
            }
        }
        if (res==0){
            printf("Impossible\n");
        }
        else {
            printf("%d\n",res);
        }
    }
    return 0;
}