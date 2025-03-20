#include <stdio.h>
#include <locale.h>

int main () {
setlocale(LC_ALL, "portuguese");

    printf("\n\n");
    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n         Bem vindo ao     \n");
    printf("     |_|_|nnnn nnnn|_|_|   Nosso sistema de operações \n");
    printf("    |\" \"|  |_|  |\" \"|                         \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n");
    printf("\n\n");

    int n1;
    int n2;

    int operacao;

    printf("(1) soma (2) subtração (3) multiplicação (4) divisão\n");
    printf("Qual operação deseja fazer? \n");
    scanf("%d", &operacao);

    printf("Digite um número: \n");
    scanf("%d", &n1);

    printf("Digite outro número número: \n");
    scanf("%d", &n2);

    int soma;
    int menos;
    int multi;
    int divisao;

     switch (operacao) {
     case 1: 
        soma = n1 + n2;
     break;
     case 2: 
        menos = n1 - n2;
     break;
     case 3: 
        multi = n1 * n2;
     break;
     case 4: 
        if (n2 != 0) {
            divisao = n1 / n2;	
        } else {
            printf("Erro: divisão por zero!\n");
            return 1;
        }
        break;
        default:
            printf("Operação Inválida!\n");
            return 1;
    }

    if (operacao == 1)
    {
        printf("Seu resultado da soma entre %d e %d é: %d\n", n1, n2, soma);
    }
    else  if (operacao == 2)
    {
        printf("Seu resultado da subtração entre %d e %d é: %d\n", n1, n2, menos);
    }
    else  if (operacao == 3)
    {
        printf("Seu resultado da multiplicação é: %d\n", multi);
    }
    else if (operacao == 4) {
        printf("Seu resultado da divisão entre %d e %d é: %d\n", n1, n2, divisao);
    }

    printf("Muito obrigado por usar nosso sistema de operações!");
}