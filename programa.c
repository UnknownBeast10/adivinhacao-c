#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void adivinhe1(int* c) {
    printf("Adivinhe um Numero [1 - 100]: ");
    scanf("%d", c);
}

void adivinhe2(int* c) {
    printf("Adivinhe um Numero [1 - 500]: ");
    scanf("%d", c);
}


void adivinhe3(int* c) {
    printf("Adivinhe um Numero [1 - 1000]: ");
    scanf("%d", c);
}



int main() {
    int dificuldade;
    Inicio:
    printf("Bem-Vindo ao jogo de adivinhacao!\n");
    printf("Selecione a dificuldade [1 - 3]: ");
    scanf("%d", &dificuldade);
    switch (dificuldade) {
        case 1:
            Diff1:
            for (int i = 1; i <= 10; i++) {
                int numeroSecreto = rand() % 100;
                int chute;
                int pontos = 0;
                int tentativa = i;
                adivinhe1(&chute);

                if(chute == numeroSecreto) {
                    pontos++;
                    printf("Voce Acertou, seu chute foi de %d\n", chute);
                    printf("Pontos: %d\n", pontos);
                    printf("********************************************************\n");
                    printf("Jogue Novamente!\n");
                    goto Diff1;
                }

                if(chute < 0) {
                    printf("Voce Errou, seu chute foi de %d\n", chute);
                    printf("Voce nao pode chutar numeros negativos!\n");
                    printf("Tente Novamente!\n");
                    goto Diff1;
                } else if(chute > 100) { 
                    printf("Voce Errou, seu chute foi de %d\n", chute);
                    printf("Voce nao pode chutar numeros acima de 100!\n");
                    printf("Tente Novamente!\n");
                    goto Diff1;
                }
                else if(chute > numeroSecreto) {
                    printf("Voce Errou, seu chute foi de %d\n", chute);
                    printf("O Numero esta Maior que o Numero secreto!\n");
                    printf("Tentativa: %d/10\n", tentativa);            
                } else if(chute < numeroSecreto) {
                    printf("Voce Errou, seu chute foi de %d\n", chute);
                    printf("O Numero esta Menor que o Numero secreto!\n");
                    printf("Tentativa: %d/10\n", tentativa);
                }  

                if(tentativa >= 10) {
                    if(pontos > 0) pontos--;
                    printf("********************************************************\n");
                    printf("Pontos: %d\n", pontos);
                    char continuar[1];
                    printf("Deseja Continuar? [s - n]");
                    scanf("%s", continuar);
                    if(strcmp(continuar, "s") == 0) {
                        printf("Comece novamente:\n");
                        goto Diff1;  
                    } else if(strcmp(continuar, "n") == 0) {
                        printf("********************************************************\n");
                        goto Inicio;
                    } else {
                        printf("********************************************************\n");
                        printf("Este valor nao existe entao volte ao inicio!\n");
                        goto Inicio;
                    }
                }
            }
            break;
        case 2: 
            Diff2:
            for (int i = 1; i <= 10; i++) {
                int numeroSecreto = rand() % 500;
                int chute;
                int pontos = 0;
                int tentativa = i;
                adivinhe2(&chute);

                if(chute == numeroSecreto) {
                    pontos++;
                    printf("Voce Acertou, seu chute foi de %d\n", chute);
                    printf("Pontos: %d\n", pontos);
                    printf("********************************************************\n");
                    printf("Jogue Novamente!\n");
                    goto Diff2;
                }

                if(chute < 0) {
                    printf("Voce Errou, seu chute foi de %d\n", chute);
                    printf("Voce nao pode chutar numeros negativos!\n");
                    printf("Tente Novamente!\n");
                    goto Diff2;
                } else if(chute > 500) { 
                    printf("Voce Errou, seu chute foi de %d\n", chute);
                    printf("Voce nao pode chutar numeros acima de 100!\n");
                    printf("Tente Novamente!\n");
                    goto Diff2;
                }
                else if(chute > numeroSecreto) {
                    printf("Voce Errou, seu chute foi de %d\n", chute);
                    printf("O Numero esta Maior que o Numero secreto!\n");
                    printf("Tentativa: %d/10\n", tentativa);            
                } else if(chute < numeroSecreto) {
                    printf("Voce Errou, seu chute foi de %d\n", chute);
                    printf("O Numero esta Menor que o Numero secreto!\n");
                    printf("Tentativa: %d/10\n", tentativa);
                }  

                if(tentativa >= 10) {
                    if(pontos > 0) pontos--;
                    printf("********************************************************\n");
                    printf("Pontos: %d\n", pontos);
                    char continuar[1];
                    printf("Deseja Continuar? [s - n]");
                    scanf("%s", continuar);
                    if(strcmp(continuar, "s") == 0) {
                        printf("Comece novamente:\n");
                        goto Diff2;  
                    } else if(strcmp(continuar, "n") == 0) {
                        printf("********************************************************\n");
                        goto Inicio;
                    } else {
                        printf("********************************************************\n");
                        printf("Este valor nao existe entao volte ao inicio!\n");
                        goto Inicio;
                    }
                }
            }
            break;
        case 3:
            Diff3:
            for (int i = 1; i <= 10; i++) {
                int numeroSecreto = rand() % 500;
                int chute;
                int pontos = 0;
                int tentativa = i;
                adivinhe3(&chute);

                if(chute == numeroSecreto) {
                    pontos++;
                    printf("Voce Acertou, seu chute foi de %d\n", chute);
                    printf("Pontos: %d\n", pontos);
                    printf("********************************************************\n");
                    printf("Jogue Novamente!\n");
                    goto Diff3;
                }

                if(chute < 0) {
                    printf("Voce Errou, seu chute foi de %d\n", chute);
                    printf("Voce nao pode chutar numeros negativos!\n");
                    printf("Tente Novamente!\n");
                    goto Diff3;
                } else if(chute > 1000) { 
                    printf("Voce Errou, seu chute foi de %d\n", chute);
                    printf("Voce nao pode chutar numeros acima de 100!\n");
                    printf("Tente Novamente!\n");
                    goto Diff3;
                }
                else if(chute > numeroSecreto) {
                    printf("Voce Errou, seu chute foi de %d\n", chute);
                    printf("O Numero esta Maior que o Numero secreto!\n");
                    printf("Tentativa: %d/10\n", tentativa);            
                } else if(chute < numeroSecreto) {
                    printf("Voce Errou, seu chute foi de %d\n", chute);
                    printf("O Numero esta Menor que o Numero secreto!\n");
                    printf("Tentativa: %d/10\n", tentativa);
                }  

                if(tentativa >= 10) {
                    if(pontos > 0) pontos--;
                    printf("********************************************************\n");
                    printf("Pontos: %d\n", pontos);
                    char continuar[1];
                    printf("Deseja Continuar? [s - n] ");
                    scanf("%s", continuar);
                    if(strcmp(continuar, "s") == 0) {
                        printf("Comece novamente:\n");
                        goto Diff3;  
                    } else if(strcmp(continuar, "n") == 0) {
                        printf("********************************************************\n");
                        goto Inicio;
                    } else {
                        printf("********************************************************\n");
                        printf("Este valor nao existe entao volte ao inicio!\n");
                        goto Inicio;
                    }
                }
            }
            break;
        default:
            printf("Bote um valor correspodente!\n");
            printf("********************************************************\n");
            goto Inicio;
            break;
    }

    return 0;
}