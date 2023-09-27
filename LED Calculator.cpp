#include <stdio.h>
#include <stdlib.h>

float Vin = 0.0,
      Vled = 0.0,
      Iled = 0.0,
      R = 0.0;
char ch;

int main(int argc, char *argv[])
{
    do {
        printf("Vamos calcular o LED?\n");
        printf("S/N: ");
        scanf(" %c", &ch);

        if (ch == 'S' || ch == 's') {
            printf("LED CALC    v1.0\n");
            printf("Autor: Eng. Wagner Rambo\n");
            printf("Realizador: G3programmer\n\n");

            printf("Digite o valor de Vin (em Volts): ");
            scanf("%f", &Vin);
            printf("\n\n");

            printf("Digite o valor de Vled (em Volts): ");
            scanf("%f", &Vled);
            printf("\n\n");

            printf("Digite o valor de Iled (em Amperes): ");
            scanf("%f", &Iled);
            printf("\n\n");

            R = (Vin - Vled) / Iled;

            printf("Vin = %.2f\n\n", Vin);
            printf("Vled = %.2f\n\n", Vled);
            printf("Iled = %.2f\n\n", Iled);
            printf("O resistor para LED tem o valor de %.2f Ohms\n\n", R);
        }
    } while (ch != 'N' && ch != 'n'); // Use && para verificar se ch é 'N' ou 'n'

    system("Pause");
    return 0;
}
