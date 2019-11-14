#include<stdio.h>
#include<string.h>
#include <ctype.h>
int main(void)
{
    char a[1000];
    char aa[1000];
    char c[] = " ";
    scanf("%[^\n]",&a);
    char *p = strtok(a,c);
    printf("%s ",p);
    p = strtok(NULL,c);
    while(p)
    {
        int n=strlen(p),i;
        char r[1000]={};
        int count=0;
        for (i=0;i<n;i++){
            if (ispunct(p[n-1-i])!=0) {
                r[n - 1 - i] = p[n - 1 - i];
                count++;
            }
            else {
                r[i-count]=p[n-1-i];
            }
        }
        printf("%s ",r);
        p = strtok(NULL,c);
    }
    return 0;
}