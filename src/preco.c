// filepath: d:\OneDrive - Universidade do Estado do Rio de Janeiro\teste de software aaaaaaaaaaaa\tramps p2\src\preco.c
#include "preco.h"

int calculapreco (int idade, int quantidade){
    int preco;
    if(idade <= 12 ){
        preco = quantidade * 10;
        return preco;
    }else if(idade >= 13 && idade <= 59){
        preco = quantidade * 30;
        return preco;
    }else if(idade >= 60){
        preco = quantidade * 15;
        return preco;
    }

    return 0;
}