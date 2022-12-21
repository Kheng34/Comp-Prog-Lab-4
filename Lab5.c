#include <stdio.h>

int a, biggest;

int main() {
	do {
		printf("Please enter an integer(0 is stop): ");
		scanf("%d", &a);
		if(a > biggest) {
			biggest = a;
		}
	}
	while(a != 0);
	printf("Biggest: %d", biggest);
	printf("\n");system("PAUSE");return 0;
}
