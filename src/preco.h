// filepath: d:\OneDrive - Universidade do Estado do Rio de Janeiro\teste de software aaaaaaaaaaaa\tramps p2\src\preco.h
/*#ifndef PRECO_H
#define PRECO_H

int calculapreco(int idade, int quantidade);

#endif*/


int calculapreco (int idade, int quantidade){
    int preco;
    if(quantidade >= 1 && quantidade <= 5){
        if(idade >= 0 && idade <= 12 ){
            preco = quantidade * 10;
            return preco;
        }else if(idade >= 13 && idade <= 59){
            preco = quantidade * 30;
            return preco;
        }else if(idade >= 60 && idade <= 150){
            preco = quantidade * 15;
            return preco;
        }else {
            return -1; // Retorna -1 se a idade for inválida
        }
    }else{
        return -2; // Retorna -2 se a quantidade for inválida
    }
    

    return 0;
}