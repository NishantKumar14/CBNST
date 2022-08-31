/*
 * inherent error : phele hoga machine me.
 * truncate : chop remaining values.
 * round error
 *
 *
 *
 * absloute error , relative error , percentage error 
 *
 *
 * absolute error = |true value - approx value|
 * relative error = absolute error / true value
 * percentage error = relative error * 100
 *     
*/





#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float trueValue, approxValue, absoluteError, relativeError, percentageError;
	printf("Enter the True Value : ");
	scanf("%f", &trueValue);
	printf("Enter the Approx Value : ");
	scanf("%f", &approxValue);
	
	absoluteError = fabs(trueValue - approxValue);
	relativeError = fabs(absoluteError / trueValue);
	percentageError = fabs(relativeError * 100);
	
	printf("Absolute Error : %f\n", absoluteError);
	printf("Relative Error : %f\n", relativeError);
	printf("Percentage Error : %f\n", percentageError);
	return 0;
}
