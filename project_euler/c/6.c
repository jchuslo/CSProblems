#include <stdio.h>
#include <stdlib.h>

int sum_of_squares(){
	int sum = 0;
	for(int i=1; i<=100; i++){
		sum += i*i;
	}

	return sum;
}

int square_of_sum(){
	int square = ((100*101)/2);

	return square*square;
}

int main(){
	int result = abs(sum_of_squares() - square_of_sum()); 
	printf("%d", result);
}