//
//  test_chapter_06_02.c
//
//  Testing purposes - Chapter 6
//
#include <stdio.h>

double power(double n, int p);

int main(void){
    
    int pow;
    double num;
    double result;
    
    printf("Type first number then power (q to quit): ");
    
    while(scanf("%lf%d", &num, &pow) == 2){
        result = power(num, pow);
        printf("The %d. power of %.3f is %.0f.\n", pow, num, result);
        printf("Type first number then power (q to quit): ");
    }
    printf("Bye.\n");
    
    return 0;
}

double power(double n, int p){

    double result = 1;
    
    for(int index = 1; index <= p; index++){
        result *= n;
    }
    
    return result;
}
