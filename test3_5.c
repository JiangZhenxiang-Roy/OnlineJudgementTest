#include <stdio.h>
int main (){
    int n,i,y,m,d,sum,j;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        sum=0;
        scanf("%d %d %d",&y,&m,&d);
        for (j=1;j<=7;){
            if (m>j)
                sum =sum +31;
            j=j+2;
        }
        for (j=8;j<=12;){
            if (m>j)
                sum =sum +31;
            j=j+2;
        }
        for (j=4;j<=6;){
            if (m>j)
                sum=sum+30;
            j=j+2;
        }
        for (j=9;j<=11;){
            if (m>j)
                sum=sum +30;
            j=j+2;
        }
        if (m>=2) {
            sum = sum + 28;
            if (y%4==0)
                sum=sum+1;
        }
        sum=sum +d;
        printf("%d\n",sum);
    }
    return 0;
}