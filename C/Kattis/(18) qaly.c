#include <stdio.h>

int main(){
    int constant;
    float AgeQualt, age, QALY = 0;
    
    scanf("%d", &constant);
    
    for (int i = 0; i < constant; i++){
        scanf("%f %f", &AgeQualt, &age);
        QALY += (AgeQualt*age);
    }
    printf("%.3f", QALY);
    
    return 0;
}