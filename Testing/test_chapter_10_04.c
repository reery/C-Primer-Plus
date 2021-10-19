//
//  test_chapter_10_04.c
//
//  Testing purposes - Chapter 10
//  Multidimensional arrays and pointers
#include <stdio.h>
#define SIZE 4

void printNumbers(int *);
void printMenu(char *);
void editNumbers(int *);
void dispose(void);

int main(void){
    int numbers[SIZE] = {14,21,64,35};
    char choice;
    
    while (1){
        printMenu(&choice);
        if (choice == 'q'){
            printf("Quitting.\n");
            return 0;
        } else if (choice == 'p'){
            printNumbers(numbers);
        } else if (choice == 'e'){
            editNumbers(numbers);
        }
    }
    
    return 0;
}

void printNumbers(int * numbers){
    int i;
    
    for (i = 0; i < SIZE; i++)
        printf("Array %d has value %d\n", i, *(numbers + i));
    
    printf("Press any key to accept.");
    dispose();
}

void printMenu(char * choice){
    while(1){
    printf("--------- MAIN MENU --------\n");
    printf("p) Print the array contents\n");
    printf("e) Edit array contents\n");
    printf("q) Quit\n");
    printf("--- Your input: ");
    while((*choice = getchar())){
        if (*choice == 'q')
            return;
        else if (*choice == 'e'){
            dispose();
            return;
        }
        else if (*choice == 'p'){
            dispose();
            return;
        }
        else{
            printf("\n");
            printf("I didn't understand this.\n");
            dispose();
        }
        
        break;
    }
    }
}

void editNumbers(int * numbers){
    int position = 0;
    
    printf("Please select the array position (0 - %d): ", SIZE - 1);
    while(scanf("%d", &position)){
        if (position < 0 || position >= SIZE){
            printf("Please select the array position (0 - %d): ", SIZE - 1);
            dispose();
        } else {
            dispose();
            break;
        }
    }
    
    printf("Enter value: ");
    scanf("%d", &numbers[position]);
    dispose();
    printf("Thank you for your input.\n");
}

void dispose(void){
    while(getchar() != '\n')
        continue;
}
