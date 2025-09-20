#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// Desafio Super Trunfo - Países
int main ()
{
printf ("Vamos jogar super trunfo!\n");

// Declaração das variaveis

char "nome_Cidade1"[20], "nome_Cidade2"[20];
char "codigo1"[8], "codigo2"[8];
char "nome_Estado1"[20], "nome_Estado2"[20];
int populacao1 = 45300.000,  populacao2 = 25200.000;
int ponto_turistico1 = 80, ponto_turistico2 = 60;
int Area1 = 45.4000000, Area2 = 25.2000000;
float PIB1 = 5000.000, PIB2 = 3000.000;
float Densidade_populacional1= 83.000000, Densidade_populacional2 = 95.000000;

// Entrada de dados

printf ("Digite o codigo da cidade1:/n"); 
scanf ("%s", codigo1);
printf("o codigo da cidade1 e: %s\n", codigo1);


printf ("Digite o codigo da cidade2:/n"); 
scanf ("%s", codigo2);
printf("o codigo da cidade2 e: %s\n", codigo2);

printf ("Digite o nome da Cidade1:/n");
scanf ("%s", nome_Cidade1);
printf("o nome da Cidade1 e: %s\n", nome_Cidade1);
printf ("Digite o nome da Cidade2:/n");
scanf ("%s", nome_Cidade2);
printf("o nome da Cidade2 e: %s\n", nome_Cidade2);

printf ("Digite o nome do Estado1:/n");
scanf ("%s", nome_Estado1);
printf("o nome do Estado1 e: %s\n", nome_Estado1);

printf ("Digite o nome do Estado2:/n");
scanf ("%s", nome_Estado2);
printf("o nome do Estado2 e: %s\n", nome_Estado2);


printf (" Digite a populacao da Cidade1:/n");
scanf ("%d", &populacao1);
printf("a populacao da Cidade1 e: %d\n", populacao1);
printf (" Digite a populacao da Cidade2:/n");
scanf ("%d", &populacao2);
printf("a populacao da Cidade2 e: %d\n", populacao2);

printf (" Digite o ponto turistico da Cidade1:/n");
scanf ("%d", &ponto_turistico1);
printf("o ponto turistico da Cidade1 e: %d\n", ponto_turistico1);
printf (" Digite o ponto turistico da Cidade2:/n");
scanf ("%d", &ponto_turistico2);
printf("o ponto turistico da Cidade2 e: %d\n", ponto_turistico2);

printf (" Digite a Area da Cidade1:/n");
scanf ("%d", &Area1);
printf("A Area da Cidade1 e: %d\n", Area1);
printf (" Digite a Area da Cidade2:/n");
scanf ("%d", &Area2);
printf("A Area da Cidade2 e: %d\n", Area2);

printf (" Digite o PIB da Cidade1:/n");
scanf ("%f", &PIB1);
printf("o PIB da Cidade1 e: %f\n", PIB1);
printf (" Digite o PIB da Cidade2:/n");
scanf ("%f", &PIB2);
printf("o PIB da Cidade2 e: %f\n", PIB2);

printf (" Digite a Densidade populacional da Cidade1:/n");
scanf ("%f", &Densidade_populacional1);
printf("a Densidade populacional da Cidade1 e: %f\n", Densidade_populacional1);
printf (" Digite a Densidade populacional da Cidade2:/n");
scanf ("%f", &Densidade_populacional2);
printf("a Densidade populacional da Cidade2 e: %f\n", Densidade_populacional2);




system("pause");// Pausa o sistema para vizualizar os dados, necessario para o windows

//final do programa




    return 0;
}
    









