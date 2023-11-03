#include <stdio.h>
#include <string.h>

struct Estudante {
    char nome[50];
    int matricula;
    float notas[2]; // Array para armazenar as duas notas
    float media;
};

int main() {
    int num_alunos;

    // Pergunta ao usuário o número de alunos
    printf("Quantos alunos deseja cadastrar? ");
    scanf("%d", &num_alunos);

    // Declaração de um array de estruturas
    struct Estudante estudantes[num_alunos];

    // Preenchimento das informações dos alunos
    for (int i = 0; i < num_alunos; i++) {
        printf("Informe o nome do aluno %d: ", i + 1);
        scanf("%s", estudantes[i].nome); // Usando %s para ler uma string

        printf("Informe a matrícula do aluno %d: ", i + 1);
        scanf("%d", &estudantes[i].matricula);

        // Solicitação das duas notas
        printf("Informe a primeira nota do aluno %d: ", i + 1);
        scanf("%f", &estudantes[i].notas[0]);

        printf("Informe a segunda nota do aluno %d: ", i + 1);
        scanf("%f", &estudantes[i].notas[1]);

        // Cálculo da média
        estudantes[i].media = (estudantes[i].notas[0] + estudantes[i].notas[1]) / 2;
    }

    // Exibição dos dados
    printf("Dados dos alunos cadastrados:\n");
    for (int i = 0; i < num_alunos; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", estudantes[i].nome);
        printf("Matrícula: %d\n", estudantes[i].matricula);
        printf("Nota 1: %.1f\n", estudantes[i].notas[0]);
        printf("Nota 2: %.1f\n", estudantes[i].notas[1]);
        printf("Média: %.1f\n", estudantes[i].media);
    }

    return 0;
}
