#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    char DNA[1000];
    int i = 0;
    bool COV = false;
    
    scanf("%s", &DNA);
    
    while(i<strlen(DNA)){
        if (DNA[i]=='C' && DNA[i+1] == 'O' && DNA[i+2] == 'V'){
            COV = true;
            break;
        }
        i++;
    }
    
    if (COV == true) {
        printf ("Veikur!");
    }
    else {
        printf ("Ekki veikur!");
    }
    
}