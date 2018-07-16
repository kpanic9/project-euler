#include <stdio.h>
#include <stdlib.h>



int is_prime(long n);



int main() {

	int count = 1;

	for(long i = 3; ; i++) {
		if( is_prime(i) == 1 ) {
			count++;
		}

		if( count == 10001 ) {
			printf("%i\n", i);
			break;
		}
	}

}



int is_prime(long n) {
	int flag = 1;
	for(long i = 2; i <= n/2; i++) {
		if(n % i == 0) {
			flag = 0;
			break;
		}
	}
	return flag;
}
