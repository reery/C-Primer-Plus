//
//  Chapter 09 Exercise 06
#include <stdio.h>
void sorting(double * a, double * b, double * c);


int main(void)
{
    double a, b, c;
    
    printf("Please type 3 numbers: ");
    scanf("%la%la%la", &a, &b, &c);
    printf("Calling sorting() function...\n");
    sorting(&a, &b, &c);
    printf("Smallest number: %.2f\n", a);
    printf("Inbetween number: %.2f\n", b);
    printf("Largest number: %.2f\n", c);
    
    return 0;
}

void sorting(double * a, double * b, double * c)
{
    double smallest, medium, largest;
    
    smallest = *a;
    
    if (smallest > *b)
        smallest = *b;
    if (smallest > *c)
        smallest = *c;
    
    largest = *a;
    
    if (largest < *b)
        largest = *b;
    if (largest < *c)
        largest = *c;
    
    medium = *a;
    
    if (medium > *c || medium < *c)
        medium = *b;
    else medium = *c;
    
    *a = smallest;
    *b = medium;
    *c = largest;
}
