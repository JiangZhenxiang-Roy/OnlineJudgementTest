#include <stdio.h>
#include <string.h>
int main(){
    int i,n;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        char a[502],b[502];
        scanf("%s %s",a,b);
        int alen=strlen(a),blen=strlen(b);
        int save[1000]={};
        char ans[1001]={};
        for (int j=0;j<alen;j++)
            for (int k=0;k<blen;k++)
                save[j+k]+=(a[alen-j-1]-48)*(b[blen-k-1]-48);
        for (int j=0;j<alen+blen;j++){
            ans[j]=save[j]%10+48;
            save[j+1]+=save[j]/10;
        }
        int st=alen+blen-1;
        for (int j=st;j>=0;j--){
            if ((ans[j]>48)&&(ans[j]<=57)){
                st=j;
                break;
            }
        }
        for (int j=st;j>=0;j--){
            printf("%c",ans[j]);
        }
        printf("\n");
    }
    return 0;
}