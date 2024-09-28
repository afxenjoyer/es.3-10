#include <stdio.h>

int main(void)
{
    int eta;

    printf("Quanti anni hai?\n");
    scanf("%d", &eta);

    if (eta < 5)
    {
        printf("Il biglietto risulta gratuito\n");
    }
    else if (eta >= 5 && eta <= 10)
    {
        printf("Il biglietto costa 1 Euro\n");
    }
    else if (eta >= 11 && eta <= 17)
    {
        printf("Il biglietto costa 1 Euro e 50 centesimi\n");
    }
    else if (eta >= 18 && eta <= 26)
    {
        printf("Il biglietto costa 2 Euro\n");
    }
    else if (eta > 26)
    {
        printf("Il biglietto costa 3 Euro\n");
    }

    return 0;
}
