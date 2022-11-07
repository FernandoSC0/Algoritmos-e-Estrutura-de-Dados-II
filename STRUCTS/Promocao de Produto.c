﻿#include <stdio.h>

typedef struct {
       long codigo;
       char nome[100];
       float preco;
} Produto;

int main()
{
    Produto p;
    
    // Entrada
    printf("Digite codigo, nome e preco");
    scanf ("%ld %s %f", &p.codigo, p.nome, &p.preco);
    
    // Saídas
    printf("Valores Digitados\n");
    printf ("%ld %s %.2f", p.codigo, p.nome, p.preco);

    if (p.preco < 4) printf ("Produto em Promocao");
    else             printf ("Produto Cadastrado");  

    return 0;
}
