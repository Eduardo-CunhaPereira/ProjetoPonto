#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    system("color 06");
    time_t tempo = 0;
    struct tm * info;

time(&tempo);
info = localtime(&tempo);

FILE * pontodu;
FILE * pontowag;
FILE * pontowel;
FILE * pontojoao;

pontodu = fopen("C:\\Users\\dudup\\OneDrive\\Área de Trabalho\\Dev\\ProjetoPonto\\PB\\pontodu.txt", "a");
pontowag = fopen("C:\\Users\\dudup\\OneDrive\\Área de Trabalho\\Dev\\ProjetoPonto\\PB\\pontowag.txt", "a");
    int du, wag, wel, joao, senha, meny;
    int ciclo;
    du = 1234;
    wag = 1111;
    wel = 2222;
    joao = 3333;
    meny = 10;

    printf("--PONTO BEKA FERRAGEM--\n");
    printf("digite sua senha:");
    scanf("%i", &senha);

    if(senha == du)
    {
      printf("Ponto de Eduardo batido:%02d/%02d %02d:%02d:%02d\n\n",info->tm_mday, info->tm_mon, info->tm_hour, info->tm_min, info->tm_sec);
      fprintf(pontodu, "batido:%02d/%02d %02d:%02d:%02d\n",info->tm_mday, info->tm_mon, info->tm_hour, info->tm_min, info->tm_sec);
      fclose(pontodu);
    }

    else if(senha == wag)
    {
        printf("Ponto de Wagner batido:%02d/%02d %02d:%02d:%02d\n\n",info->tm_mday, info->tm_mon, info->tm_hour, info->tm_min, info->tm_sec);
        fprintf(pontowag,"batido:%02d/%02d %02d:%02d:%02d\n",info->tm_mday, info->tm_mon, info->tm_hour, info->tm_min, info->tm_sec);
       fclose(pontowag);
    }

    else if(senha == meny)
    {
        system("cls");
        menu();
    }

 getch();
 system("cls");
 main();

}

int menu() //bloco de de menu gerencial
{
    int op, opb;
    printf("MENU GERENCIAL\n\n");
    printf("1-Banco de Horas\n2-Ponto Mes\n3-Ponto Dia\n4-Voltar\nR:");
    scanf("%i", &op);
    system("cls");

    if(op == 1)
    {

        printf("BANCO DE HORAS\n\n");
        printf("1-Eduardo\n2-wagner\n3-joao\n4-welington\n5-Voltar\nR:");
        scanf("%i", &opb);

        if(opb == 5)
        {
            system("cls");
            menu();
        }

    }







}
