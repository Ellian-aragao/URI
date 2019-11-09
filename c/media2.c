#include <stdio.h>
int main(){
	double a = 2, b = 3, c = 5, media = a+b+c;
	double aux;
	
	scanf("%lf",&aux);
	
	a *= aux;
	
	scanf("%lf",&aux);
	b *= aux;
	
	scanf("%lf",&aux);
	
	c *= aux;
	media = (a+b+c) / media;

	printf("MEDIA = %.1ld\n",media);

	return 0;
}