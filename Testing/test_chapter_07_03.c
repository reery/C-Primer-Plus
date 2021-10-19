//
//  test_chapter_07_03.c
//
//  Testing purposes - Chapter 7
//  Divisor
#include <stdio.h>

int main(void){
    unsigned long num, div;
    unsigned long count;
    _Bool prime;
    
    printf("Please type a number: ");
    /*div = 2;
    prime = 1;*/
    
    while(scanf("%lu", &num) == 1 && num > div){
        for(div = 2, prime = 1, count = 0; (div * div) <= num; count++, div++){
        //while((div * div) <= num){
            if(num % div == 0){
                prime = 0;
                if(div * div != num){
                    printf("%lu is divisible by %lu and %lu.\n", num, div, num / div);
                    //div++;
                } else {
                    printf("%lu is divisible by %lu.\n", num, div);
                    //div++;
                }
            }
            //div++;
        }
        if(prime == 1)
            printf("%lu is a prime number.\n", num);
        printf("\nI've done %ld loops.\n", count);
        printf("Please type another number: ");
        //div = 2;
        //prime = 1;
    }
    printf("Done\n");
    
    return 0;
}
