#include <stdio.h>
#include <math.h>
int main(){
    int n,a,b,c;
    float s,p;
    scanf("%d",&n);
    for (int i =0;i<n;i++){
        scanf("%d %d %d",&a,&b,&c);
        p=(a+b+c)*0.5;
        if (a+b>c && b+c>a && a+c>b) {
            s = sqrtf(p*(p-a)*(p-b)*(p-c));
            printf("%.2f\n",s);
        }
        else
            printf("error\n");
    }
    return 0;
}