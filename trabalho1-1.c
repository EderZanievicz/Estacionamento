/* FACULDADE DOM BOSCO DE PORTO ALEGRE
* Sistemas de Informa��o � An�lise e Desenvolvimento de Sistemas
* Algoritmos
*
* Programa PrimeiroT1: Nat� Arena, Eder Zanievicz
* -------------------------
* Objetivo do Programa: Fazer o gerenciamento de um estacionamento de shopping
* Autor: Nat� Arena Leites, Eder Zanievicz
* Data da entrega do arquivo fonte: 23/03/2022
*/
#include<stdio.h>

float valortarifa,total,calculo;
float mercado,calculomercado,totalmercado;
float mensalistas,calculomensalistas,totalmensalistas;
float avulsos,calculoavulsos,totalavulsos;
float isentos,calculoisentos,totalisentos;
	

float calculos(){

	printf("Digite a quantidade de tickets de estacionamentos recebidos no dia: ");
	scanf("%f",&total);
	printf("Digite o valor da tarifa do estacionamento: ");
	scanf("%f",&valortarifa);

	mercado = (valortarifa*50)/100;
	mensalistas = (valortarifa*70)/100;
	avulsos = (valortarifa*100)/100;
	isentos = (valortarifa*0)/100;

	totalmercado = (total*60)/100;
	calculomercado = totalmercado*mercado;
	
	totalmensalistas = (total*25)/100;
	calculomensalistas = totalmensalistas*mensalistas;

	totalavulsos = (total*10)/100;
	calculoavulsos = totalavulsos*avulsos;

	totalisentos = (total*5)/100;
	calculoisentos = totalisentos*isentos;
	calculo = calculomercado + calculomensalistas + calculoavulsos + calculoisentos;
	
}


int main(void)
{
	
	calculos();

	


	if(total >0 && valortarifa >0)
	{
	
	printf("\n ---------------Estacionamento do Shopping---------------");	
	printf("\n""O valor total dos tickets que sao pagos pelo convenio do supermmercado eh: RS ""%.2f",calculomercado);
	printf("\n""O valor total dos tickets que sao pagos por mensalistas eh: RS ""%.2f",calculomensalistas);
	printf("\n""O valor total dos tickets que sao pagos por frequentadores comuns eh: RS ""%.2f",calculoavulsos);
	printf("\n""Isentos: RS ""%.2f",calculoisentos);
	printf("\n""O valor total arrecado no dia foi de: RS ""%.2f",calculo);
	}
	else {
		printf("Dados invalidos");
	}
	return 0;
}
