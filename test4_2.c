#include <stdio.h>
#include <math.h>
int main(){
    int n,i;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        int j,ans,a,b;
        scanf("%d %d",&a,&b);
        ans=0;
        for (j=a;j<=b;j++) {
            int num = j, l = 0, m = 0, n = 0;
            l = num / 100;
            num -= l * 100;
            m = num / 10;
            num -= m * 10;
            n = num;
            if (j == pow(l, 3) + pow(m, 3) + pow(n, 3)) {
                printf("%d ",j);
                ans=j;
            }
        }
        if (ans==0)
            printf("-1");
        printf("\n");
    }
    return 0;
}