#include <stdio.h>
#include <stdlib.h>
  int main() {

  float altura ;    
  float peso   ;  
  int  idade  ;
  char  cidade[10];
  char  Estado[2] ;
  char  nome[10] ;

  printf("qual a medida da altura:", altura);
  scanf("%f", &altura);
  printf("qual a medida do peso:", peso);
  scanf("%f", &peso);
  printf("qual a idade:", idade);
  scanf("%d", &idade);
  printf("qual o nome da cidade:", cidade);
  scanf("%s", &cidade);
  printf("qual o Estado:", Estado);
  scanf("%s", &Estado);
  printf("qual e o seu nome:", nome);
  scanf("%s", &nome);
  
int medida1 = 60;    int medida2 = 80;

if (medida1 + medida2 >= 100){
   printf("medidas 1 e 2 sao maiores que 100");
}
else{
   printf("medidas 1 e 2 sao menores que 100");
    }
 }