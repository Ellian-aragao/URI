#include <stdio.h>
int main()
{
	float custos = 0;
    int a;
    scanf("%d",&a);
    switch(a){
        case 1:
            custos += 4;
            break;
        case 2:
            custos += 4.5;
            break;
        case 3:
            custos += 5;
            break;
        case 4:
            custos += 2;
            break;
        case 5:
            custos += 1.5;
            break;        
    }

    scanf("%d",&a);
    custos *= a;
    
    printf("Total: R$ %.2f\n",custos);

	return 0;
}