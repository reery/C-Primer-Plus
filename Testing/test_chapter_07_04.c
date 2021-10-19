//
//  test_chapter_07_04.c
//
//  Testing purposes - Chapter 7
//  Smallest divisor
#include <stdio.h>

int main(void){
    unsigned long num, div;
    _Bool prime, found;
    div = 2;
    
    printf("Please type a number (q to quit): ");

    while(scanf("%lu", &num) == 1 && num > div){
        for(prime = 1, found = 0; (div * div) <= num; div++){
            if(num % div == 0){
                prime = 0;
                found = 1;
                printf("The smallest divisor of %lu is %lu.\n", num, div);
            }
            
            if(found == 1)
                div = num / 2;
        }
        
        if(prime == 1)
            printf("%lu is a prime number.\n", num);
        
        printf("Please type another number: ");
        div = 2;
    }
    
    printf("Done\n");
    
    return 0;
}
