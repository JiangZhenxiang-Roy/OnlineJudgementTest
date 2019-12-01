#include <stdio.h>
int cal(int n,int k,int* ans){
    *ans+=k;
    if (n!=2){
        n--;
        cal(n,k,ans);
    }
    return 0;
}
int main(){
    int n,a,k;
    scanf("%d %d %d",&n,&a,&k);
    if(n<2||(a<=0||a>100)||(k<=0||k>100)){
        printf("Wrong Number");
        return 0;
    }
    int ans=a;
    cal(n,k,&ans);
    printf("%d",ans);
    return 0;
}