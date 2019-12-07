#include <stdio.h>
#include <string.h>

int get_char(char str[]) {
    int ch, i = 0;
    while ((ch = getchar()) != '\n') {
        str[i] = ch;
        i++;
    }
    str[i] = ' ';
    return i;
}

int main(){
    int m,len;
    scanf("%d",&m);
    getchar();
    char org[201];
    char ans[201];
    len=get_char(org);
    int count=0;
    for (int i=0;i<len-m;i++){
        ans[i+m]=org[i];
    }
    for (int i=m;i>0;i--){
        ans[count]=org[len-i];
        count++;
    }
    for (int i=0;i<len;i++){
        printf("%c",ans[i]);
    }
}