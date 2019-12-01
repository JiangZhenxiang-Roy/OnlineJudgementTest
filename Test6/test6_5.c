#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int case_judge(char test[]){
    if ((test[0]>=48&&test[0]<=57)||(test[0]==110&&test[1]==47&&test[2]==97)){
        if (strlen(test)<=3)
            return 3;
        else
            return 2;
    }
    else
        return 1;
}

int include_judge(char ch1[],char ch2[]){
    int flag=0;
    int nu1,nu2;
    nu1=strlen(ch1);
    nu2=strlen(ch2);
    for (int i=0;i<nu1;i++){
        if (ch1[i]==ch2[0]){
            flag=1;
            for (int j=1;j<nu2;j++)
                if (ch1[i+j]!=ch2[j])
                    flag=0;
        }
    }
    return flag;
}

int sort(int gr[],int or[],int n,int* ra_fi){
    int ra[100];
    for (int i=n-1;i>=0;i--){
        for (int j=0;j<i;j++){
            if (gr[j]<gr[j+1]){
                int temp=gr[j];
                gr[j]=gr[j+1];
                gr[j+1]=temp;
                temp=or[j];
                or[j]=or[j+1];
                or[j+1]=temp;
            }
        }
    }
    for (int i=0;i<n;){
        int j=1;
        ra[i]=i+1;
        while ((gr[i]-gr[i+j])==0&&(i+j)<n) {
            ra[i + j] = i + 1;
            j++;
        }
        i=i+j;
    }
    for (int i=0;i<n;i++){
        ra_fi[or[i]]=ra[i];
    }
    return 0;
}

int main(){
    int n;
    char te[100];
    int ca;
    scanf("%d %s",&n,te);
    ca=case_judge(te);
    char na[100][11];
    char id[100][19];
    char gr[100][4];
    getchar();
    for (int i=0;i<n;i++){
        scanf("%s %s %s",na[i],id[i],gr[i]);
    }
    int ra[n];
    int gra[100],org[100];
    for (int j=0;j<n;j++){
        if (strcmp(gr[j],"n/a")==0)
            gra[j]=-1;
        else
            gra[j]=atoi(gr[j]);
        org[j]=j;
    }
    sort(gra,org,n,ra);
    for (int i=0;i<n;i++){
        int status=0;
        if (ca==1)
            status=include_judge(na[i],te);
        else if (ca==2)
            status=include_judge(id[i],te);
        else
            if (strcmp(te,gr[i])==0)
                status=1;
        if (status==1) {
            if (strcmp(gr[i], "n/a") == 0)
                printf("%s %s %s %s", na[i], id[i], gr[i], gr[i]);
            else
                printf("%s %s %s %d", na[i], id[i], gr[i], ra[i]);
        }
    }
    return 0;
}