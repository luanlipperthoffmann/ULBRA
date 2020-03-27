/******************************************************************************
. FUA que lê o código da peça 1, a quantidade vendida de peças 1, 
o valor unitário da peça 1, o código da peça 2, a quantidade vendida 
de peças 2, o valor unitário da peça 2 e a percentagem do IPI a ser acrescentada. 
O algoritmo deve calcular o valor total a ser pago.

var
    codigo1, quant1, codigo2, quant2:inteiro
    valor1, valor2, percentual, valor IPI, total:real
    total_final: real

inico
    escreva(“codigo peça 1:”);
    leia (codigo1);
    escreva (“quantidade peça 1:”);
    leia (quant1);
    escreva(“valor peça 1:”);
    leia (valor 1);
    escreva(“codigo peça 2:”);
    leia (codigo2);
    escreva (“quantidade peça 2:”);
    leia (quant2);
    escreva(“valor peça21:”);
    leia (valor 2);
    escreva (“percentual de IPI:”);
    leia (percentual);
    total <-quant1*valor1 + quant2*valor2;
    Valor IPI <-total*percentual /100;
    total final <- total + valor com IPI;
    escreva(“ total da compra com IPI:”, total final);
fim algoritmo

*******************************************************************************/
#include <stdio.h>

int
main ()
{
    int codigo1, quant1, codigo2, quant2;
    float valor1, valor2, percentual, valor_IPI, total, total_final;
    
    
  printf ("Código da peça 01: ");
  scanf ("%i", &codigo1);
  printf ("Quantidades das peças 01: ");
  scanf ("%i", &quant1);
  printf ("Valor da peça 01: ");
  scanf ("%f",&valor1);
  printf ("Código da peça 02: ");
  scanf ("%i", &codigo2);
  printf ("Quantidades das peças 02: ");
  scanf ("%i", &quant2);
  printf ("Valor da peça 02: ");
  scanf ("%f",&valor2);
  printf ("Digite o percentual de IPI: ");
  scanf ("%f", &percentual);
  total= quant1*valor1 + quant2*valor2;
  valor_IPI= total*percentual/100;
  total_final= total + valor_IPI;
  printf("O total da compra com o IPI: \n =>R$ %.2f", total_final);

  return 0;
}
