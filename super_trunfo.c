#include <stdio.h>

int main(){

    char cidade[50], estado[50], codigo[50], estado2[50], cidade2[50], codigo2[50]; 
    int turistico, turistico2;
    signed long int populacao,  populacao2;
    float area, pib, area2, pib2;

    printf(" Agora quero que você me fale os dados da primeira carta\n ");
    
    printf("Por favor insira o estado da carta:\n");
    scanf(" %[^\n]", estado);

    printf("Por favor insira o código da carta:\n");
    scanf(" %[^\n]", codigo);

    printf("Por favor insira o nome da cidade:\n");
    scanf(" %[^\n]", cidade);

    printf("Por favor insira a quantidade da população:\n");
    scanf(" %ld", &populacao);

    printf("Por favor insira a área da carta:\n");
    scanf(" %f", &area);

    printf("Por favor insira o PIB:\n");
    scanf(" %f", &pib);

    printf("Por ultimo insira a quantidade de pontos turisticos:\n\n");
    scanf(" %i", &turistico);

    float pib_per_capita = pib / populacao;
    float densidade_populacional = populacao / area ;


    printf(" Agora quero que você me fale os dados da segunda carta\n ");

    printf("Por favor insira o estado da carta:\n");
    scanf(" %[^\n]", estado2);

    printf("Por favor insira o código da carta:\n");
    scanf(" %[^\n]", codigo2);

    printf("Por favor insira o nome da cidade:\n");
    scanf(" %[^\n]", cidade2);

    printf("Por favor insira a quantidade da população:\n");
    scanf(" %ld", &populacao2);

    printf("Por favor insira a área da carta:\n");
    scanf(" %f", &area2);

    printf("Por favor insira o PIB:\n");
    scanf(" %f", &pib2);

    printf("Por ultimo insira a quantidade de pontos turisticos: \n\n");
    scanf(" %i", &turistico2);

    float pib_per_capita2 = pib2/ populacao2;
    float densidade_populacional2 = populacao2/ area2 ;
    

    printf("Carta 1\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d pessoas\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f Bilhões de reais\n", pib);
    printf("Pontos Turísticos: %d\n", turistico);
    printf("Densidade Populacional: %f \n", densidade_populacional);
    printf("PIB per Capita: %f \n", pib_per_capita);
    printf("Super poder é de:%f \n\n", populacao + area + pib + turistico + pib_per_capita + (1/densidade_populacional));

    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d pessoas\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f Bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", turistico2);
    printf("Densidade Populacional: %f \n", densidade_populacional2);
    printf("PIB per Capita: %f \n", pib_per_capita2);
    printf("Super poder é de:%f \n", populacao2 + area2 + pib2 + turistico2 + pib_per_capita2 + (1/densidade_populacional2));

    printf("A carta 1 vence a carta 2 em População? %d \n", populacao > populacao2);
    printf("A carta 1 vence a carta 2 em Area? %d \n", area>area2);
    printf("A carta 1 vence a carta 2 em Pib? %d \n", pib>pib2);
    printf("A carta 1 vence a carta 2 em Pontos Turisticos? %d \n", turistico>turistico2);
    printf("A carta 1 vence a carta 2 em Densidade Populacional? %d \n", densidade_populacional<densidade_populacional2);
    printf("A carta 1 vence a carta 2 em PIB per Capita? %d \n", pib_per_capita > pib_per_capita2 );
    printf("A carta 1 vence a carta 2 em Super Poder? %d \n", (populacao + area + pib + turistico + pib_per_capita + (1/densidade_populacional) > populacao2 + area2 + pib2 + turistico2 + pib_per_capita2 + (1/densidade_populacional2)));
        return 0;
}
