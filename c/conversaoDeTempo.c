#include <stdio.h>
int main() {
    int segundos;
    scanf("%d",&segundos);
    int horas = 0;
    while (segundos - 3600 >= 0) {
        horas++;
        segundos -= 3600;
    }
    int minutos = 0;
    while (segundos - 60 >= 0) {
        minutos++;
        segundos -= 60;
    }
    printf("%d:%d:%d\n",horas,minutos,segundos);
    return 0;
}
