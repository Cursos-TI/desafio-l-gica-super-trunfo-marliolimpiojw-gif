#include<stdio.h>
#include<stdio.c>

int main ()

{    
//Declaraçâo e inicialização de variaveis do tipo  strings 

char Cidade_1 [8] = "Vitoria";
char Cidade_2 [9] = "Aracaju";
char Estado_1 [15] = "Espirito_Santo";
char Estado_2 [9] = "Sergipe";
char Codigo_1 [8] = "Cod_27";
char Codigo_2 [9] = "Cod_79";

printf ("Informe o Estado_1 :");
scanf ("%s",Estado_1);
printf ("O Estado_1 informado e: %s",Estado_1);
printf ("Informe o Estado_2 :/n");
scanf ("%s",Estado_2);
printf("O Estado_2 informado e: %s",Estado_2);

printf ("Informe a Cidade_1:/n");
scanf("%s", Cidade_1);
printf(" a Cidade_1 informada e: %s", Cidade_1);

printf  ("Informe a Cidade_2:/n");
scanf ("%s", Cidade_2);
printf ("a Cidade_2 informada e: %s", Cidade_2);

printf ("Informe o codigo da cidade_1:/n ");
scanf ("%s", Codigo_1);
printf ("o Codigo da cidade_1 informado e: %s", Codigo_1);
printf ("Informe o Codigo da Cidade_2:/n");
scanf ("%s", Codigo_2);
printf ("o Codigo da Cidade_2 informado e: %s", Codigo_2);


// Declaração e inicializacão do tipo inteiro

int  populacao1 = 4000000, populacao2 = 2300000;
int  ponto_turistico_1 = 80, ponto_turistico_2 = 60;

printf ("Informe a populacao1 :");
scanf ("%i", &populacao1 );
printf ("A populacao 1 informada e: %i", populacao1);

printf ("Informe a populacao 2 :");
scanf ("%i", &populacao2 );
printf ("A populacao 2 informada e: %i", populacao2);

printf ("Informe quantidade de ponto_turistico_1:");
scanf ("%i", &ponto_turistico_1);
printf ("A quantidade de ponto_turistico_1 informada e: %i", ponto_turistico_1);
printf ("Informe quantidade de ponto_turistico_2:");
scanf ("%i", &ponto_turistico_2);

printf ("A quantidade de ponto_turistico_2 informada e: %i", ponto_turistico_2);

// Declaração e inicialização de variaveis tipo float 

float   Area_1 = 45000.00,  Area_2 = 21200.00;

float  PIB_1 = 59,5,    PIB_2 = 11,7;

float  Densidade_populacional_1 = 89,03, Densidade_populacional_2 = 100,74;

printf  ("Informe a Area_1 :\n");
scanf ("%f", &Area_1);
printf ("Exibindo valor real de Area_1 : %. 2f \n",Area_1);

printf ("Informe a Area_2:\n");
scanf ("%f", &Area_2);
printf ("Exibindo valor real de Area_2 : %. 2f \n",Area_2);

printf ("Informe o PIB 1:");
scanf ("%f", &PIB_1);
printf ("Exibindo valor real do PIB_1 : %. 1f \n",PIB_1);

printf ("Informe o PIB 2:");
scanf ("%f",&PIB_2);
printf ("Exibindo valor real do PIB 2 : %. 1f \n",PIB_2);

printf ("Informe a Densidade_populacional_1:");
scanf ("%f", &Densidade_populacional_1);
printf ("Exibindo valor real da Densidade_populacional_1 : %. 2f \n",Densidade_populacional_1);

printf ("Informe a Densidade_populacional_2:");
scanf ("%f", &Densidade_populacional_2);
printf ("Exibindo valor real da Densidade_populacional_2 : %. 2f \n",Densidade_populacional_2);







 return 0;
 }







 