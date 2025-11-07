#include <stdio.h>
 int main(){
     printf("desafio cartas\n");
    /*DADOS CARTA 1*/
    char estado[]= "A" ;   
    char codigo[]= "A01";
    char cidade[]= "Fortaleza";
    int populacao= 20.000;
    float area= 10.000;
    float pib= 30.000;
    int turisticos= 50;
    float densidade=populacao/area;
    float percapita=pib/populacao;

      /*DADOS PARA EXPOR*/

     printf("Estado: %s\n",estado);
     printf("Código:%s\n",codigo);
     printf("Cidade:%s\n",cidade);
     printf("População:%d\n",populacao);
     printf("Área:%f\n",area);
     printf("PIB:%f\n",pib);
     printf("Pontos turísticos:%d\n",turisticos);
     printf("Densidade populacional: %f\n",densidade);
     printf("PIB per capita:%f\n",percapita);



     /* DADOS CARTA 2*/
     
     char estado2[]= "B" ;   
    char codigo2[]= "B02";
    char cidade2[]= "Recife";
    int populacao2= 70.000;
    float area2= 90.000;
    float pib2= 60.000;
    int turisticos2= 20;
    float densidade2=populacao2/area2;
    float percapita2= pib2/populacao2;


    /*DADOS PARA EXPOR*/

     printf("Estado: %s\n",estado2);
     printf("Código:%s\n",codigo2);
     printf("Cidade:%s\n",cidade2);
     printf("População:%d\n",populacao2);
     printf("Área:%f\n",area2);
     printf("PIB:%f\n",pib2);
     printf("Pontos turísticos:%d\n",turisticos2);
     printf("Densidade populacional: %f\n",densidade2);
     printf("PIB per capita:%f\n",percapita2);



}
