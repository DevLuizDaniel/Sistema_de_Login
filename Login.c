#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <String.h>
#include <locale.h>

//Fun��o para login
int login(int value_login){
    char user_login[30];
    int result_login;
    system("cls");
    printf("\n\nEntre com a sua conta:\n");
    printf("\nLogin: ");
    scanf("%s",&user_login);
    result_login = strcmp(user_login, "luiz_root");
    return result_login;
}

//Fun��o para a senha
int password(int value_password){
    char user_password[20];
    int result_password;
    printf("Senha: ");
    scanf("%s",&user_password);
    result_password = strcmp(user_password, "senha_super_forte");
    return result_password;
}

//Fun��o Principal
int main(){
    setlocale(LC_ALL, "Portuguese");
    int value_login, value_password, cont, cont_points, nav_login;
    printf("\n---------------- Sistema de Login ------------------\n\n");
    printf("Voc� deseja navegar em sua conta? [1 - Sim/ 2 - N�o] - ");
    scanf("%d",&nav_login);
    if (nav_login == 1){
        printf("\n\nRedirecionando para a tela de login ");
        cont_points = 0;
        //La�o para o carregamento
        while(cont_points < 3){
            sleep(1);
            printf(" . ");
            sleep(1);
            cont_points++;
        }
        printf("\n");
        if(login(value_login) == 0 && password(value_password) == 0){
            system("cls");
            printf("\n\nRedirecionando a sua conta, Seja Bem Vindo Luiz");
            for(cont_points=0;cont_points<3;cont_points++){
                sleep(1);
                printf(" . ");
                sleep(1);
            }
            //chamando a fun��o ao qual estar� a conta do usu�rio
            system_logged();
        }
        //Erro a senha ou o login :(
        else{
            system("cls");
            printf("\nN�o foi poss�vel entrar na sua conta!\nLogin ou senha incorretos!\n\nAperte qualquer tecla para sair...\n\n");
        }
    }
    else{
        //O usu�rio escolheu navegar no sistema sem estar logado
        if(nav_login == 2){
            printf("\nVoc� escolheu navegar sem login no sistema, aguarde um momento");
            for(cont_points=0;cont_points<3;cont_points++){
                sleep(1);
                printf(" . ");
                sleep(1);
            }
            printf("\n\nAqui temos op��es fict�cias para quem n�o fez o login:\n\n");
            printf("1 -Visite o nosso website\t");
            printf("2 -Visite o nosso blog\n\n");
            printf("3 -Veja as novas not�cias\t");
            printf("4 -Se inscreva no nosso app\n\n");
            printf("5 -Livros\t\t\t");
            printf("6 -Navegue com a sua conta\n\n");
        }
    }

}

//Sistema j� logado
void system_logged(){
    system("cls");
    printf("\nOl� Luiz, agora voc� pode navegar na sua conta tranquilamente!\n\n");
    printf("conta: luiz_root\n");
    printf("informa��es:\nConta feita com sucesso para teste deste software, o nome da conta e senha\nforam criadas por mim :)\n\n");
}

//Made by DevLuizDaniel :D
