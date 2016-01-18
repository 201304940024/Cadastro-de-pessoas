#include <stdio.h>
#include <string.h>
#include "cadastro.h"

int main()
{
    int variavel_quantidade_de_pessoas;
    printf("INFORME A QUANTIDADE DE PESSOAS QUE VOCE SENHA CADASTRAR\n");
    scanf("%d",&variavel_quantidade_de_pessoas);

    tipo_cad c[variavel_quantidade_de_pessoas];
    
    cadastrar_pessoas(variavel_quantidade_de_pessoas,c);
    
    mostrar_pessoas_cadastradas(variavel_quantidade_de_pessoas,c);
return 0;
}


    