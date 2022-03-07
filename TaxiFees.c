#include <stdio.h>
#include <stdlib.h>

double getTaxiFees() {
    double taxiFee = -1;
    double cost;

    do {
        printf("Enter taxi cost: \n");
        scanf(" %lf", &taxiFee);

        if (taxiFee < 0) {
            printf("invalid input, try again\n");
        } else {
            printf("Thank You!\n");
        }
    } while (taxiFee < 0);

    if (taxiFee - 10 < 0) {
        cost = 0;
    } else {
        cost = taxiFee - 10;
    }

    return cost;
}

double taxiFeesAcrossDays(int days) {
    double cost = 0;
    for (int i = 0; i < days; i++) {
        cost += getTaxiFees();
    }

    return cost;
}

//unit testing
int main() {
    double cost;
    cost = taxiFeesAcrossDays(3);
    printf("cost of taxi fees to employee: %0.2f\n", cost);
    return 0;
}