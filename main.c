#include <stdio.h>

int main() {

    int mortgageamount;
    int account,term;
    float totalinterest,payment,interestrate;

    printf("Enter customer's account number(0 to end): ");
    scanf("%d", &account);

    while ( account != 0) {

        printf("Enter the mortgage amount: ");
        scanf("%d", &mortgageamount);
        printf("Enter the mortgage term (in months): ");
        scanf("%d", &term);
        printf("Enter the interest rate: ");
        scanf("%f", &interestrate);

        totalinterest = (mortgageamount * interestrate * term);
        payment = ((mortgageamount + totalinterest) / term);

        printf("Total interest is %.1f\n", totalinterest);
        printf("Monthly payment: %.2f - ", payment);

        if (payment < 0)
            printf("NOT POSSIBLE!");
        else if (payment < 300.0)
            printf("TOO LOW!");
        else if (payment < 1000)
            printf("MEDIUM!");
        else
            printf("TOO HIGH");

        printf("\n\nEnter customer's account number(0 to end): ");
        scanf("%d", &account);

    }
    printf("\n BYEE!");

    return 0;
}






