#include <stdio.h>
int main() {
    int number;
    scanf("%d",&number);
    int salaperhour;
    scanf("%d",&salaperhour);
    double valorperhour;
    scanf("%lf",&valorperhour);
    printf("NUMBER = %d\n",number);
    printf("SALARY = U$ %.2lf\n",salaperhour * valorperhour);
    return 0;    
}
