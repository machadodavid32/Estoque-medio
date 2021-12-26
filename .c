#include<stdio.h>
int main(){

int qmin, qmax;
float estoque;


printf("Informe a quantidade minima: ");
scanf("%d",&qmin);

printf("Informe a quantidade maxima: ");
scanf("%d",&qmax);


estoque = (qmin = qmax) / 2;

printf("Estoque médio é igual a %.2f", estoque);

}
