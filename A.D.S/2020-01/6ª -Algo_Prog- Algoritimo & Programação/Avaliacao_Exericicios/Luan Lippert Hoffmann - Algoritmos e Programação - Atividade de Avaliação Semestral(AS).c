/******************************************************************************
==>REPETIÇÃO INDETERMINADA<==
1 - Uma pesquisa sobre a pandemia precisa informar o município com mais casos de COVID19 e o município com menos casos. 
Para apoio a esta pesquisa você deve desenvolver um programa que leia o código do município e o número de casos confirmados da doença. 
A leitura deve ser repetida até que o código de município zero seja informado. Após encerrada a leitura  escreva: 
    o número total de municípios pesquisados;
    o código do município que teve o maior número de casos confirmados, juntamente com o número de casos;
    o código do município que teve o menor número de casos confirmados, juntamente com o número de casos.
    OBS: quando o código zero for informado, o programa deve encerrar imediatamente sem ler o número de casos COVID19.
*******************************************************************************/
// #include <stdio.h>

// int main()
// {
//     int municipio, covid, cont=0, maior=0, menor=0, maiorM=0, menorM=0;
//     do{
//         printf("\nDígite o codigo do seu municipio? ");
//         scanf("%i", &municipio);
        
//         if(municipio!=0){
//             printf("Dígite a quantidade de casos confirmados por COVID19: ");
//             scanf("%i", &covid);  
//             cont=cont+1; 

//             if (covid>maior){
//                 maior=covid;
//                 maiorM=municipio;
//             }

//             if(menor==0){
//                 menor=covid;
//                 menorM=municipio;
//             }

//             if (covid<menor){
//                 menor=covid;
//                 menorM=municipio;
//             }
//         } 
        
//     } while(municipio!=0);
//         printf("\nO total de municípios pesquizados foi de: %i \n", cont);
//         printf("o município que teve o maior número de casos confirmados foi : %i, com o número de casos de: %i \n", maiorM, maior);
//         printf("o município que teve o menor número de casos confirmados foi : %i, com o número de casos de: %i \n", menorM, menor);
//     return 0;
// }

/******************************************************************************
==> VETOR <==
2 - No ambiente Aula, nas avaliações realizadas pelo aluno, são exibidas:  a média das notas dos alunos, a maior nota e a menor nota. 
Faça um programa que leia as notas de uma turma de 30 alunos. As notas devem ser armazenadas em um vetor de 30 elementos. Calcule e exiba:
    a média de notas da turma; 
    a nota mais alta;
    a nota mais baixa;
    o número de aprovados(alunos que tiraram nota maior ou igual a 7).
*******************************************************************************/
// #include <stdio.h>

// int main()
// {
//     float nota[30], media=0, maior=0, menor=0;
//     int x, aprovados=0;

//     for(x=0; x<30; x++){
//         printf("Dígite a nota do aluno: ", x+1);
//         scanf("%f", &nota[x]);
        
//         media=nota[x]+media;

//         if(nota[x]>maior){
//             maior=nota[x];
//         }

//         if(menor==0){
//             menor=nota[x];
//         }

//         if(nota[x]<menor){
//             menor=nota[x];
//         }
       
//        if(nota[x]>=7){
//             aprovados++;
//         }
        
//     }

//     printf("\na média de notas da turma foi: %.2f \n", media/30);
//     printf("a nota mais alta foi: %.2f \n", maior);
//     printf("a nota mais baixa foi: %.2f \n", menor);
//     printf("o número de aprovados foi: %i \n", aprovados);
//     return 0;
// }

/******************************************************************************
==> VETOR <==
3 - Escreva um programa para fazer a leitura de um número indeterminado de valores. Todos os valores pares devem ser armazenados em um 
vetor de 20 posições. O programa deve ser encerrado quando o vetor estiver totalmente preenchido
*******************************************************************************/
// #include <stdio.h>

// int main()
// {
//     int num[20], x;
    
//     for(x=0; x<20; x++){
        
//         do{
//             printf("Dígite o valor: (%i): ", x+1);
//             scanf("%i", &num[x]);
//         } while (num[x]%2==1);

//     }

//     for(x=0; x<20; x++){
//         printf("\nOs vetores pares são %i: %i", x+1, num[x]);
//     }
    
//     return 0;
// }