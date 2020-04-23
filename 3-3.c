#include <stdio.h>

int main() {
		
	float weight, height, BMI;

	printf("Please type your wightInKilograms: \n");
	scanf_s("%f", &weight);
	printf("Please type your heightInMeters: \n");
	scanf_s("%f", &height);

	BMI = weight / (height * height);
	printf("BMI VALUES: %f \n", BMI);

	return 0;
}