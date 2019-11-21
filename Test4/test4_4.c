#include <stdio.h>
#include <string.h>
int main(){
    char x[100];
    scanf("%[^\n]",&x);
    printf("%d",strlen(x));
    return 0;
}