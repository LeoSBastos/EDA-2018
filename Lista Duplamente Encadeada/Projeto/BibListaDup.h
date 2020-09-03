#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct venda
{
    int codigo;
    char nome[60];
    float valor;
    int qtd;
    struct venda *prox;
    struct venda*ant;
};
typedef struct venda Venda;

typedef struct num{
    float soma;
    int qnt;
} Num;

//Instancia uma Lista
Venda* lst_cria(Venda* lst);
//Cadastra Um Produto
Venda* lst_cadastro (Venda* lst, int codigo, char* nome, float valor, int qtd);
//Consulta toda a litsa verificando pelo codigo
Venda* lst_consulta_codigo (Venda* lst,int codigo);
//busca pelo nome do produto
Venda* lst_consulta_nomeproduto (Venda* lst,char* nome);
//lista toda a lista XD
void lst_lista(Venda* lst);
//consulta pela quantidade
void lst_lista_qntd (Venda* lst,int q);
//altera o valor, usa como parametro o codigo
Venda* lst_alteracao(Venda* lst, int codigo,char* nome,float valor, int qtd);
//remove o produto pelo codigo
Venda* lst_remocao(Venda* lst, int codigo);
//Lista uma venda
void lst_venda(Venda* lst);







//Porngrama feito sem direitos autorais
//AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA lista AAAAAAAAAAAAAAAAAAAAAA
//pelo menos essa carroça ta comendo umas ram malegna
//compilou rodou é o que importa
//não aborte programas
