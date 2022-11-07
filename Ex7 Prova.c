#define TAM 4

int main()
{

    float h[TAM];
    int i;

    float menorh=0, maiorh=0,mediah=0;

    printf("Entre com as alturaspara preencher o array:/n");
    for (i = 0; i < TAM; i++) {
        scanf("%f", &h[i]);
    }
maiorh= h[0];
menorh= h[0];

    for (int i=0; i < TAM; i++);
        mediah= mediah+h[i] ;
        if (menorh>h[i]){
               maiorh=h[i];
        }
}
mediah= mediah/TAM;

printf("\n ***ALTURA MÉDIA: %f*** ", mediah);
for (int i=0; i < TAM; i++){
    if (h[i]<mediah){
        hinfm= hinfm + 1;
    }
}

printf("\n**********Menor altura**********:  %f", menorh);
printf("\n**********Maior altura**********:  %f", maiorh);
printf("\n Quantidade de Pessoas com Altura Inferior a Média ***************: %d",hinfm);

return0;
}
