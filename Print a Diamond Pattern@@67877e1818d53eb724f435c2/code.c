#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int nsp=n/2;
    int nst=1;
    int  ml=n/2+1;
    for(int i=1;i<=n;i++){
        for(int j;j<=nsp;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("*");
        }
        if(i<ml){
            nsp--;
            nst=nst+2;
        }
        else{
            nsp++;
            nst=nst-2;
        }
        printf("\n");
    }
}