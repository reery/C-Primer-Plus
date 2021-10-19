//
//  test_chapter_10_06.c
//
//  Testing purposes - Chapter 10
//  Multidimensional arrays and pointers
#include <stdio.h>
void printArray(int [][3]);
void arrayAddress(int (*ar)[3]);

int main(void){
    int yoloray[2][3] = {{11,22,33}, {44,55,66}};
    
    printf("Ima printing dat array:\n");
    printArray(yoloray);
    printf("Now the addresses:\n");
    arrayAddress(yoloray);
    printf("Finished\n");
    
    return 0;
}

void printArray(int derpray[2][3]){
    
    int i, j;
    
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            printf("Array[%d][%d] = %d at %p\n", i, j, derpray[i][j], &derpray[i][j]);
        }
        //printf("Array[%d][%d] = %d at %p\n", i, j, derpray[i][j], &derpray[i][j]);
    }
}

void arrayAddress(int derpray[2][3]){
    //int i, j;
    
    printf("%d is at %p\n", **derpray, derpray);
    printf("%d is at %p\n", *derpray[0], derpray[0]);
    printf("%d is at %p\n", derpray[0][0], &derpray[0][0]);
    printf("%d is at %p\n", **(derpray +1), derpray +1);
    
    /*for(i = 0; i < 5; i++){
        printf("%d is at %p\n", *(derpray + i), *(derpray + i));
    }*/
}
