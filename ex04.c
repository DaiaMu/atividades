#include <stdio.h>

int main() {
    int n, soma = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    for(int cont = 1; cont <= n; cont++) {
        //soma = soma + cont;
        soma += cont;
    }

    printf("A soma de 1 a %d é %d\n", n, soma);


    return 0;
}