//
//  test_chapter_10_02.c
//
//  Testing purposes - Chapter 10
//  Multidimensional arrays and pointers
#include <stdio.h>

void changeFive(int * pointer_to_five);
void showContents(int * p_array);

int main(void){
    printf("Let's begin.\n");
    
    int five = 5;
    int * pointer_to_five;
    int array[5] = {11, 12, 13, 14, 15};
    pointer_to_five = &five;
    
    printf("Variable \"five\" has the number %d.\n", five);
    printf("Variable \"fives\" pointer has the number %d.\n", *pointer_to_five);
    printf("Now let's change \"five\" through a function to another number.\n");
    changeFive(&five);
    printf("Oh, \"five\" is now %d at %p\n", five, &five);
    printf("\n");
    printf("Now show me some contents.\n");
    showContents(array);
    
    return 0;
}

void changeFive(int * pointer_to_five){
    *pointer_to_five = 6;
}

void showContents(int * p_array){
    for(int count = 0; count < 5; count++){
        printf("Array %d has number %d at %p.\n", count, *(p_array + count), (p_array + count));
    }
    
}
