#include <stdio.h>
int main(){
    //Collect data
    int i,j,n,m;
    float ave;
    scanf("%d",&n);
    int x[100][4],c[100];
    float a[100];
    for (i=0;i<n;i++){
        for (j=0;j<4;j++) {
            scanf("%d", &x[i][j]);
        }
        ave=(x[i][1]+x[i][2]+x[i][3])/3.0;
        a[i]=ave;
        c[i]=x[i][0];
    }
    //Print average
    for (i=0;i<n;i++){
        printf("%.2f\n",a[i]);
    }

    //The highest average in a
    float temp;
    for (m=n;m>0;m--) {
        for (i = 0; i < m-1; i++) {
            if (a[i] > a[i + 1]) {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                temp = c[i];
                c[i] = c[i+1];
                c[i+1] = temp;
            }
        }
    }

    //Print highest average
    float high;
    high=a[n-1];
    for (i=0;i<n-1;i++){
        if (a[i]==high){
            printf("%d %.2f\n",c[i],a[i]);
        }
    }
    printf("%d %.2f\n",c[n-1],high);
    return 0;
}
