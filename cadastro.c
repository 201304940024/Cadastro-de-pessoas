#include <stdio.h>
#include <string.h>
#include "cadastro.h"
void cadastrar_pessoas(int quantidade_de_pessoas,tipo_cad c[quantidade_de_pessoas])
{
for(int i=0;i<quantidade_de_pessoas;i++)
    {
        // CONFIRMACAO DE NOME
        int confirmacao_de_nome=0;
        while(confirmacao_de_nome==0)
        {
        printf("Informe seu nome\n");
        scanf("%s",&c[i].nome);
        printf("verifique se seu nome esta correto \n");
        printf("Seu nome e: %s \n",c[i].nome);
        printf("se seu nome estiver correto digite '1' caso contrario digite '0'\n");
        scanf("%d",&confirmacao_de_nome);
        }   
        int confirmacao_de_idade=0;
        while(confirmacao_de_idade==0)
            {
            printf("Informe sua idade\n");
            scanf("%d",&c[i].idade);
            if((c[i].idade > 0) && (c[i].idade)<=140)
            {
            confirmacao_de_idade=1;
            }
                else
                {
                confirmacao_de_idade=0;
                }
            }
            // CONFIRMACAO DE SEXO;
        int confirmacao_de_sexo=0;
        while(confirmacao_de_sexo==0)
            {    
            printf("Informe seu sexo com `f` OU `m`\n");
            scanf("%s",&c[i].sexo);
            if((c[i].sexo == 'F') || (c[i].sexo == 'f'))
                {
                confirmacao_de_sexo=1;
                printf("Femenino\n"); 
                }
                else if(((c[i].sexo == 'M') || (c[i].sexo == 'm')))
                {
                confirmacao_de_sexo=1;
                printf("Masculino\n");
                }
                    else
                    {
                    printf("sexo invalido\n");
                    }
        }
    }
}
void mostrar_pessoas_cadastradas(int quantidade_de_pessoas,tipo_cad c[quantidade_de_pessoas])
{
    for(int i=0;i<quantidade_de_pessoas;i++)
    {
        printf("Nome da pessoa numero [%i]: %s \n",i,c[i].nome);
        
        printf("Idade da pessoa numero [%i]:%d\n",i,c[i].idade);
        
        printf("Sexo da pessoa numero [%i]:%c\n",i,c[i].sexo);

    }
}

