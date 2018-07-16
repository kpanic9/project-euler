#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main() {

	long sum_of_squares = 0;
	long square_of_sum = 0;

	for(int i = 1; i <= 100; i++) {
		sum_of_squares += (int)pow(i, 2);
		square_of_sum += i;
	}

	square_of_sum = (int)pow(square_of_sum, 2);

	printf("%ld\n", square_of_sum - sum_of_squares);

	return 0;
}
