//Desafio Super Trunfo - Países - Mestre
//Tema 3 Comparação das Cartas
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
    float denpop1 = 1, denpop2 = 1;
    float pibcapita1 = 1, pibcapita2 = 1;
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
    denpop1 = (float) populacao1 / area1;
    pibcapita1 = (float) (pib1 * 1000000000.0f) / (float) populacao1;
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
    denpop2 = (float) populacao2 / area2;
    pibcapita2 = (float) (pib2 * 1000000000.0f) / (float) populacao2;
    super2 = (float) populacao2 + area2 + pib2 + (float) turpt2 + (1.0f/denpop2) + pibcapita2;
    
    //Exibir Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turpt1);
    printf("Densidade Populacional: %.2f hab/km²\n", denpop1);
    printf("PIB per Capita: %.2f reais\n", pibcapita1);
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
    printf("Densidade Populacional: %.2f hab/km²\n", denpop2);
    printf("PIB per Capita: %.2f reais\n", pibcapita2);
    printf("Super: %.2f\n", super2);

    //Lógica - Comparações desafio aventureiro
    //criando a variável opçao
    int opcao1 = 88, opcao2 = 77;
    printf("\n##### HORA DE JOGAR #####\n");
    printf("Escolha o primeiro atributo para a comparação:\n");
    printf("1 - POPULAÇÃO\n");
    printf("2 - ÁREA\n");
    printf("3 - PIB\n");
    printf("4 - NÚMERO DE PONTOS TURÍSTICOS\n");
    printf("5 - DENSIDADE DEMOGRÁFICA\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super\n");
    printf("Digite um número de 1 a 7, de acordo com a lista acima: \n");
    scanf("%d", &opcao1);

    //Criando o Menu
    int resultado1 = 99, resultado2 = 98;

    //Primeiro atributo
    switch (opcao1)
    {
    case 1:
        printf("\nComparação de cartas (Atributo: População):\n");
        printf("Carta 1 - %s: %d\n",cidade1, populacao1);
        printf("Carta 2 - %s: %d\n",cidade2, populacao2);
        resultado1 = populacao1 > populacao2 ? 1 : 0;        
        break;
    case 2:
        printf("\nComparação de cartas (Atributo: Área):\n");
        printf("Carta 1 - %s: %.2f\n",cidade1, area1);
        printf("Carta 2 - %s: %.2f\n",cidade2, area2);
        resultado1 = area1 > area2 ? 1 : 0;
        break;        
    case 3:
        printf("\nComparação de cartas (Atributo: PIB):\n");
        printf("Carta 1 - %s: %.2f\n",cidade1, pib1);
        printf("Carta 2 - %s: %.2f\n",cidade2, pib2);
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;
    case 4:
        printf("\nComparação de cartas (Atributo: Pontos Turísticos):\n");
        printf("Carta 1 - %s: %d\n",cidade1, turpt1);
        printf("Carta 2 - %s: %d\n",cidade2, turpt2);
        resultado1 = turpt1 > turpt2 ? 1 : 0;
        break;
    case 5:
        printf("\nComparação de cartas (Atributo: Densidade Demográfica):\n");
        printf("Carta 1 - %s: %.2f\n",cidade1, denpop1);
        printf("Carta 2 - %s: %.2f\n",cidade2, denpop2);
        resultado1 = denpop1 < denpop2 ? 1 : 0;
        break;
    case 6:
        printf("\nComparação de cartas (Atributo: PIB per capita):\n");
        printf("Carta 1 - %s: %.2f\n",cidade1, pibcapita1);
        printf("Carta 2 - %s: %.2f\n",cidade2, pibcapita2);
        resultado1 = pibcapita1 > pibcapita2 ? 1 : 0;
        break;
    case 7:
        printf("\nComparação de cartas (Atributo: Super):\n");
        printf("Carta 1 - %s: %.2f\n",cidade1, super1);
        printf("Carta 2 - %s: %.2f\n",cidade2, super2);
        resultado1 = super1 > super2 ? 1 : 0;
        break;
    default:
        printf("Opção inválida, jogo cancelado!!!\n");
        return -1;
        break;
    }
    printf("\nEscolha o segundo atributo para a comparação:\n");
    printf("1 - POPULAÇÃO\n");
    printf("2 - ÁREA\n");
    printf("3 - PIB\n");
    printf("4 - NÚMERO DE PONTOS TURÍSTICOS\n");
    printf("5 - DENSIDADE DEMOGRÁFICA\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super\n");
    printf("Digite um número de 1 a 7, de acordo com a lista acima, diferente do primeiro: \n");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2)
    {
        printf("\nMESMA OPÇÃO! JOGO ENCERRADO!\n");
        return -1;
    } 
    
    switch (opcao2)
    {
    case 1:
        printf("\nComparação de cartas (Atributo: População):\n");
        printf("Carta 1 - %s: %d\n",cidade1, populacao1);
        printf("Carta 2 - %s: %d\n",cidade2, populacao2);
        resultado2 = populacao1 > populacao2 ? 1 : 0;        
        break;
    case 2:
        printf("\nComparação de cartas (Atributo: Área):\n");
        printf("Carta 1 - %s: %.2f\n",cidade1, area1);
        printf("Carta 2 - %s: %.2f\n",cidade2, area2);
        resultado2 = area1 > area2 ? 1 : 0;
        break;        
    case 3:
        printf("\nComparação de cartas (Atributo: PIB):\n");
        printf("Carta 1 - %s: %.2f\n",cidade1, pib1);
        printf("Carta 2 - %s: %.2f\n",cidade2, pib2);
        resultado2 = pib1 > pib2 ? 1 : 0;
        break;
    case 4:
        printf("\nComparação de cartas (Atributo: Pontos Turísticos):\n");
        printf("Carta 1 - %s: %d\n",cidade1, turpt1);
        printf("Carta 2 - %s: %d\n",cidade2, turpt2);
        resultado2 = turpt1 > turpt2 ? 1 : 0;
        break;
    case 5:
        printf("\nComparação de cartas (Atributo: Densidade Demográfica):\n");
        printf("Carta 1 - %s: %.2f\n",cidade1, denpop1);
        printf("Carta 2 - %s: %.2f\n",cidade2, denpop2);
        resultado2 = denpop1 < denpop2 ? 1 : 0;
        break;
    case 6:
        printf("\nComparação de cartas (Atributo: PIB per capita):\n");
        printf("Carta 1 - %s: %.2f\n",cidade1, pibcapita1);
        printf("Carta 2 - %s: %.2f\n",cidade2, pibcapita2);
        resultado2 = pibcapita1 > pibcapita2 ? 1 : 0;
        break;
    case 7:
        printf("\nComparação de cartas (Atributo: Super):\n");
        printf("Carta 1 - %s: %.2f\n",cidade1, super1);
        printf("Carta 2 - %s: %.2f\n",cidade2, super2);
        resultado2 = super1 > super2 ? 1 : 0;
        break;
    default:
        printf("Opção inválida, jogo cancelado!!!\n");
        return -1;
        break;
    }
    printf("\nPrimeiro atributo: ");
    if (resultado1 == 1)
    {
        printf("Carta 1 - %s ganha\n", cidade1);
    } else if (resultado1 == 0)
    {
        printf("Carta 2 - %s ganha\n", cidade2);
    }else{
        printf("Opção inválida, jogo cancelado");
        return -1;
    }
    printf("\nSegundo atributo: ");
    if (resultado2 == 1)
    {
        printf("Carta 1 - %s ganha\n", cidade1);
    } else if (resultado2 == 0)
    {
        printf("Carta 2 - %s ganha\n", cidade2);
    }else{
        printf("Opção inválida, jogo cancelado");
        return -1;
    }
    printf("\n##### RESULTADO FINAL ##### ");
    if (resultado1 == 1 && resultado2 == 1)
    {
        printf("\nGANHADOR JO JOGO: Carta 1 - %s !\n", cidade1);
    } else if (resultado1 == 0 && resultado2 == 0)
    {
        printf("\nGANHADOR DO JOGO: Carta 2 - %s !\n", cidade2);
    } else
    {
        printf("\nEMPATE!!!\n");
    }     
    
    return 0;
}