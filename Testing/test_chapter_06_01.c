//
//  test_chapter_06_01.c
//  
//
//  Testing purposes - Chapter 6
//
//
#include <stdio.h>

float plus(float a, float b);

int main(void){
    float num[2];
    num[0] = 1;
    num[1] = 1;
    
    printf("Please type two numbers to add (q to quit): ");
    while(scanf("%f%f", &num[0], &num[1]) == 2){
        printf("                                   Result = %.2f\n", plus(num[0], num[1]));
        printf("Please type two numbers to add (q to quit): ");
    }
    printf("Done.\n");
        
    return 0;
}

float plus(float a, float b) {
    float result;
    result = a + b;
    
    return result;
}
