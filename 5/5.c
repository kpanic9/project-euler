#include <stdio.h>
#include <stdlib.h>



int main() {

	int flag;

	for(int i = 1; ; i++) {
		flag = 1;
		for(int j = 1; j <= 20; j++) {
			if(i % j != 0) {
				flag = 0;
			}
		}

		if( flag == 1 ) {
			printf("ANSWER: %d\n", i);
			break;
		}
	}

}

