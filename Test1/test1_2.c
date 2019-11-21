#include <stdio.h>
int main(){
    int n,a,b,i,sml,j,r;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d%d",&a,&b);
        if (a>b)
            sml=b;
        if (b>a)
            sml=a;
        for (j=1;j<=sml;j++) {
            if (a % j == 0 && b % j == 0)
                r = j;
        }
        printf("%d\n",r);
    }
    return 0;
}