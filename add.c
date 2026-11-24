#include <stdio.h>
//zum compelieren folgen sie den Befehl: gcc add.c -o add
int main(void) {
    int x, y;
    int sum;
    int rem;// reminder
    float div;
    printf("Gib den ersten Wert ein: ");
     (scanf("%d", &x));
    printf("Gib den zweiten Wert ein: ");
     (scanf("%d", &y));
    sum = x + y;
    div = (float)x / (float)y;
    printf("der wert von x:%d\n",x);
    printf("der wert von y:%d\n",y);
    printf("die summe von x+y:%d\n",sum);
    printf("die summe von x/y (float):%.2f\n",div);
    div = x / y;
    printf("der quotient von x/y (int):%.2f\n",div);
    rem = x % y;
    printf("der rest von x/y:%d\n",rem);
    return 0;
}  