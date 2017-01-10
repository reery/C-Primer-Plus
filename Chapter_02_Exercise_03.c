//
// Chapter 02 - Exercise 03
#include <stdio.h>

int main(void){
    int ageInYears;
    int convertInDays;
    
    ageInYears = 25;
    convertInDays = ageInYears * 365;
    
	printf("I'm %d years old, that's %d days.\n", ageInYears, convertInDays);
	
	return 0;
}