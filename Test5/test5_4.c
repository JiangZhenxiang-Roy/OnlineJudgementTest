#include <stdio.h>
int main(){
    int a;
    while ((a=getchar())!=EOF){
        printf("%d",a);
    }
    return 0;
}