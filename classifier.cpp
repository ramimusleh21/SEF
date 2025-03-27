#include <stdio.h>


void train();
void predict();


int main(void) {

	train();
	predict();

	return 0;
}


void train() {

	printf("train");
	printf("The first feature is added");
}

void predict() {

	printf("predict");
}