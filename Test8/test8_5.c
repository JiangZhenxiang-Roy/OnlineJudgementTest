#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void rev(long a,long* re) {
    long temp=1,nu=-1,mo=0;
    for (mo=1;temp!=0;){
        temp=a/mo;
        nu++;
        mo *= 10;
    }
    long i;
    for (i=0;i<nu;i++){
        temp=a/pow(10,nu-i-1);
        a=a-temp*pow(10,nu-i-1);
        *re += temp*pow(10,i);
    }
}

void sort_list(long x[], int n){
    for (int i=n-1;i>0;i--){
        for (int j=0;j<i;j++){
            if (x[j]>x[j+1]){
                long temp;
                temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
        }
    }
}

int main(){
    int i=1;
    int m=0;
    long save[1000];
    char ch,str[100001];
    while ((ch=getchar())!=EOF){
        str[i]=ch;
        i=i+1;
    }
    for (int j=0;j<i;j++){
        if (str[j]>48&&str[j]<=57){
            int len=1;
            char num[1000]={};
            num[0]=str[j];
            while (str[j+len]>=48&&str[j+len]<=57){
                num[len]=str[j+len];
                len++;
            }
            if (len>=2) {
                long a=0,x=0;
                a=atol(num);
                rev(a,&x);
                if (a==x){
                    save[m]=a;
                    m++;
                }
            }
            j=j+len-1;
        }
        else if (str [j]==48){
            int len=1;
            while (str[j+len]>=48&&str[j+len]<=57) {
                len++;
            }
            j=j+len-1;
        }
        else
            continue;
    }
    sort_list(save,m);
    long show_num[1000]={};
    int time[1000]={};
    int l=0;
    for (i=0;i<m;i++){
        show_num[l]=save[i];
        int t=1;
        while (save[i]==save[i+t]){
            t++;
        }
        time[l]=t;
        l++;
        i=i+t-1;
    }
    if (l==0){
        printf("None\n");
        return 0;
    }
    for (int j=l-1;j>0;j--){
        for (int k=0;k<j;k++){
            if (time[k]<time[k+1]){
                int temp;
                temp=time[k];
                time[k]=time[k+1];
                time[k+1]=temp;
                long lt;
                lt=show_num[k];
                show_num[k]=show_num[k+1];
                show_num[k+1]=lt;
            }
        }
    }
    int count=1;
    for (int j=0;;){
        while (time[j]==time[j+count]){
            count++;
        }
        break;
    }

    for (int j=0;j<count;j++) {
        printf("%ld %d\n", show_num[j], time[j]);
    }
    return 0;
}