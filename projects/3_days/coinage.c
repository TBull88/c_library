#include <stdio.h>

void calc_coins(int amount);

int main(void)
{

	for (int amount = 100; amount <= 120; amount++) {
		calc_coins(amount * (amount - 99));
		printf("\n");
	}
	return 0;
}

void calc_coins(int amount)
{
	int fifty_cents = 0;
	int quarters = 0;
	int dimes = 0;
	int nickels = 0;
	int pennies = 0;

	printf("Change breakdown for %d pennies:\n", amount);
	fifty_cents = amount / 50;	// Number of fifty cent pieces
	amount %= 50;		// Remaining amount after counting fifty cent pieces
	if (fifty_cents != 0) {
		printf("Fifty Cent Pieces: %d\n", fifty_cents);
	}
	quarters = amount / 25;	// Number of quarters
	if (quarters != 0) {
		printf("Quarters: %d\n", quarters);
	}
	amount %= 25;		// Remaining amount after counting quarters
	dimes = amount / 10;	// Number of dimes
	if (dimes != 0) {
		printf("Dimes: %d\n", dimes);
	}
	amount %= 10;		// Remaining amount after counting dimes
	nickels = amount / 5;	// Number of nickels
	if (nickels != 0) {
		printf("Nickels: %d\n", nickels);
	}
	pennies = amount % 5;	// Number of pennies
	if (pennies != 0) {
		printf("Pennies: %d\n", pennies);
	}
}
