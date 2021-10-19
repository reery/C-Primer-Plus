//
//  test_chapter_10_03.c
//
//  Testing purposes - Chapter 10
//  Multidimensional arrays and pointers
#include <stdio.h>
#define SIZE 4

int main(void){
    
    int var1 = 10;
    int arr1[4] = {0,1,2,3};
    int var2 = 20;
    
    printf("var1   has value %d and is located at %p\n",var1, &var1);
    
    printf("arr[-1] has value %d and is located at %p\n", arr1[-1], &arr1[-1]);
    printf("arr[-1] has value %d and is located at %p\n", arr1[0], &arr1[0]);
    printf("arr[-1] has value %d and is located at %p\n", arr1[1], &arr1[1]);
    printf("arr[4] has value %d and is located at %p\n", arr1[4], &arr1[4]);
    
    printf("var2   has value %d and is located at %p\n",var2, &var2);
    
    return 0;
}
