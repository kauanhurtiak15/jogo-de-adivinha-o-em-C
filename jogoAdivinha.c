# include <stdio.h>
int main(){

    //imprime o cabeçalho do jogo.
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int numeroSecreto = 50;

    int chute;

    printf("Qual é o seu chute? ");
    scanf("%d", &chute);
    printf("Seu chute foi %d\n", chute);

}