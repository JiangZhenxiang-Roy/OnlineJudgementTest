#include <stdio.h>
#include <math.h>

int judge(int x[]){
    int count=0;
    if (x[0]==0&&x[1]==0&&x[2]==0&&x[3]==0&&x[4]==0)
        return 0;
    if(x[2]==x[0]+x[1]&&x[3]==x[1]+x[2]&&x[4]==x[2]+x[3])
        count+=4;
    if(x[1]-x[0]==x[4]-x[3])
        count+=1;
    if(x[1]/x[0]==x[4]/x[3])
        count+=2;
    return count;
}

int getn(int x[],int* flag){
    for (int j=0;j<5;j++){
        scanf("%d",&x[j]);
    }
    if(x[0]==0&&x[1]==0&&x[2]==0&&x[3]==0&&x[4]==0)
        *flag = 0;
    return judge(x);
}

int main(){
    int x[10],ca;
    int flag=1;
    ca=getn(x,&flag);
    while (flag==1){
        if(ca==1||ca==3||ca==5||ca==7){
            int temp=x[1]-x[0];
            printf("case one\n");
            for (int j=0;j<5;j++){
                printf("%d ",x[4]+(j+1)*temp);
            }
            printf("\n");
        }
        if (ca==2||ca==3||ca==6||ca==7){
            int temp=x[1]/x[0];
            printf("case two\n");
            for (int j=0;j<5;j++){
                printf("%.0f ",x[4]*pow(temp,j+1));
            }
            printf("\n");
        }
        if(ca==4||ca==5||ca==6||ca==7){
            printf("case three\n");
            for(int j=0;j<5;j++){
                x[5+j]=x[3+j]+x[4+j];
                printf("%d ",x[5+j]);
            }
            printf("\n");
        }
        ca=getn(x,&flag);
    }
    return 0;
}