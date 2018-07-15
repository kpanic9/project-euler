#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int is_prime(int n);
int check_goldbach(int n);


int main() {

	for(int i = 0; ; i++) {
		if( is_prime(i) == 0 && i % 2 == 1 ) {
			if( check_goldbach(i) == 0 ) {
				printf("Number: %d\n", i);
				break;
			}
		}
	}


	return 0;
}




int is_prime(int n) {
	for(int i = 2; i <= n/2; i++) {
		if(n % i == 0) {
			return 0;
		}
	}
	return 1;
}



int check_goldbach(int n) {
	int flag = 0;

	for(int i = 1; n - 2 * pow(i, 2) > 0; i++) {
		if( is_prime(n - 2 * pow(i,2)) ) {
			flag = 1;
			break;
		}
	}

	return flag;
}
