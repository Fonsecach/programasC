#include <stdio.h>
#include <string.h>

int main() {
  int quantidade, aulas = 10;

  // Solicita ao usuário o número de alunos
  printf("Insira a quantidade de alunos: ");
  scanf("%d", &quantidade);

  // Declara matrizes para armazenar os nomes dos alunos e os nomes dos alunos
  // aptos
  char aluno[quantidade][100];
  char aluno_aptos[quantidade][100];

  // Declara um vetor para armazenar as presenças dos alunos
  int presenca[quantidade];

  // Loop para coletar informações sobre cada aluno
  for (int i = 0; i < quantidade; i++) {
    // Solicita o nome do aluno e armazena na matriz 'aluno'
    printf("Insira o nome do aluno: ");
    scanf(" %[^\n]s", aluno[i]);

    // Solicita a quantidade de presenças e armazena no vetor 'presenca'
    printf("Insira a quantidade de presença: ");
    scanf("%d", &presenca[i]);

    // Verifica se o aluno tem mais de 75% de presença (7.5 aulas em 10)
    if (presenca[i] > (aulas * 0.75)) {
      // Se o aluno tiver mais de 75% de presença, copia o nome para
      // 'aluno_aptos'
      strcpy(aluno_aptos[i], aluno[i]);
    }
  }

  // Exibe os nomes dos alunos aptos
  printf("Alunos aptos:\n");
  for (int i = 0; i < quantidade; i++) {
    printf("%s\n", aluno_aptos[i]);
  }

  return 0;
}