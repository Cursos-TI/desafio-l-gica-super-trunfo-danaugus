//Desafio Super Trunfo - Países - Aventureiro
//Tema 2 Comparação das Cartas - Switch
#include <stdio.h>
#include <string.h>

int main() {
    //criando variáveis
    char estado1 = 'A', estado2 = 'B';
    char codigo1 [4] = "A01", codigo2 [4] = "B02";    
    char cidade1 [30] = "São Paulo", cidade2 [30] = "Rio de Janeiro";
    int populacao1 = 12325000, populacao2 = 6748000;
    float area1 = 1521.11, area2 = 1200.25;
    float pib1 = 699.28, pib2 = 300.5;
    int turpt1 = 50, turpt2 = 30;
   
    //adicionado nível aventureiro
    float denpop1 = 1, denpop2 = 1;
    float pibcapita1 = 1, pibcapita2 = 1;

    //adicionado nível mestre
    float super1 = 1, super2 = 1;
    
    /*
    //Criando a Carta1
    printf("*****Insira os dados da Carta 1*****\n");
    printf("Digite uma letra de A a H, representando o Estado 1: \n");
    scanf(" %c", &estado1);
    printf("Digite o código da Carta 1, no formato [Z99]: \n");
    scanf("%s", codigo1);
    printf("Digite o nome da Cidade da Carta 1: \n");
    getchar();
    fgets(cidade1, 30 , stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';
    printf("Digite a população da cidade da Carta: \n");
    scanf("%d", &populacao1);
    printf("Digite a área da Carta em Km²: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da Carta 1, em bilhões de reais: \n");
    scanf("%f", &pib1);
    printf("Digite quantos pontos turísticos a Carta 1 possui: \n");
    scanf("%d", &turpt1);
   */

    //adicionado nível aventureiro
    denpop1 = (float) populacao1 / area1;
    pibcapita1 = (float) (pib1 * 1000000000.0f) / (float) populacao1;
    
    //adicionado nivel mestre
    super1 = (float) populacao1 + area1 + pib1 + (float) turpt1 + (1.0f/denpop1) + pibcapita1;

    /*
    //Criando a Carta2
    printf("\n*****Insira agora os dados da Carta 2*****\n");
    printf("Digite uma letra de A a H, representando o Estado 2: \n");
    scanf(" %c", &estado2);
    printf("Digite o código da Carta 2, no formato [Z99]: \n");
    scanf("%s", codigo2);
    printf("Digite o nome da Cidade da Carta 2: \n");
    getchar();
    fgets(cidade2, 30 , stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';
    printf("Digite a população da cidade da Carta: \n");
    scanf("%d", &populacao2);
    printf("Digite a área da Carta em Km²: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da Carta 2, em bilhões de reais: \n");
    scanf("%f", &pib2);
    printf("Digite quantos pontos turísticos a Carta 2 possui: \n");
    scanf("%d", &turpt2); 
    */   

    
    //adicionado nível aventureiro
    denpop2 = (float) populacao2 / area2;
    pibcapita2 = (float) (pib2 * 1000000000.0f) / (float) populacao2;

    //adicionado nivel mestre
    super2 = (float) populacao2 + area2 + pib2 + (float) turpt2 + (1.0f/denpop2) + pibcapita2;
    

    /*
    //nível mestre comparações
    int comparapop = populacao1 > populacao2;
    int comparea = area1 > area2;
    int comppib = pib1 > pib2;
    int compturpt = turpt1 > turpt2;
    int compdenpop = denpop2 < denpop1;
    int comppibcapt = pibcapita1 > pibcapita2;
    int compsuper = super1 > super2;
    */


    //Exibir Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turpt1);
   
    //adicionado nível aventureiro
    printf("Densidade Populacional: %.2f hab/km²\n", denpop1);
    printf("PIB per Capita: %.2f reais\n", pibcapita1);
    
    //adicionado nível mestre
    printf("Super: %.2f\n", super1);

    //Exibir Carta 2 
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turpt2);
    
    //adicionado nível aventureiro
    printf("Densidade Populacional: %.2f hab/km²\n", denpop2);
    printf("PIB per Capita: %.2f reais\n", pibcapita2);

    //adicionado nível mestre
    printf("Super: %.2f\n", super2);

    /*
    //adicionado nível mestre comparações
    printf(" *** Comparação das cartas *** \n");
    printf("População: Carta 1 venceu: %d\n", comparapop);
    printf("Área: Carta 1 venceu: (%d)\n", comparea);
    printf("PIB: Carta 1 venceu: (%d)\n", comppib);
    printf("Pontos Turísticos: Carta 1 venceu: (%d)\n", compturpt);
    printf("Densidade Populacional: Carta 2 venceu (%d) \n", compdenpop);
    printf("PIB per capita: Carta 1 venceu: (%d)\n", comppibcapt);
    printf("Super Poder: Carta 1 venceu: (%d)\n", compsuper);
    */

    //Lógica - Comparações desafio aventureiro
    //criando a variável opçao
    int opcao;
    printf("##### HORA DE JOGAR #####\n");
    printf("Escolha um atributo para a comparação:\n");
    printf("1 - NOME DA CARTA\n");
    printf("2 - POPULAÇÃO\n");
    printf("3 - ÁREA\n");
    printf("4 - PIB\n");
    printf("5 - NÚMERO DE PONTOS TURÍSTICOS\n");
    printf("6 - DENSIDADE DEMOGRÁFICA\n");
    printf("7 - PIB per capita\n");
    printf("8 - Super\n");
    printf("Digite um número de 1 a 8, de acordo com a lista acima: \n");
    scanf("%d", &opcao);

    //Criando o Menu
    switch (opcao)
    {
    case 1:
        printf("As cartas são: \n%s - %s\n%s - %s", codigo1, cidade1, codigo2, cidade2);
        break;
    case 2:
        printf("\nComparação de cartas (Atributo: População):\n");
        printf("Carta 1 - %s: %d\n",cidade1, populacao1);
        printf("Carta 2 - %s: %d\n",cidade2, populacao2);
        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 - %s venceu!\n", cidade1);
        } else {
            printf("Resultado: Carta 2 - %s venceu!\n", cidade2);
        }
        break;
    case 3:
        printf("\nComparação de cartas (Atributo: Área):\n");
        printf("Carta 1 - %s: %.2f\n",cidade1, area1);
        printf("Carta 2 - %s: %.2f\n",cidade2, area2);
        if (area1 > area2) {
            printf("Resultado: Carta 1 - %s venceu!\n", cidade1);
        } else {
            printf("Resultado: Carta 2 - %s venceu!\n", cidade2);
        }
        break;
    case 4:
        printf("\nComparação de cartas (Atributo: PIB):\n");
        printf("Carta 1 - %s: %.2f\n",cidade1, pib1);
        printf("Carta 2 - %s: %.2f\n",cidade2, pib2);
        if (pib1 > pib2) {
            printf("Resultado: Carta 1 - %s venceu!\n", cidade1);
        } else {
            printf("Resultado: Carta 2 - %s venceu!\n", cidade2);
        }
        break;
    case 5:
        printf("\nComparação de cartas (Atributo: Pontos Turísticos):\n");
        printf("Carta 1 - %s: %d\n",cidade1, turpt1);
        printf("Carta 2 - %s: %d\n",cidade2, turpt2);
            if (turpt1 > turpt2) {
            printf("Resultado: Carta 1 - %s venceu!\n", cidade1);
        } else {
            printf("Resultado: Carta 2 - %s venceu!\n", cidade2);
        }
        break;
    case 6:
        printf("\nComparação de cartas (Atributo: Densidade Demográfica):\n");
        printf("Carta 1 - %s: %.2f\n",cidade1, denpop1);
        printf("Carta 2 - %s: %.2f\n",cidade2, denpop2);
        if (denpop1 < denpop2) {
            printf("Resultado: Carta 1 - %s venceu!\n", cidade1);
        } else {
            printf("Resultado: Carta 2 - %s venceu!\n", cidade2);
        }
        break;
    case 7:
        printf("\nComparação de cartas (Atributo: PIB per capita):\n");
        printf("Carta 1 - %s: %.2f\n",cidade1, pibcapita1);
        printf("Carta 2 - %s: %.2f\n",cidade2, pibcapita2);
        if (pibcapita1 > pibcapita2) {
            printf("Resultado: Carta 1 - %s venceu!\n", cidade1);
        } else {
            printf("Resultado: Carta 2 - %s venceu!\n", cidade2);
        }
        break;
    case 8:
        printf("\nComparação de cartas (Atributo: Super):\n");
        printf("Carta 1 - %s: %.2f\n",cidade1, super1);
        printf("Carta 2 - %s: %.2f\n",cidade2, super2);
        if (super1 > super2) {
            printf("Resultado: Carta 1 - %s venceu!\n", cidade1);
        } else {
            printf("Resultado: Carta 2 - %s venceu!\n", cidade2);
        }
        break;

    default:
        printf("OPÇÃO INVÁLIDA!!!\n");
        break;
    }

    


    
    
    
    
    
    
    
    
    
    
    
    
     


    return 0;


}