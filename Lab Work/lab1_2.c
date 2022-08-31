#include <stdio.h>
#include <stdlib.h>

int main() {
	float num;
	
	printf("Enter the number : ");
	scanf("%f", &num);
	
	int truncate = num * 1000;
	float trunCate = (float)truncate / 1000;
	
	printf("Round Off Number : %0.3f\n",num);
	printf("Truncated Number  : %0.3f\n", trunCate);
	
	return 0;
}
