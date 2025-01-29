#include <stdio.h>
int main(void){

//inclusão das variaveis.
char estado;
char codigodacarta[20];
char nomedacidade[20];
int populacao;
float areakm²;
float pib;
int numerodepontosturisticos;
float densidadepopulacional;
float pibpercapita;

//estado.
printf("digite o estado: \n");
scanf("%c", &estado);
printf("estado: %c \n", estado);

//codigo da carta.
printf("digite o codigo da carta: \n");
scanf("%s", &codigodacarta);
printf("codigo da carta: %s \n", codigodacarta);

//nome da cidade.
printf("digite o nome da cidade: \n");
scanf("%s", &nomedacidade);
printf("cidade: %s \n", nomedacidade);

//população.
printf("digita o ne da cidade: \n");
scanf("%d", &nomedacidade);
printf("cidade: %d \n", nomedacidade);

//area em km².
printf("digite a area km²: \n");
scanf("%f", &areakm²);
printf("area: %f km² \n", areakm²);

//densidade populacional.
densidadepopulacional = populacao / areakm²;
printf("densidade populacional: %f pessoa/km² \n, densidadepopulacional");

//pib.
printf("digite o pib: \n");
scanf("%f", &pib);
printf("pib: %f reais \n", pib);

//pib per capita.
pibpercapita = pib / populacao;
printf("pib per capita: %f reais \n", pibpercapita);

//pontos turisticos.
printf("digite a quantidade de pontos turisticos: \n");
scanf("%d", &numerodepontosturisticos);
printf("quantidade de pontos turisticos: %d \n", numerodepontosturisticos);

//impressao mais clara.
printf("estado:%d \n", estado);
printf("codigo da carta: %s \n", codigodacarta);
printf("nome da cidade: %s \n", nomedacidade);
printf("população: %d \n", populacao);
printf("area: %f km² \n", areakm²);
printf("densidade populacional: %f população/km² \n", densidadepopulacional);
printf("pib: %f reaia \n", pib);
printf("pib per capita: %f reais \n", pibpercapita);
printf("pontos turisticos: %d \n", numerodepontosturisticos);



return 0;

}