#include <stdio.h>
int main() {
    float notas[3];
    float media, soma = 0;

    for(int pos =0;pos <3;pos++) {
        printf("Digite o valor da nota %d : ", pos);
        scanf("%f", &notas[pos]);
    }

    for (int pos=0; pos < 3(notas); poss++) {
        soma =+ notas[pos];
        // soma = soma + notas[pos]; faz a mesma coisa que a linha de cima
    }

    //media = soma / sizeof(notas);
    media = soma / 3;

    printf("A média das notas é: %f\n", media);

    if(media >= 7) {
        printf("Aluno aprovado\n");
    } else if(media >= 5) {
        printf("Aluno em recuperação\n");
    }  else {
            ("Aluno reprovado");
    }

    return 0;
}