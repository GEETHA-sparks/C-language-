#include <stdio.h>
#include <string.h>

struct Payment {
    int transactionID;
    char name[50];
    float amount;
    int type;

    union {
        char upiID[50];
        char cardNumber[30];
        float cashAmount;
    } payment;
};

int main() {
    int n, i;
    float total = 0.0;

    printf("Enter the number of transactions: ");
    scanf("%d", &n);

    struct Payment p[n];

    printf("\n--------SMART PAYMENT WALLET--------\n\n");

    for(i = 0; i < n; i++) {

        printf("Enter transaction ID : ");
        scanf("%d", &p[i].transactionID);

        printf("Enter Customer Name : ");
        scanf("%s", p[i].name);

        printf("Enter Amount : ");
        scanf("%f", &p[i].amount);

        printf("\nSelected the Payment Method\n");
        printf("1.UPI\n");
        printf("2.CARD\n");
        printf("3.CASH\n");

        printf("Enter your choice : ");
        scanf("%d", &p[i].type);

        switch(p[i].type) {

            case 1:
                printf("\nEnter UPI ID : ");
                scanf("%s", p[i].payment.upiID);
                break;

            case 2:
                printf("\nEnter Card Number : ");
                scanf("%s", p[i].payment.cardNumber);
                break;

            case 3:
                p[i].payment.cashAmount = p[i].amount;
                break;

            default:
                printf("\nEnter a valid choice.");
                break;
        }

        total += p[i].amount;
    }

    printf("\n========PAYMENT RECEIPT========\n");

    for(i = 0; i < n; i++) {

        printf("\nTransaction ID : %d", p[i].transactionID);
        printf("\nCustomer Name : %s", p[i].name);
        printf("\nAmount : %.2f", p[i].amount);

        switch(p[i].type) {

            case 1:
                printf("\nPayment Type : UPI");
                printf("\nUPI ID : %s\n", p[i].payment.upiID);
                break;

            case 2:
                printf("\nPayment Type : CARD");
                printf("\nCard Number : %s\n", p[i].payment.cardNumber);
                break;

            case 3:
                printf("\nPayment Type : CASH");
                printf("\nCash Amount : %.2f\n",
                       p[i].payment.cashAmount);
                break;
        }
    }

    printf("\n******** TOTAL AMOUNT ********\n");
    printf("\nTotal amount transacted : %.2f\n", total);

    return 0;
}
