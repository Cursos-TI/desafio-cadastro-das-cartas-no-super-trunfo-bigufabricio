#include <stdio.h>
int main(){


    
     // Inclusão das variaveis abaixo.
    char estado;
    char codigodacarta[50];
    char nomedacidade[50];
    int populacao;
    float areaemkm;
    float pib;
    int numerodepontosturisticos;

    //1.referente ao estado.
    printf("digite o estado\n");
    scanf("%c", &estado);
    printf("estado: %c\n", estado);

    //2.referente ao codigo da carta.
    printf("digite o codigo da carta\n");
    scanf("%s", &codigodacarta);
    printf("codigo da carta: %s\n", codigodacarta);

    //3.referente ao nome da cidade.
    printf("digite o nome da cidade\n");
    scanf("%s", &nomedacidade);
    printf("nome da cidade: %s\n", nomedacidade);

    //4.referente a população.
    printf("digite a quantidade da populacao\n");
    scanf("%d", &populacao);
    printf("populacao: %d\n", populacao);

    //5.referente a area em km².
    printf("digite o tamanho da area em km\n");
    scanf("%2f", &areaemkm);
    printf("area em km²: %2f\n", areaemkm);

    //6.referente ao pib.
    printf("digite o pib");
    scanf("%2f", &pib);
    printf("pib: %2f\n", pib);

    //7.referente ao numero de pontos turisticos.
    printf("digite o numero de pontos turisticos\n");
    scanf("%d", &numerodepontosturisticos);
    printf("numero de pontos turisticos: %d\n", numerodepontosturisticos);

    

return 0;
}
