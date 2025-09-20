#include<stdio.h>
// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Declaracao das estruturas para armazenar as propriedades das cidades


// Função para comparar duas cidades com base em um atributo específico
int comparar_cidades(Cidade c1, Cidade c2, int atributo) {
scanf("%d", &populacao);
printf("Digite a área da cidade: ");
scanf("%f", &area);
printf("Digite o PIB da cidade: ");
scanf("%f", &pib);

} Pais;

// Função para comparar duas cidades com base em um atributo específico
int comparar_cidades(Cidade c1, Cidade c2, int atributo) {
    switch (atributo) {
        case 1: // Comparar pela população
            if (c1.populacao > c2.populacao) return 1;
            if (c1.populacao < c2.populacao) return -1;
            return 0;
        case 2: // Comparar pela área
            if (c1.area > c2.area) return 1;
            if (c1.area < c2.area) return -1;
            return 0;
        case 3: // Comparar pelo PIB
            if (c1.pib > c2.pib) return 1;
            if (c1.pib < c2.pib) return -1;
            return 0;
        default:
            return 0;
    }
}