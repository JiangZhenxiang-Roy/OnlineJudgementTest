#include <stdio.h>

int main(){
    int n,m;
    char get[100][101];
    scanf("%d %d",&n,&m);
    for (int i=0;i<n;i++) {
        if (i + m < n)
            scanf("%s", get[i+m]);
        else
            scanf("%s",get[i+m-n]);
    }
    for (int i=0;i<n;i++)
        printf("%s ",get[i]);
    return 0;
}