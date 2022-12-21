#include <stdio.h>

int a, i;

int main() {
	printf("Please enter the number: ");
	scanf("%d", &a);
	for(i = 1; i <= a; i += 2) {
		printf("%d ", i);
	}
	printf("\n");system("PAUSE");return 0;
}
