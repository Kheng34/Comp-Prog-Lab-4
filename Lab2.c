#include <stdio.h>

int a, i, sum, average;

int main() {
	printf("Please enter the number: ");
	scanf("%d", &a);
	for(i = 1; i <= a; i++){
		sum += i;
	}
	printf("Sum: %d\n", sum);
	average = sum / a;
	printf("Average: %d\n", average);
	printf("\n");system("PAUSE");return 0;
}
