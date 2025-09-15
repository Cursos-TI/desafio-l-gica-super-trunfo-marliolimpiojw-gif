#include<stdio.h>

int main ()

{    
//Declaraçâo e inicialização de variaveis do tipo  strings 

char cidade_1 [8] = "Vitoria";
char cidade_2 [9] = "Aracaju";
char estado_1 [15] = "Espirito_Santo";
char estado_2 [9] = "Sergipe";
char codigo_1 [8] = "cod_27";
char codigo_2 [9] = "cod_79";

printf ("Informe o estado1 :/n");
scanf ("%s", estado_1 );
printf ("o estado_1 informado e: %s\n", estado_1);
printf ("informe o estado2 :/n");
scanf ("%s", estado_2);
printf("o estado_2 informado e: %s\n", estado_2);

printf ("Informe a cidade_1:/n");
scanf("%s", cidade_1 );
printf(" a cidade_1 informada e: %s\n", cidade_1);

printf  ("Informe a cidade_2:/n");
scanf ("%s", cidade_2);
printf (" a cidade_2 informada e: %s\n", cidade_2);

printf ("Informe o codigo da cidade_1:/n ");
scanf ("%s", codigo_1);
printf ("o codigo da cidade_1 informado e: %s\n", codigo_1);
printf ("Informe o codigo da cidade_2:/n");
scanf ("%s", codigo_2);
printf ("o codigo da cidade_2 informado e: %s\n", codigo_2);


// Declaração e inicializacão do tipo inteiro

int  populacao1 = 4000000, populacao2 = 2300000;
int  ponto_turistico_1 = 80, ponto_turistico_2 = 60;

printf ("Informe a populacao1 :\n");
scanf ("%d", &populacao1 );
printf ("A populacao 1 informada e: %d\n", populacao1);

printf ("Informe a populacao 2 :\n");
scanf ("%d", &populacao2 );
printf ("A populacao 2 informada e: %d\n", populacao2);

printf ("Informe quantidade de ponto turistico 1:\n");
scanf ("%d", &ponto_turistico_1);
printf ("A quantidade de ponto turistico 1 informada e: %d\n", ponto_turistico_1);
printf ("Informe quantidade de ponto turistico 2:\n");
scanf ("%d", &ponto_turistico_2);
printf ("A quantidade de ponto turistico 2 informada e: %d\n", ponto_turistico_2);

// Declaração e inicialização de variaveis tipo float 

float   Area_1 = 45000.00,  Area_2 = 21200.00;

float  PIB_1 = 5.0,    PIB_2 = 1.8;

float  Densidade_populacional_1 =1.2, Densidade_populacional_2 = 1.1;

printf  ("Informe a Area_1 :\n");
scanf ("%f", &Area_1);
printf ("Exibindo valor real de Area_1 : %f\n", Area_1);

printf ("Informe a Area_2:\n");
scanf ("%f", &Area_2);
printf ("Exibindo valor real de Area_2 : %f\n", Area_2);

printf ("Informe o PIB 1:\n");  
scanf ("%f", &PIB_1);
printf ("Exibindo valor real do PIB_1 : %f\n", PIB_1);

printf ("Informe o PIB 2:\n");
scanf ("%f", &PIB_2);
printf ("Exibindo valor real do PIB 2 :%f\n", PIB_2);

printf ("Informe a Densidade_populacional_1:\n");
scanf ("%f", &Densidade_populacional_1);
printf ("Exibindo valor real da densidade populacional 1 : %f\n", Densidade_populacional_1);

printf ("Informe a densidade populacional 2:\n");
scanf ("%f", &Densidade_populacional_2); 
printf ("Exibindo valor real da densidade populacional 2 : %f\n", Densidade_populacional_2);







 return 0;
}







