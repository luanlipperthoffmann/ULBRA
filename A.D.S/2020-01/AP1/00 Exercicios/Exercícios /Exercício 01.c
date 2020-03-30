

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