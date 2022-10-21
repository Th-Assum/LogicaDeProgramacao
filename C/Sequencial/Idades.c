#include <stdio.h>
void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}
int main()
{
    int id1, id2;
    char Nome1[50], Nome2[50];
    double media;



    printf("Dados da Primeira Pessoa \n");
    printf("Nome: ");
    gets(Nome1);
    printf("Idade: ");
    scanf("%d", &id1);


    printf("Dados da Segunda Pessoa \n");
    printf("Nome: ");
    limpar_entrada();
    gets(Nome2);
    printf("Idade: ");
    scanf("%d", &id2);

    media = (id1 + id2)/2.0;


    printf("A idade media de %s e %s e de %.1lf anos ", Nome1, Nome2, media);




    return 0;
}
