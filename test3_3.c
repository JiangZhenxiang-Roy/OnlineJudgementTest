#include <stdio.h>
int main (){
    int n,i,res;
    scanf("%d",&n);
    res=0;
    for (i=1;i<=n;i++){
        res=res+i;
    }
    printf("%d\n",res);

    res=0;
    i=1;
    while(i<=n){
        res=res+i;
        i=i+1;
    }
    printf("%d\n",res);

    res=0;
    i=0;
    do{
        res=res+i;
        i=i+1;
    }
    while(i<=n);
    printf("%d\n",res);

    return 0;

}