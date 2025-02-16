// Your code here...
#include<stdio.h>
int main(){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if(x>y && y>z){
        printf("%d",x);
    }
    else if(y>z && z>x){
        printf("%d",y);
    }
    else if(z>x && y>z){
        printf("%d",z);
    }
    return 0;
}