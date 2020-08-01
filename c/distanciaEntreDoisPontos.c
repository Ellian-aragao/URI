#include <stdio.h>
#include <math.h>
int main() {
	float a[4];
	for (int i = 0; i < 4; i++) {
		scanf("%f",&a[i]);
	}
	printf("%.4f\n",sqrt(pow((a[2] - a[0]), 2) + pow((a[3] - a[1]),2)));
	return 0;
}
