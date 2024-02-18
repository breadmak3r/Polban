#include <stdio.h>

int main(){
    int x, y;
    
    scanf("%d", &x);
    scanf("%d", &y);
    
    if(x<0 && y>0){
        printf("2");
    } else if(x<0 && y<0){
        printf("3");
    }
    if(x>0){
        if(y>0){
            printf("1");
        }else{
            printf("4");
        }
    }
}