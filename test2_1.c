#include <stdio.h>
int main(){
    int i,n,x,y,temp,ans1,ans2;
    float c,r,res1,res2;
    scanf("%d",&n);
    for (i=0;i<n;i++) {
        scanf("%d %d", &x, &y);
        c = 2 * x - y * 0.5;
        r = y * 0.5 - x;
        temp = c;
        res1 = c - temp;
        temp = r;
        res2 = r - temp;
        if (res1 == 0 && res2 == 0) {
            ans1=c;
            ans2=r;
            printf("%d %d\n",ans1,ans2);
        }
        else
            printf("error\n");

    }
    return 0;
}