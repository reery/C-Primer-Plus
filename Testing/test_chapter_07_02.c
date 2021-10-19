//
//  test_chapter_07_02.c
//
//  Testing purposes - Chapter 7
//  Decrypting
#include <stdio.h>
#define PWLIMIT 100

int main(void){
    char text[PWLIMIT], decrypted[PWLIMIT], buffer[PWLIMIT];
    int lastChar = 0;
	int i, r1, r2;

    
    printf("Please type your encrypted text: ");
    for( i = 0; text[i - 1] != '\n' && i < PWLIMIT; lastChar++, i++)
		scanf("%c", &text[i]);
	
    /*printf("The password you have typed (just to make sure the array is correc): ");
    for( i = 0; i < lastChar; i++){
        printf("%c", text[i]);
    }*/
	r1 = 3;
	r2 = 3;
    
    printf("Now I've decrypted your text: ");
	// Decrypting starts
	for( i = 0; i < lastChar; r2++, i++){
		
		if (r1 > 5) r1 = 1;
		if (r2 > 5) {
			r1++;
			r2 = 1;
		}
		
		
		buffer[i] = (text[i] + i) - (r2 * r1);
		if(buffer[i] >= 100 || buffer[i] < 31){
			buffer[i] = text[i] + 60 - i - (r1 * r2);
		}
		decrypted[i] = buffer[i];
		
		
	/*if (encrypted[i] >= 122 || encrypted[i] <= 33){
			encrypted[i] = 57 - (r1 * r2);
		}*/
        
	
    /*for( i = 0; i < lastChar; i++){
        decrypted[i] = text[i] + i - 10;*/
    }
	
	for( i = 0; i < lastChar - 1; i++){
		printf("\n");
		printf("%c ", decrypted[i]);
		
		printf("%d ", decrypted[i]);
	}
    printf("\n");
    
    return 0;
}