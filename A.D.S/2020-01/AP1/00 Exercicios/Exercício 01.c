/******************************************************************************
Exercício 01:
FUA que lê o número de um funcionário, seu número de horas trabalhadas e o valor
que recebe por hora. O algoritmo deve calcular e mostrar o salário deste
funcionário. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n_funcionario;
    float horas, valor, salario;
    
    printf("Número do funcinário: ");
    scanf ("%i", &n_funcionario);
    printf ("Número de horas trabalhadas: ");
    scanf ("%f",&horas);
    printf ("Valor recebido por hora trabalhada: ");
    scanf ("%f", &valor);
    salario = horas*valor;
    printf("Salário do funcinário: \n=> R$ %.2f", salario);
    
    return 0;
}
