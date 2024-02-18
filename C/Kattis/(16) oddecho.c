#include <stdio.h>

int main(){
    int n, words;
    char odd[100][100];
    
    scanf("%d", &words);
    
    for (n = 0; n < words; n++){
        scanf("%s", &odd[n]);
    }
    for (n = 0; n < words; n = n+2){
        printf("\n%s", &odd[n]);
    }
    
    return 0;
}