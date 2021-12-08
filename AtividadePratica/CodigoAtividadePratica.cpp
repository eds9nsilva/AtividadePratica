#include<math.h>
#include<stdio.h>
#include<string.h>
int main()
{
    // Declarando meu RU em um vetor. 
    // Desta forma fica mais simples de trabalhar com as posições dos digitos
    int meuRuAluno[] = {3,2,9,2,5,9,1}; 

    int tempoLigacao4Digito = meuRuAluno[3]; // Pegando o valor do vetor na 4° posição, o vetor inicia a partir de 0.

    printf("Tempo de ligacao igual ao 4 digito do meu RU: %i \n", tempoLigacao4Digito);

    int tempoLigacaoSomaTerceiroSextoDigito = meuRuAluno[2] + meuRuAluno[5];

    printf("Tempo de ligacao igual a soma do terceiro com o sexto digito do meu RU: %i \n", tempoLigacaoSomaTerceiroSextoDigito);

    int tempoLigacaoSomaPrimeiroTerceiroDigito = meuRuAluno[0] + meuRuAluno[1];

    printf("Tempo de ligacao igual a soma do terceiro com o sexto digito do meu RU: %i", tempoLigacaoSomaPrimeiroTerceiroDigito);


}
