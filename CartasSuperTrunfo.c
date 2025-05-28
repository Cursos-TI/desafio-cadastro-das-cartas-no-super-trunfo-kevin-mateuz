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

printf("=======================================================================================\n");
printf("                                     CARTA 1                                            \n");
printf("=======================================================================================\n");

printf("digite o nome do estado: ");
scanf("%s",&estado1);

printf("\n");


printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03))\n");
printf("código da carta : ");

scanf("%s",&id_card1);
printf("\n");

printf("Digite o nome da Cidade : \n");
scanf("%s",&nome_cidade1);

printf("\n");
printf("Agora Digite o número de habitantes : \n");
scanf("%d",&populacao1);

printf("\n");

printf("digite a área: km²\n");
scanf("%f",&area1);

printf("\n");
printf("Agora Digite o PIB : \n");
scanf("%f",&pib1);
printf("\n");

printf("pontos Turisticos : \n");
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
printf("=======================================================================================\n");
printf("                                     CARTA 2                                            \n");
printf("=======================================================================================\n");
printf("Digite o nome do estado:  \n");
scanf("%s", estado2);

printf("\n");

printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03))\n");
printf("\n");
printf("Digite o código da carta: \n");
scanf("%s", id_card2);

printf("\n");
printf("Digite o nome da cidade: \n");
scanf("%s", nome_cidade2); 

printf("\n");
printf("Digite o número de habitantes: \n");
scanf("%d", &populacao2);
printf("\n");

printf("digite a área: km²\n");
scanf("%f", &area2);

printf("\n");

printf("Digite o PIB: \n");
scanf("%f", &pib2);
printf("\n");

printf("pontos turistico: \n");
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


int primeiroAtributo,segundoAtributo;
float resultado1 = 0;
float resultado2= 0;


printf("------------------------------ESCOLHA O PRIMEIRO ATRIBUTO ATRIBUTO PARA COMPARAÇÃO---------------------------");
printf("\n");
printf("\n");
printf("\n");

printf("MENU DE COMPARAÇÃO DE ATRIBUTOS : \n");
printf("1 . COMPARAR-ATRIBUTO--> (POPULAÇÃO)\n");
printf("2 . COMPARAR-ATRIBUTO--> (ÁREA)\n");
printf("3 . COMPARAR-ATRIBUTO--> (PIB)\n");
printf("4 . COMPARAR-ATRIBUTO--> (PONTOS TURÍSTICOS)\n");
printf("5 . COMPARAR-ATRIBUTO--> (DENSIDADE POPULACIONAL)\n");
printf("6 . COMPARAR-ATRIBUTO--> (PIB PER CAPITA)\n");
printf("7 . COMPARAR-ATRIBUTO--> (SUPER PODER)\n");
printf("\n");

printf("ESCOLHA UMA OPÇÃO : ");
scanf("%d", &primeiroAtributo);

switch (primeiroAtributo)
{
case 1:
//população
   printf("Você escolheu o atributo POPULAÇÃO\n");
   resultado1 = populacao1 > populacao2 ? 1 : 0;

    break;
case 2:
    //ÁREA
    printf("Você escolheu o atributo ÁREA\n");
    resultado1 = area1 > area2 ? 1 : 0;

    break;

case 3:
    //PIB
    printf("Você escolheu o atributo PIB\n");
    resultado1 = pib1 > pib2 ? 1 : 0;
    break;

case 4 :
    //PONTOS TURISTICOS
    printf("Você escolheu o atributo PONTOS TURÍSTICOS\n");
    resultado1 = n_pturistico1 > n_pturistico2 ? 1 : 0;
    break;

case 5:
//DENSIDADE POPULACIONAL
    printf("Você escolheu o atributo DENSIDADE POPULACIONAL\n");
    resultado1 = densidadePopulacional1 < densidadePopulacional2 ? 1 : 0;
    break;

case 6:
    //PIB PER CAPITA
    printf("Você escolheu o atributo PIB PER CAPITA\n");
    resultado1 = pibPercapita1 > pibPercapita2 ? 1 : 0;
    break;

case 7:
    //SUPER PODER
    printf("Você escolheu o atributo SUPER PODER\n");
    resultado1 = power1 > power2 ? 1 : 0;
    break;
default:
    printf("Valor invalido");
    break;
}

printf("------------------------------ESCOLHA O SEGUNDO ATRUBUTO ATRIBUTOS PARA COMPARAÇÃO---------------------------");
printf("\n");

printf("\n");

printf("MENU DE COMPARAÇÃO DE ATRIBUTOS : \n");
printf("1 . COMPARAR-ATRIBUTO--> (POPULAÇÃO)\n");
printf("2 . COMPARAR-ATRIBUTO--> (ÁREA)\n");
printf("3 . COMPARAR-ATRIBUTO--> (PIB)\n");
printf("4 . COMPARAR-ATRIBUTO--> (PONTOS TURÍSTICOS)\n");
printf("5 . COMPARAR-ATRIBUTO--> (DENSIDADE POPULACIONAL)\n");
printf("6 . COMPARAR-ATRIBUTO--> (PIB PER CAPITA)\n");

printf("\n");

printf("ESCOLHA UMA OPÇÃO : ");
scanf("%d", &segundoAtributo);

if (primeiroAtributo == segundoAtributo)
{
    printf("VOCÊ DIGITOU O MESMO ATRIBUTO DE ANTES.\n");
    printf("A IDEIA É QUE SEJA UM ATRIBUTO DIFERENTE.\n");
}else
{
    switch (segundoAtributo)
{
case 1:
//população
   printf("Você escolheu o atributo POPULAÇÃO\n");
   resultado2 = populacao1 > populacao2 ? 1 : 0;

    break;
case 2:
    //ÁREA
    printf("Você escolheu o atributo ÁREA\n");
    resultado2 = area1 > area2 ? 1 : 0;

    break;

case 3:
    //PIB
    printf("Você escolheu o atributo PIB\n");
    resultado2 = pib1 > pib2 ? 1 : 0;
    break;

case 4 :
    //PONTOS TURISTICOS
    printf("Você escolheu o atributo PONTOS TURÍSTICOS\n");
    resultado2 = n_pturistico1 > n_pturistico2 ? 1 : 0;
    break;

case 5:
//DENSIDADE POPULACIONAL
    printf("Você escolheu o atributo DENSIDADE POPULACIONAL\n");
    resultado2 = densidadePopulacional1 < densidadePopulacional2 ? 1 : 0;
    break;

case 6:
    //PIB PER CAPITA
    printf("Você escolheu o atributo PIB PER CAPITA\n");
    resultado2 = pibPercapita1 > pibPercapita2 ? 1 : 0;
    break;

default:
    printf("Valor invalido");
    break;
}
}

if (resultado1 && resultado2)
{
    printf("CIDADE DE CADA CARTA\n");
    printf("%s ",nome_cidade1);
    printf(" X ");
    printf(" %s ",nome_cidade2);
    printf("\n");

    printf("ATRIBUTOS EM COMPARAÇÃO\n");
    if (primeiroAtributo == '1')
    {
        printf("POPULAÇÃO : %F ",populacao1);
    }else if(primeiroAtributo == '2')
    {
        printf("ÁREA : %F ",area1);
    }else if(primeiroAtributo == '3')
    {
        printf("PIB : %F ",pib1);

    }else if(primeiroAtributo == '4')
    {
        printf("PONTOS TURISTICOS : %F ",n_pturistico1);
    }
    else if(primeiroAtributo == '5')
    {
        printf("DENSIDADE POPULACIONAL : %F ",densidadePopulacional1);

    }else if(primeiroAtributo == '6')
    {
        printf("PIB PER CAPITA : %f ",pibPercapita1);
    }else
    {
        printf("inválido");
    }
    
    printf(" x ");

    if (primeiroAtributo == '1')
    {
        printf("POPULAÇÃO : %F ",populacao2);
    }else if(primeiroAtributo == '2')
    {
        printf("ÁREA : %F ",area2);
    }else if(primeiroAtributo == '3')
    {
        printf("PIB : %F ",pib2);

    }else if(primeiroAtributo == '4')
    {
        printf("PONTOS TURISTICOS : %F ",n_pturistico2);
    }
    else if(primeiroAtributo == '5')
    {
        printf("DENSIDADE POPULACIONAL : %F ",densidadePopulacional2);

    }else if(primeiroAtributo == '6')
    {
        printf("PIB PER CAPITA : %f ",pibPercapita2);
    }else
    {
        printf("inválido");
    }

    printf("POWER : %F \n",power1);
    printf("POWER : %F \n",power2);


    
    printf("=================================\n");
    printf("          CARTA 1 VENCEU         \n");
    printf("=================================\n");
}else if (resultado1 != resultado2)
{
        printf("CIDADE DE CADA CARTA\n");
    printf("%s ",nome_cidade1);
    printf(" X ");
    printf(" %s ",nome_cidade2);
    printf("\n");
    printf("\n");

    printf("ATRIBUTOS EM COMPARAÇÃO\n");
    if (primeiroAtributo == '1')
    {
        printf("POPULAÇÃO : %F ",populacao1);
    }else if(primeiroAtributo == '2')
    {
        printf("ÁREA : %F ",area1);
    }else if(primeiroAtributo == '3')
    {
        printf("PIB : %F ",pib1);

    }else if(primeiroAtributo == '4')
    {
        printf("PONTOS TURISTICOS : %F ",n_pturistico1);
    }
    else if(primeiroAtributo == '5')
    {
        printf("DENSIDADE POPULACIONAL : %F ",densidadePopulacional1);

    }else if(primeiroAtributo == '6')
    {
        printf("PIB PER CAPITA : %f ",pibPercapita1);
    }
    printf(" x ");

    if (primeiroAtributo == '1')
    {
        printf("POPULAÇÃO : %F ",populacao2);
    }else if(primeiroAtributo == '2')
    {
        printf("ÁREA : %F ",area2);
    }else if(primeiroAtributo == '3')
    {
        printf("PIB : %F ",pib2);

    }else if(primeiroAtributo == '4')
    {
        printf("PONTOS TURISTICOS : %F ",n_pturistico2);
    }
    else if(primeiroAtributo == '5')
    {
        printf("DENSIDADE POPULACIONAL : %F ",densidadePopulacional2);

    }else if(primeiroAtributo == '6')
    {
        printf("PIB PER CAPITA : %f ",pibPercapita2);
    }

    printf("\n");
    printf("\n");

    printf("POWER : %F \n",power1);
    printf("POWER : %F \n",power2);



    printf("=================================\n");
    printf("            EMPATE               \n");
    printf("=================================\n");

    printf("");
}
else
{
        printf("CIDADE DE CADA CARTA\n");
    printf("%s ",nome_cidade1);
    printf(" X ");
    printf(" %s ",nome_cidade2);
    printf("\n");

    printf("ATRIBUTOS EM COMPARAÇÃO\n");
    if (primeiroAtributo == '1')
    {
        printf("POPULAÇÃO : %F ",populacao1);
    }else if(primeiroAtributo == '2')
    {
        printf("ÁREA : %F ",area1);
    }else if(primeiroAtributo == '3')
    {
        printf("PIB : %F ",pib1);

    }else if(primeiroAtributo == '4')
    {
        printf("PONTOS TURISTICOS : %F ",n_pturistico1);
    }
    else if(primeiroAtributo == '5')
    {
        printf("DENSIDADE POPULACIONAL : %F ",densidadePopulacional1);

    }else if(primeiroAtributo == '6')
    {
        printf("PIB PER CAPITA : %f ",pibPercapita1);
    }else
    {
        printf("inválido");
    }
    
    printf(" x ");

    if (primeiroAtributo == '1')
    {
        printf("POPULAÇÃO : %F ",populacao2);
    }else if(primeiroAtributo == '2')
    {
        printf("ÁREA : %F ",area2);
    }else if(primeiroAtributo == '3')
    {
        printf("PIB : %F ",pib2);

    }else if(primeiroAtributo == '4')
    {
        printf("PONTOS TURISTICOS : %F ",n_pturistico2);
    }
    else if(primeiroAtributo == '5')
    {
        printf("DENSIDADE POPULACIONAL : %F ",densidadePopulacional2);

    }else if(primeiroAtributo == '6')
    {
        printf("PIB PER CAPITA : %f ",pibPercapita2);
    }else
    {
        printf("inválido");
    }

    printf("POWER : %F \n",power1);
    printf("POWER : %F \n",power2);


    printf("=================================\n");
    printf("          CARTA 2 VENCEU         \n");
    printf("=================================\n");

   
}





printf("\n");
printf("==========================================================================================");
printf("\n");

printf("\n");




}
