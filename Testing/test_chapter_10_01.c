//
//  test_chapter_10_01.c
//
//  Testing purposes - Chapter 10
//  Multidimensional arrays
#include <stdio.h>
#define COLUMN 8
#define ROWS 8

int main(void)
{
    // Dat variables
    int table[ROWS][COLUMN];
    int sum_total = 0;
    int sum_rows[ROWS];
    int sum_column[COLUMN];
    int i, j;
    
    // Getting user input
    for (i = 0; i < ROWS; i++)
    {
        printf("Row %d - \n", i + 1);
        
        for (j = 0; j < COLUMN; j++)
        {
            printf("    Column %2d - Enter a number: ", j + 1);
            scanf("%d", &table[i][j]);
            
            //Dispose of trash
            while (getchar() != '\n')
                continue;
        }
    }
    
    printf("Thank you for your input.\n");
    
    // Sums rows and total
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0, sum_rows[i] = 0; j < COLUMN; j++)
        {
            sum_total += table[i][j];
            sum_rows[i] += table[i][j];
        }
    }
    
    // Sums columns
    for (j = 0; j < COLUMN; j++)
    {
        for (i = 0, sum_column[j] = 0; i < ROWS; i++)
        {
            sum_column[j] += table[i][j];
        }
    }
    
    // Printing table
    printf("Here is your table: \n");
    printf("     ");
    
    // Printing column numbers
    for (j = 0; j < COLUMN; j++)
    {
        printf(" 0%d ", j + 1);
    }
    
    // Printing ROW, dash signs and sum afterwards
    printf("\nROW ");
    
    for (j = 0; j < COLUMN; j++)
    {
        printf("====");
    }
    
    printf("  Sum\n");
    
    // Printing the actual table
    for (i = 0; i < ROWS; i++)
    {
        // Row number
        printf("%3d| ", i + 1);
        
        // Row input
        for (j = 0; j < COLUMN; j++)
        {
            printf("%3d ", table[i][j]);
        }
        // The sum of rows
        printf("|%3d", sum_rows[i]);
        printf("\n");
    }
    
    // Printing the equal-signs before column sums
    printf("    ");
    
    for (j = 0; j < COLUMN; j++)
    {
        printf("====");
    }
    
    printf("\n");
    
    // Printing column sums
    printf("Sum  ");
    
    for (j = 0; j < COLUMN; j++)
    {
        printf("%3d ", sum_column[j]);
    }
    printf("\n");
    
    // Printing totals
    printf("Total sum of all numbers is %d.\n", sum_total);
    printf("I'm done.\n");
    
    return 0;
}
