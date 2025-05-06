#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "preco.h"

int main()
{
    int idade, quantidade, preco;
    int confirmado = 1;
    char resposta[10];

    while (confirmado){
        printf("qual e sua idade? ");
        scanf("%d", &idade);
        system("cls");
        if(idade >= 0 && idade <= 150){
            confirmado = 0;
        }else{
            printf("IDADE INVALIDA\na idade deve esta entre o intervalo de 0 a 150\n\n");
        }
    }

    printf("Quantos bilhetes voce deseja comprar? ");
    scanf("%d", &quantidade);
    system("cls");

    if(quantidade > 5 || quantidade <= 0){
        printf("a quantidade maxima permitade e de 5 bilhetes \ngostaria de selecionar uma nova quatidade de bilhetes ou sair? ");
        while(!confirmado){
            printf("\n\ndigite escolher para escolher ou sair para sair ");
            scanf("%s", resposta);
            if(strcmp(resposta, "escolher") == 0){
                system("cls");
                while(!confirmado){
                    printf("Quantos bilhetes voce deseja comprar? maximo de 5 ");
                    scanf("%d", &quantidade);
                    system("cls");
                    if(quantidade <= 5 && quantidade >= 1){
                        confirmado = 1;
                        break;
                    }
                    printf("QUANTIDADE MAXIMA E DE 5\n");
                }
            }else if (strcmp(resposta, "sair") == 0){
                idade = -1;
                break;
            }
        }
    }

    if(idade >= 0){
        preco = calculapreco(idade, quantidade);
        printf("\no preco final e de %d", preco);
    }

    return 0;
}
