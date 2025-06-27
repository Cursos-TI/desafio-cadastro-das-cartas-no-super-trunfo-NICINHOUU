#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char  estado[50];
    char  codigo[40];
    float populacao;
    float  areadekm;
    float  pib;
    float  pturisticos;
//===========================
    int  estado2[60];
    char  codigo2[24];
    float populacao2;
    float  areadekm2;
    float  pib2;
    float  pturisticos2;
    float densidadepopulacional;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
 printf("==== BEM VINDO AO JOGO DE SUPER TRUNGO====\n \n");
    
    printf("-- Comece preenchendo informacao da primeira carta \n");
       printf ("Digite o nome do estado: ");
        scanf("%s", &estado );    

        printf ("Digite numero da populacao: ");
        scanf("%f", &populacao );

        printf ("Digite seu codigo: ");
        scanf("%s", &codigo ); 
    
        printf ("Digite o tamando da area de km: ");
        scanf("%f", &areadekm ); 

        printf ("Digite o numero do PIB: ");
        scanf("%f", &pib ); 

        printf ("Digite o ponto turistico: ");
        scanf("%f", &pturisticos ); 

// SEGUNDA CARTA ABAIXO // 
printf("===== PREENCHA A INFORMACAO DA SEGUNDA CARTA ===== \n");
       printf ("Digite o nome do estado: ");
            scanf("%s", &estado2 );    
    
        printf ("Digite seu codigo: ");
            scanf("%s", &codigo2 ); 

        printf ("Digite numero da populacao: ");
            scanf("%f", &populacao2 );
    
        printf ("Digite o tamando da area de km: ");
             scanf("%f", &areadekm2 ); 

        printf ("Digite o numero do PIB: ");
            scanf("%f", &pib2 ); 

        printf ("Digite o ponto turistico: ");
            scanf("%f", &pturisticos2 ); 
        
    printf("============================================================ \n");
    printf("===============RESULTADO DA PRIMEIRA CARTA==================\n");

         printf("o estado : %s \n", estado);
         printf("Populacao : %f \n", populacao);
         printf("Codigo é: %s \n", codigo);
         printf("area de Km: %f \n", areadekm);
         printf("PIB: %f \n", pib);
         printf("Pontos turisticos: %f \n", pturisticos);

    printf("============================================================ \n");
    printf("===============RESULTADO DA SEGUNDA CARTA==================\n");
        
          printf("o estado : %s \n", estado2);
          printf("Populacao : %f \n", populacao2);
          printf("Codigo é: %s \n", codigo2);
          printf("area de Km: %f \n", areadekm2);
          printf("PIB: %f \n", pib2);
          printf("Pontos turisticos: %f \n", pturisticos2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
