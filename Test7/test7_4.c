#include <stdio.h>
#include <string.h>

int sheet[51][51]={0};
int r,c;

void change(int* a, int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void switch_r(int a, int b){
    for (int i=0;i<c;i++){
        change(&sheet[a-1][i],&sheet[b-1][i]);
    }
}

void switch_c(int a, int b){
    for (int i=0;i<r;i++){
        change(&sheet[i][a-1],&sheet[i][b-1]);
    }
}

void delete_r(int a){
    for (int i=a-1;i<r;i++){
        for (int j=0;j<c;j++){
            sheet[i][j]=sheet[i+1][j];
        }
    }
}

void delete_c(int a){
    for (int i=a-1;i<c;i++){
        for (int j=0;j<r;j++){
            sheet[j][i]=sheet[j][i+1];
        }
    }
}

void insert_r(int a){
    for (int i=r-1;i>=a-1;i--){
        for (int j=0;j<c;j++){
            sheet[i+1][j]=sheet[i][j];
        }
    }
    for (int j=0;j<c;j++){
        sheet[a-1][j]=0;
    }
}

void insert_c(int a){
    for (int i=c-1;i>=a-1;i--){
        for (int j=0;j<r;j++){
            sheet[j][i+1]=sheet[j][i];
        }
    }
    for (int j=0;j<r;j++){
        sheet[j][a-1]=0;
    }
}

int main(){
    scanf("%d %d",&r,&c);
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            scanf("%d",&sheet[i][j]);
        }
    }
    int n;
    scanf("%d",&n);
    for (int k=0;k<n;k++) {
        char str[3] = {};
        scanf("%s",str);
        if (strcmp(str,"SR")==0){
            int a,b;
            scanf("%d %d",&a,&b);
            switch_r(a,b);
        } else if (strcmp(str,"SC")==0){
            int a,b;
            scanf("%d %d",&a,&b);
            switch_c(a,b);
        } else if (strcmp(str,"DR")==0){
            int a;
            scanf("%d",&a);
            delete_r(a);
            r--;
        } else if (strcmp(str,"DC")==0){
            int a;
            scanf("%d",&a);
            delete_c(a);
            c--;
        } else if (strcmp(str,"IR")==0){
            int a;
            scanf("%d",&a);
            insert_r(a);
            r++;
        } else if (strcmp(str,"IC")==0){
            int a;
            scanf("%d",&a);
            insert_c(a);
            c++;
        } else
            printf("Input Error");
    }
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            printf("%d ",sheet[i][j]);
        }
        printf("\n");
    }
    return 0;
}