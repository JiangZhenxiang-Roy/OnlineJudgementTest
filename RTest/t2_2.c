#include <stdio.h>
#include <string.h>

int main(){
    int n,w,s;
    scanf("%d",&n);
    char name[64][16];
    for (int i=0;i<n;i++) {
        scanf("%s",name[i]);
    }
    scanf("%d,%d",&w,&s);
    int i=w-1,count,am=0,m=n;
    for (int k=0;k<m;k++){
        i+=s;
        count = (i%n)-1;
        if (count==-1){
            count=n-1;
        }
        printf("%s\n",name[count]);
        am++;
        for (int j=count;j<n-1;j++){
            strcpy(name[j],name[j+1]);
        }
        n--;
        i=count;
    }
    return 0;
}