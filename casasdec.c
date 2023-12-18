#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int numero,resto;
    int i = 0;
    double quadrado,cubo,quadrada, cubica;

    while(i == 0){
    printf("Informe um número positivo e diferente de 0:\n");
    scanf("%d", &numero);
        if (numero <= 0){
            printf("O número informado é negativo ou igual a 0!!!!!\n");
            i = 0;
        }
        else {
            quadrado = pow(numero,2);
            cubo = pow(numero,3);
            quadrada = sqrt(numero);
            cubica = cbrt(numero);
            resto = numero%3;
            printf("%d ao quadrado é: %.2lf\n", numero, quadrado);
            printf("%d ao cubo é: %.2lf\n", numero,cubo );
            printf("A raíz quadrada de %.d é: %.2lf\n", numero, quadrada);
            printf("A raíz cubica de %.d é: %.2lf\n", numero, cubica);
            printf("O resto da divisão de %d por 3 é: %d\n", numero, resto);
            i = 1;
        }
    }
    return 0;
}
