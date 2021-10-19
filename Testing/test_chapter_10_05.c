//
//  test_chapter_10_05.c
//
//  Testing purposes - Chapter 10
//  Multidimensional arrays and pointers
#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 9

void printName(char *);
void changeName(char *);
void dispose(void);

int main(void){
    char myName[MAX_NAME_LENGTH] = "Slavko";
    
    printf("Your name is: ");
    printName(myName);
    changeName(myName);
    printf("Your name is now %s and has %lu characters.\n", myName, strlen(myName));
    
    return 0;
}

void printName(char * myName){
    int i;
    
    for(i = 0; i < MAX_NAME_LENGTH; i++){
        printf("%c", *(myName + i));
    }
}

void changeName(char * myName){
    char answer;
    
        printf("\nChange name (y/n)? ");
        while((answer = getchar())){
            if(answer == 'y'){
                printf("New name: ");
                
                while(1){
                    scanf("%s", myName);
                dispose();
                if((strlen(myName)) > MAX_NAME_LENGTH){
                    printf("You typed %lu characters. Please max. %d characters.\n", strlen(myName), MAX_NAME_LENGTH);
                    printf("New name: ");
                } else {
                    return;
                  }
                }
            } else break;
        }
}

void dispose(void){
    while(getchar() != '\n')
        continue;
}
