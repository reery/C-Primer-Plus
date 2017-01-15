//
//  Chapter 07 Exercise 11
#include <stdio.h>
#define ARTI_PER_POUND 2.05
#define BEETS_PER_POUND 1.15
#define CARRO_PER_POUND 1.09
#define DISCOUNT 0.05

int main(void) {
    float totalAmount;
    float discountAmount = 0;
    float shippingCost = 0;
    char orderChoice;
    int artichokes_amount = 0;
    int beets_amount = 0;
    int carrots_amount = 0;
    int artichokes_total = 0;
    int beets_total = 0;
    int carrots_total = 0;
    int total_weight;
    _Bool orderFinished = 0;
    
    printf("** ABC Mail Order Grocery **\n");
    printf("** Please make your order\n");
    
    while (1) {
        printf("** a) Artichokes   b) Beets\n");
        printf("** c) Carrots      q) Quit/Finish\n");
        printf("What do you want to order: ");
        
        while ((orderChoice = getchar())) {
            /*while (getchar() != '\n')
                continue;*/
            
            switch (orderChoice) {
                case 'a' :
                    printf("Pounds of artichokes: ");
                    scanf("%d", &artichokes_amount);
                    artichokes_total += artichokes_amount;
                    break;
                case 'b' :
                    printf("Pounds of beets: ");
                    scanf("%d", &beets_amount);
                    beets_total += beets_amount;
                    break;
                case 'c' :
                    printf("Pounds of carrots: ");
                    scanf("%d", &carrots_amount);
                    carrots_total += carrots_amount;
                    break;
                case 'q' :
                    orderFinished = 1;
                    break;
                default :
                    printf("** a) Artichokes   b) Beets\n");
                    printf("** c) Carrots      q) Quit/Finish\n");
                    printf("What do you want to order: ");
            }
            if (orderFinished == 1)
                break;
        }
        
        // Discount calculation
        totalAmount = (float)artichokes_total * ARTI_PER_POUND + (float)beets_total * BEETS_PER_POUND + (float)carrots_total * CARRO_PER_POUND;
        
        if (totalAmount >= 100.0)
            discountAmount = totalAmount * DISCOUNT;
        
        // Shipping calculation
        total_weight = artichokes_total + beets_total + carrots_total;
        if (total_weight <= 5) {
            shippingCost = 6.5;
        } else if (total_weight > 5 && total_weight < 20) {
            shippingCost = 14.0;
        } else {
            shippingCost = 14.0 + (total_weight - 20) * 0.5;
        }
        
        printf("** Your order is as follows: \n");
        printf("** %3d pounds of artichokes ($%.2f/pound) are $%.2f total.\n", artichokes_total, ARTI_PER_POUND, (float)artichokes_total * ARTI_PER_POUND);
        printf("** %3d pounds of beets ($%.2f/pound) are $%.2f total.\n", beets_total, BEETS_PER_POUND, (float)beets_total * BEETS_PER_POUND);
        printf("** %3d pounds of carrots ($%.2f/pound) are $%.2f total.\n", carrots_total, CARRO_PER_POUND, (float)carrots_total * CARRO_PER_POUND);
        
        if (discountAmount > 0)
            printf("** 5%% Discount: -$%.2f\n", discountAmount);
        
        printf("** Total sum: %.2f\n", totalAmount - discountAmount);
        printf("** Shipping cost: $%.2f\n", shippingCost);
        printf("** Your total sum incl. shipping: $%.2f\n", totalAmount - discountAmount + shippingCost);
        printf("** Thank you for your order at ABC Mail Order Grocery.\n");
        
        return 0;
    }
    
    return 0;
}
