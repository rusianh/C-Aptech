#include <iostream>
int main() {
	int i,j,a,n=5,number[15];

	printf ("\nPlease enter how many numbers you want to sort");
	scanf ("%d", &n);
	printf ("\nPlease enter the numbers to be sorted as ascending order");
	for (i=0; i<n; ++i)
	scanf ("%d",&number[i]);

	for (i=0; i<n; ++i) {
		for (j=i+1; j<n; ++j) {
			if (number[i] > number[j]) {
				a= number[i];
				number[i] = number[j];
				number[j] = a;
			}
		}
	}

	printf ("\nAscending order of entered numbers");
	for (i=0; i<n; ++i)
	printf ("\n%d",number[i]);

	return 0;
}