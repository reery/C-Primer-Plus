//
//  test_chapter_07_01.c
//
//  Testing purposes - Chapter 7
//  Encrypting
#include <stdio.h>
#define PWLIMIT 100

int main(void){
    char text[PWLIMIT], encrypted[PWLIMIT];
    int lastChar = 0;
	int i, r1, r2;
    
    printf("Please type your text: ");
    for( i = 0; text[i - 1] != '\n' && i < PWLIMIT; lastChar++, i++)
		scanf("%c", &text[i]);
	
    /*printf("The password you have typed (just to make sure the array is correc): ");
    for( i = 0; i < lastChar; i++){
        printf("%c", text[i]);
    }*/
	
	/*for( i = 0; i < lastChar - 1; i++){
		printf("\n");
		printf("%c ", text[i]);
		printf("%d", text[i]);
	}*/
	
    printf("\n");
    printf("Now I've encrypted your text: ");
		// Encryption starts, valid integer 32 to 126, equals 94
	r1 = 1;
	r2 = 1;
	
    for( i = 0; i < lastChar; r2++, i++){
		
		if (r1 > 5) r1 = 1;
		if (r2 > 5) {
			r1++;
			r2 = 1;
		}
		//printf("\nr1 = %d r2 = %d", r1, r2);
		
		encrypted[i] = (text[i] - i) + (r2 * r1);
		//printf("\nEncrypted = %d %c   Text = %d %c ", encrypted[i], encrypted[i], text[i], text[i] );
		
		if (encrypted[i] >= 100 || encrypted[i] < 31)
			encrypted[i] = text[i] - 60 + i + (r1 * r2);
		//printf("\nEncrypted = %d %c   Text = %d %c ", encrypted[i], encrypted[i], text[i], text[i] );
    }
	
	for( i = 0; i < lastChar - 1; i++){
		//printf("\n");
		printf("%c", encrypted[i]);
		//printf("%d", encrypted[i]);
	}
    printf("\n");
    
    return 0;
}
