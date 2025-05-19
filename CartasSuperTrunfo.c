#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");

    char estado1[50];
    char id_card1[50];
    char nome_cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int n_pturistico1;
    float densidadePopulacional1 = (float) populacao1 / area1 ;
    float pibPercapita1 = (pib1 * 1e9) / populacao1 ;
    float power1 = (float)populacao1 + area1 + pib1 + pibPercapita1 + (1 /densidadePopulacional1) + n_pturistico1;
    

    char estado2[50];
    char id_card2[50];
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int n_pturistico2= 0;
    float densidadePopulacional2 = 0;
    float pibPercapita2= 0 ;
    float power2= 0 ;

    


    //Carta 01

printf("Vamos cadastrar algumas cartas do nosso jogo do super trunfo, então irei pedir para você alguns dados. \n");

printf("Vamos lá!!\n");

printf("Digite o nome do estado da primeira carta: \n");

scanf("%s",&estado1);

printf("\n");
printf("\n");

printf("Agora criaremos o código da carta para isso vou te passar algumas informações ok . \n");
printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03))\n");
printf("Dadas as informações agora digite o código da carta : ");

scanf("%s",&id_card1);

printf("\n");
printf("vamos para o proximo dado . \n");
printf("\n");


printf("Digite o nome da Cidade : \n");
scanf("%s",&nome_cidade1);

printf("\n");
printf("vamos para o proximo dado . \n");
printf("\n");


printf("Agora Digite o número de habitantes : \n");
scanf("%d",&populacao1);

printf("\n");
printf("vamos para o proximo dado . \n");
printf("\n");

printf("Agora digite a Área em quilometros quadrados :%.2f km²\n",area1);
scanf("%f",&area1);

printf("\n");
printf("vamos para o proximo dado, Já estamos quase acabando. . \n");
printf("\n");

printf("Agora Digite o PIB : %.2f \n",pib1);
scanf("%f",&pib1);

printf("\n");
printf("vamos para o ultimo  dado da primeira carta . \n");
printf("\n");

printf("Digite o número de pontos Turisticos :%d \n",n_pturistico1);
scanf("%d",&n_pturistico1);

printf("\n");
printf("Finalizamos a Carta 1 . \n");
printf("\n");
printf("\n");
printf("\n");

densidadePopulacional1 = (float) populacao1 / area1;
pibPercapita1 = (pib1 * 1e9) / populacao1;
power1 = (float)populacao1 + area1 + pib1 + pibPercapita1 + (1 / densidadePopulacional1) + n_pturistico1;


printf("\n");
printf("\n");


//Carta 02

printf("Vamos  cadastrar mais uma carta do nosso jogo do super trunfo, entÃ£o irei pedir para você mais alguns dados. \n");

printf("Vamos lá!!\n");

printf("Digite o nome do estado da segunda carta: \n");
scanf("%s", estado2);

printf("\n");
printf("\n");

printf("Agora criaremos o código da carta para isso vou te passar algumas informações ok . \n");
printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03))\n");

printf("Digite o código da carta: \n");
scanf("%s", id_card2);

printf("\n");
printf("vamos para o proximo dado . \n");
printf("\n");


printf("Digite o nome da cidade: \n");
scanf("%s", nome_cidade2); 

printf("\n");
printf("vamos para o proximo dado . \n");
printf("\n");


printf("Digite o número de habitantes: \n");
scanf("%d", &populacao2);

printf("\n");
printf("vamos para o proximo dado . \n");
printf("\n");

printf("Digite a Área em km²: \n");
scanf("%f", &area2);

printf("\n");
printf("vamos para o proximo dado, já! estamos quase acabando. . \n");
printf("\n");

printf("Digite o PIB: \n");
scanf("%f", &pib2);

printf("\n");
printf("vamos para o ultimo  dado da segunda carta . \n");
printf("\n");

printf("Digite o número de pontos turistico: \n");
scanf("%d", &n_pturistico2);

printf("\n");
printf("Finalizamos a Carta 2 . \n");
printf("\n");
printf("\n");
printf("\n");
densidadePopulacional2 = (float) populacao2 / area2;
pibPercapita2 = (pib2 * 1e9) / populacao2;
power2 = (float)populacao2 + area2 + pib2 + pibPercapita2 + (1 / densidadePopulacional2) + n_pturistico2;



printf("-------------------------Dados da carta 1 : ----------------------------------\n");
printf("\n");
printf("Estado : %s \n",estado1);

printf("\n");
printf("Código da carta : %s \n",id_card1);

printf("\n");
printf("Nome da cidade : %s \n",nome_cidade1);

printf("\n");
printf("População : %d \n",populacao1);

printf("\n");
printf("Área (em km²) : %.2f \n",area1);

printf("\n");
printf("PIB : %.2f bilhões de reais  \n",pib1);

printf("\n");
printf("Números de pontos Turisticos : %d\n",n_pturistico1);
printf("\n");


printf("Densidade populacional : %.2f hab/km²\n",((float)populacao1/area1));
printf("\n");

printf("PIB per capita : %.2f reais\n",((pib1 * 1e9) / populacao1));

printf("\n");

printf("Super poder : %.2f POWER \n",((float)populacao1 + area1 + pib1 + pibPercapita1 + (1 /densidadePopulacional1) + n_pturistico1));

printf("\n");
printf("______________________________________________________________________________ \n");

printf("\n");
printf("\n");

printf("-------------------------Dados da carta 2 : ----------------------------------\n");
printf("\n");
printf("Estado : %s \n",estado2);

printf("\n");
printf("Código da carta : %s \n",id_card2);

printf("\n");
printf("Nome da cidade : %s \n",nome_cidade2);

printf("\n");
printf("população : %d \n",populacao2);

printf("\n");
printf("Área (em km²) : %.2f \n",area2);

printf("\n");
printf("PIB : %.2f Bilhões de reais \n",pib2);

printf("\n");
printf("Número de pontos Turisticos : %d\n",n_pturistico2);
printf("\n");

printf("Densidade populacional : %.2f hab/km²\n",((float)populacao2/area2));
printf("\n");

printf("PIB per capita : %.2f reais\n",((pib2 * 1e9) / populacao2));
printf("\n");

printf("Super poder : %.2f POWER \n",((float)populacao2 + area2 + pib2 + pibPercapita2 + (1 /densidadePopulacional2) + n_pturistico2));



printf("\n");
printf("______________________________________________________________________________ \n");

printf("\n");




printf("\n");

printf("==========================================================================================");
printf("\n");

printf("------------------------------COMPARAÇÃO ENTRE AS CARTAS---------------------------");
printf("\n");
printf("O NÚMERO (1) REPRESENTA A CARTA 1 E O NÚMERO (0) REPRESENTA A CARTA 2 o Número que mais se repetir é o vencedor \n");
printf("\n");

printf("População : %d \n",(populacao1 > populacao2));
printf("Área : %d\n",(area1 > area2));
printf("PIB : %d\n",(pib1 > pib2));
printf("Pontos turísticos : %d\n",(n_pturistico1 > n_pturistico2));
printf("Densidade populacional : %d\n",(densidadePopulacional1 < densidadePopulacional2));
printf("PIB Per Capita : %d\n",pibPercapita1 > pibPercapita2);
printf("Super poder : %d \n",(power1 > power2));


printf("\n");
printf("==========================================================================================");
printf("\n");

printf("\n");




}