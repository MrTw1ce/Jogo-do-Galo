#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>
#include<time.h>
char jogo[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
int i;

char tabuleiro(){
    printf("\n\n_|_1_|_2_|_3_");
    printf("\n |   |   |   ");
    printf("\n1| %c | %c | %c  ",jogo[0][0],jogo[0][1],jogo[0][2]);
    printf("\n_|___|___|___");
    printf("\n |   |   |   ");
    printf("\n2| %c | %c | %c  ",jogo[1][0],jogo[1][1],jogo[1][2]);
    printf("\n_|___|___|___");
    printf("\n |   |   |   ");
    printf("\n3| %c | %c | %c  ",jogo[2][0],jogo[2][1],jogo[2][2]);
    printf("\n |   |   |   ");}

int vitoria(char opt1){
    //diagonais
    if(((jogo[0][0]=='O')&&(jogo[1][1]=='O')&&(jogo[2][2]=='O'))
       ||((jogo[0][2]=='O')&&(jogo[1][1]=='O')&&(jogo[2][0]=='O'))){
        system("CLS");  //Quando uma das condi��es de vit�ria se verifica o programa limpa a interface mostrando apenas a tabela final e quem venceu o jogo
        i=4;    //Caso se verifique uma condi��o de vit�ria  a vari�vel i � igualada a 4 de modoa garantir que n�o ocorra outra ronda
        printf("Fim do jogo!");
        tabuleiro();
        if(opt1=='1') printf("\nVit�ria do Computador");
        else printf("\nVit�ria do Jogador");
        }
    else if(((jogo[0][0]=='X')&&(jogo[1][1]=='X')&&(jogo[2][2]=='X'))
            ||((jogo[0][2]=='X')&&(jogo[1][1]=='X')&&(jogo[2][0]=='X'))){
        i=4;
        system("CLS");
        printf("Fim do jogo!");
        tabuleiro();
        if(opt1=='1') printf("\nVit�ria do Jogador");
        else printf("\nVit�ria do Computador");
        }
    //linhas
    else if(((jogo[0][0]=='O')&&(jogo[0][1]=='O')&&(jogo[0][2]=='O'))
            ||((jogo[1][0]=='O')&&(jogo[1][1]=='O')&&(jogo[1][2]=='O'))
            ||((jogo[2][0]=='O')&&(jogo[2][1]=='O')&&(jogo[2][2]=='O'))){
        i=4;
        printf("Fim do jogo!");
        tabuleiro();
        if(opt1=='1') printf("\nVit�ria do Computador");
        else printf("\nVit�ria do Jogador");
        }
    else if(((jogo[0][0]=='X')&&(jogo[0][1]=='X')&&(jogo[0][2]=='X'))
            ||((jogo[1][0]=='X')&&(jogo[1][1]=='X')&&(jogo[1][2]=='X'))
            ||((jogo[2][0]=='X')&&(jogo[2][1]=='X')&&(jogo[2][2]=='X'))){
        system("CLS");
        i=4;
        printf("Fim do jogo!");
        tabuleiro();
        if(opt1=='1') printf("\nVit�ria do Jogador");
        else printf("\nVit�ria do Computador");
        }
    //colunas
    else if(((jogo[0][0]=='O')&&(jogo[1][0]=='O')&&(jogo[1][0]=='O'))
            ||((jogo[0][1]=='O')&&(jogo[1][1]=='O')&&(jogo[2][1]=='O'))
            ||((jogo[0][2]=='O')&&(jogo[1][2]=='O')&&(jogo[2][2]=='O'))){
        system("CLS");
        i=4;
        printf("Fim do jogo!");
        tabuleiro();
        if(opt1=='1') printf("\nVit�ria do Computador");
        else printf("\nVit�ria do Jogador");
        }
    else if(((jogo[0][0]=='X')&&(jogo[1][0]=='X')&&(jogo[2][0]=='X'))
            ||((jogo[0][1]=='X')&&(jogo[1][1]=='X')&&(jogo[2][1]=='X'))
            ||((jogo[0][2]=='X')&&(jogo[1][2]=='X')&&(jogo[2][2]=='X'))){
        system("CLS");
        i=4;
        printf("Fim do jogo!");
        tabuleiro();
        if(opt1=='1') printf("\nVit�ria do Jogador");
        else printf("\nVit�ria do Computador");
        }
    //Empate
    else{
        if(i==4){
            system("CLS");
            printf("Fim do jogo!");
            tabuleiro();
            printf("\nEmpate");}
        }
}
int main(){
setlocale(LC_ALL, "Portuguese");
int l, c, j,lc,cc,vet[9],n,k;
char opt1,opt2='s';
while((opt2!='n')&&(opt2!='N')){
opt2='l';   //Garante que no fim de cada jogue o programa questiona o jogador se este quer continuar
for(k=0;k<9;k++)  {vet[k]=k;} //Reinicia o vetor do in�cio de cada jogo
printf("Jogo do galo\n");
printf("Com que s�mbolo pretende jogar?\n\t1-Jogar com o X;\n\t2-Jogar com o O.\nR:");
opt1=getche();
while((opt1!='1')&&(opt1!='2')){
    printf("\nOp��o inv�lida!\nR:");
    opt1=getche();
}
system("CLS");
for(i=0;i<5;i++){
    l=-1;//Faz com que o programa solicite os n� da coluna e da linha em que o jogador pretende jogar a cada ronda
    c=-1;
    system("pause");//Atrav�s deste system("pause") e do system("CLS") a tabela do turno anterior � apagada permitindo uma melhor apresenta��o do programa
    system("CLS");
    printf("Ronda %d:",i+1);
    if(opt1=='1') printf("\nJogador: X\tComputador: O");
    else printf("\nJogador: O\tComputador: X");
    tabuleiro();
    while((l<1)||(l>3)){
    printf("\nEm que linha quer jogar (1-3):");
        scanf("%d",&l);}
    while((c<1)||(c>3)){
    printf("\nEm que coluna quer jogar (1-3):");
        scanf("%d",&c);}
    if((jogo[l-1][c-1]=='X')||(jogo[l-1][c-1]=='O')){
         printf("Jogada Inv�lida!\n");
         i--;
         continue;}
    else{
        if(opt1=='1')  jogo[l-1][c-1]='X';
        else  jogo[l-1][c-1]='O';
    }
    vitoria(opt1);
    if(i==4){continue;}
    for(j=0;j<1;j++){
        srand(time(NULL));
        n=rand()%9;
        if(vet[n]==0){lc=0;cc=0;}   //Ap�s gerar o n�mero aleat�rio a casa em que o computador ir� jogar estar� dependente do elemento de �ndice n do vetor
        else if(vet[n]==1){lc=0;cc=1;}
        else if(vet[n]==2){lc=0;cc=2;}
        else if(vet[n]==3){lc=1;cc=0;}
        else if(vet[n]==4){lc=1;cc=1;}
        else if(vet[n]==5){lc=1;cc=2;}
        else if(vet[n]==6){lc=2;cc=0;}
        else if(vet[n]==7){lc=2;cc=1;}
        else if(vet[n]==8){lc=2;cc=2;}
        else{       //Caso o valor do elemento de �ndice n do vetor n�o seja um dos anteriores este ciclo � imediatamente reiniciado, fazendo o processamento das jogadas do computador n�o seja t�o demorado
            j--;
            continue;
        }
        if(i<4){
             if((jogo[lc][cc]=='X')||(jogo[lc][cc]=='O')) { //De forma a garantir que o computador n�o jogue numa casa que j� tenha sido utilizada decidi colocar esta condi��o num ciclo, onde caso esta condi��o se verifique a mesma reinicia o ciclo subtraindo uma unidade � vari�vel da qual a mesma depende
                j--;
                vet[n]=-1;  //Altera o valor de um dos elementos do vetor, fazendo com que cada vez que o computador tente selcionar uma casa inv�lida o computador leve menos tempo a processar a sua pr�xima jogada
                continue;}
                    if(opt1=='1')  jogo[lc][cc]='O';
                    else  jogo[lc][cc]='X';
               }
    vitoria(opt1);  //Ap�s cada jogada do computador ou do jogador o programa verifica as condi��es de vit�ria para determinar a exist�ncia de um vencedor
    if(i==4){continue;}
}
}
while((opt2!='n')&&(opt2!='N')&&(opt2!='s')&&(opt2!='S')){
printf("\nDeseja jogar novamente? (S/N)\nR:");
opt2=getche();
if((opt2=='N')||(opt2=='n')) printf("\nObrigado, volte sempre.");
else if((opt2=='S')||(opt2=='s')){
    for(i=0;i<3;i++){   //Caso o jogador queira jogar novamente este ciclo reinicia a tabela removendo todas as jogadas do jogo anterior
        for(j=0;j<3;j++){
            jogo[i][j]=' ';
        }
    }
    system("pause");
    system("CLS");}
else printf("\nOp��o inv�lida!\n");
}
}
}
