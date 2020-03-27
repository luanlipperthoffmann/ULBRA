/******************************************************************************

1. FUA que lê o número de um funcionário, seu número de horas trabalhadas e o
valor que recebe por hora. O algoritmo deve calcular e mostrar o salário deste
funcionário.

var
    n_funcionario: inteiro;
    horas, valor, salario: real;

Inicio
    escreva("Numero do funcionario: ");
    leia(n_funcionario);
    escreva("Horas trabalhadas: ");
    leia(horas);
    escreva("Valor da hora: ");
    leia(valor);
    salario <- horas * valor;
    escreva ("Salario do funcionario: ", salario);
finalalgoritmo
*******************************************************************************/
#include <stdio.h>

int main()
{
    int n_funcionario;
    float horas, valor, salario;

    printf("Numero do funcionario: "); 
    scanf("%i", &n_funcionario); 
    printf("Horas trabalhadas: ");
    scanf( "%f", &horas); 
    printf("Valor da hora: ");
    scanf("%f", &valor);
    salario = horas * valor;
    printf ("Salario do funcionario: \n=> R$ %.2f", salario);

return 0;
}
