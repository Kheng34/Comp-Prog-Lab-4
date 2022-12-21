#include <stdio.h>

int i, k;

int main() {
	for(i = 2; i <= 4; i++) {
		for(k = 1; k <= 3; k++) {
			printf("%d* %d-\n", i, k);	
		}
	}
	printf("\n");system("PAUSE");return 0;
}
