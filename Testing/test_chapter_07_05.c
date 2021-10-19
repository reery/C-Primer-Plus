//
//  test_chapter_07_05.c
//
//  Testing purposes - Chapter 7
//  Word count
#include <stdio.h>
#include <ctype.h>
#define STOP '#'

int main(void){
    char c, prev_c;
    int l_count = 0;
    int line_count = 1;
    int w_count = 0;
    
    printf("Start typing (# to quit): \n");
    while((c = getchar()) != STOP){
        if(isalnum(c))
            l_count++;
        if(c == '\n')
            line_count++;
        if((isspace(c) || ispunct(c)) && isalpha(prev_c))
            w_count++;
        
        prev_c = c;
    }
    
    if(isalpha(prev_c))
        w_count++;
    
    printf("You have typed %d letters, %d words in %d lines.\n", l_count, w_count, line_count);
    
    return 0;
}
