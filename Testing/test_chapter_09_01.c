//
//  test_chapter_09_01.c
//
//  Testing purposes - Chapter 9
//  Letterhead print
#include <stdio.h>
#include <string.h>
#define NAME "Busy Superhero"
#define STREET "7 Lifeguard Ave"
#define CITY "04939 Crypton"
#define STARS 40

void print_spaces(int stars, int text);
void print_stars(int stars);

int main(void)
{
    print_stars(STARS);
    print_spaces(STARS, strlen(NAME));
    printf("%s\n", NAME);
    print_spaces(STARS, strlen(STREET));
    printf("%s\n", STREET);
    print_spaces(STARS, strlen(CITY));
    printf("%s\n", CITY);
    print_stars(STARS);
    
    return 0;
}

void print_spaces(int stars, int text)
{
    int i, limit;
    limit = (stars - text) / 2;
    
    for (i = 0; i < limit; i++)
        putchar(' ');
}

void print_stars(int stars)
{
    int i;
    
    for (i = 0; i < stars; i++)
        putchar('*');
    putchar('\n');
}
