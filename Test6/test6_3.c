#include <stdio.h>
#include <string.h>
int main(){
    int n,temp;
    scanf("%d",&n);
    char te[4]="SCU";
    temp=3;
    for (int i=0;i<n;i++){
        int num;
        char t[100];
        char s[2]="A";
        scanf("%s",&t);
        num=strlen(t);
        int j=0,flag=0;
        for (;j<num;j++){
            if (t[j]==te[0]) {
                if (t[j + 1] == te[1]) {
                    if (t[j+2]==te[2]) {
                        if ((j+2!=num-1&&j!=0)||(j==0&&j+2==num-1)){
                            flag = 1;
                            j += 2;
                            continue;
                        }
                    }
                }
            }
            if (t[j]!=s[0]){
                flag=0;
                break;
            }
        }
        if (flag==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}