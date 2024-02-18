#include <stdio.h>

int main(){
    int n,k;
    int cy = 2022;
    
    scanf("%d", &n);
    scanf("%d", &k);
    
    cy += n/k;
    printf("%d", cy);
}