#include <stdio.h>

int main() {
    int pin = 1234, entered_pin;
    int choice;
    float balance = 10000.0, amount;

    printf("=== Smart ATM System ===\n");
    printf("Enter your PIN: ");
    scanf("%d", &entered_pin);

    if (entered_pin != pin) {
        printf("Incorrect PIN! Access Denied.\n");
        return 0;
    }

    printf("PIN Verified! Welcome.\n");

    while (1) {
        printf("\n--- ATM Menu ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your Current Balance: Rs. %.2f\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Rs. %.2f Deposited Successfully!\n", amount);
                } else {
                    printf("Invalid Amount!\n");
                }
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Rs. %.2f Withdrawn. Please collect cash.\n", amount);
                } else {
                    printf("Insufficient Balance or Invalid Amount!\n");
                }
                break;
            case 4:
                printf("Thank you for using Smart ATM!\n");
                return 0;
            default:
                printf("Invalid Choice!\n");
        }
    }
    return 0;
}
