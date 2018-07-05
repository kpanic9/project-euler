/*
 * Auther: Namesh Sanjitha
 */


#include <stdio.h>
#include <stdlib.h>


struct factors {
	int count;
	int *list;
	int prime_factors;
};


int is_prime(int num);
void find_factors(int num, struct factors *x);
void count_primes(struct factors *x);


int main() {

	int i = 0;
	struct factors x;
	find_factors(645, &x);
	count_primes(&x);

	printf("Factors: ");
	for(i = 0; i < x.count; i++) {
		printf("%d ", x.list[i]);
	}
	printf("\n");
	printf("Number of factors = %d\n", x.count);
	printf("Number of prime factors = %d\n", x.prime_factors);


	for(i = 2; ; i++) {
		find_factors(i, &x);
		count_primes(&x);
		if(x.prime_factors == 4) {
			find_factors(i+1, &x);
			count_primes(&x);
			if(x.prime_factors == 4) {
				find_factors(i+2, &x);
				count_primes(&x);
				if(x.prime_factors == 4) {
					find_factors(i+3, &x);
					count_primes(&x);
					if(x.prime_factors == 4) {
						printf("%d %d %d %d\n", i, i+1, i+2, i+3);
						break;
					}
				}
			}
		}

	}

	return 0;
}





void find_factors(int num, struct factors *x) {
	int i = 0;
	x->count = 0;
	x->list = (int *)malloc(1000 * sizeof(int));
	for(i = 2; i <= num/2; i++) {
		if(num % i == 0) {
			x->list[x->count] = i;
			x->count++;
		}
	}
}


void count_primes(struct factors *x) {
	x->prime_factors = 0;
	int i;
	for(i = 0; i < x->count; i++) {
		if( is_prime(x->list[i]) == 1 ) {
			x->prime_factors++;
		}
	}
}


int is_prime(int num) {
	if(num == 2) {
		return 1;
	}

	int i = 0;
	int flag = 1;
	for(i = 2; i <= num/2; i++) {
		if(num % i == 0) {
			flag = 0;
			break;
		}
	}
	return flag;
}



