#include <stdio.h>

int a, b, i;

int main() {
	printf("Please enter starting number: ");
	scanf("%d", &a);
	printf("Please enter end number: ");
	scanf("%d", &b);
	for(i = a; i <= b; i++) {
		if(!(i % 4)) {
			printf("%d ", i);
		}
	}
	printf("\n");system("PAUSE");return 0;
}
