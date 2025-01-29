#include <stdio.h>
int main(void){


    
     // Inclusão das variaveis abaixo.
    char estado;
    char codigodacarta[50];
    char nomedacidade[50];
    int populacao;
    float areaemkm²;
    float pib;
    int numerodepontosturisticos;
    float densidadepopulacional;
    float pibpercapita;

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
    printf("digite o tamanho da area em km²\n");
    scanf("%2f", &areaemkm²);
    printf("area : %2f km² \n", areaemkm²);

    //calculo da população pelos km² = densidade populacional.
    densidadepopulacional = populacao / areaemkm²;
    printf("densidade populacional: %2f pessoas/km² \n", densidadepopulacional);

    //6.referente ao pib.
    printf("digite o pib");
    scanf("%2f", &pib);
    printf("pib: %.2f reais \n", pib);

    //calculo do pib per capita;
    pibpercapita = pib / populacao;
    printf("pib per capita: %2f reais \n", pibpercapita);

    //7.referente ao numero de pontos turisticos.
    printf("digite o numero de pontos turisticos\n");
    scanf("%d", &numerodepontosturisticos);
    printf("numero de pontos turisticos: %d\n", numerodepontosturisticos);

    

return 0;
}
