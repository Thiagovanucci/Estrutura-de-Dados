
typedef class No{
    public:
        int dado;
        No* esq;
        No* dir;
}arvore;

typedef arvore *arvoreBinaria;

void cria();
void vazia(No* r);
arvoreBinaria busca(arvoreBinaria r,int conteudo);
int exibirArvore(arvoreBinaria r);