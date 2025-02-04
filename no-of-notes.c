#include <stdio.h>

int main() {
    int ten, twenty, fifty, hundred;
    int total_amount;

    // Prompt the user to enter the number of notes
    printf("Enter the number of 10-rupee notes: ");
    scanf("%d", &ten);

    printf("Enter the number of 20-rupee notes: ");
    scanf("%d", &twenty);

    printf("Enter the number of 50-rupee notes: ");
    scanf("%d", &fifty);

    printf("Enter the number of 100-rupee notes: ");
    scanf("%d", &hundred);

    // Calculate the total amount
    total_amount = (ten * 10) + (twenty * 20) + (fifty * 50) + (hundred * 100);

    // Display the frequency of each type of note
    printf("\nFrequency of notes:\n");
    printf("10-rupee notes: %d\n", ten);
    printf("20-rupee notes: %d\n", twenty);
    printf("50-rupee notes: %d\n", fifty);
    printf("100-rupee notes: %d\n", hundred);

    // Display the total amount
    printf("\nTotal amount: %d rupees\n", total_amount);

    return 0;
}
