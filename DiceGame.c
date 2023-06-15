#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(int *die1, int *die2) {
    *die1 = rand() % 6 + 1;
    *die2 = rand() % 6 + 1;
    return *die1 + *die2;
}

int main() {
    srand(time(0));

    int die1, die2, total;

    printf("Rolling dice...\n");
    total = roll_dice(&die1, &die2);

    printf("Die 1: %d\n", die1);
    printf("Die 2: %d\n", die2);
    printf("Total value: %d\n", total);

    return 0;
}
