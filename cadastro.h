//cadastro.h
struct cadastro_de_pessoas
{
    char nome[50];
    int idade;
    char sexo;
};

typedef struct cadastro_de_pessoas tipo_cad;

void cadastrar_pessoas(int quantidade_de_pessoas,tipo_cad c[quantidade_de_pessoas]);
void mostrar_pessoas_cadastradas(int quantidade_de_pessoas,tipo_cad c[quantidade_de_pessoas]);