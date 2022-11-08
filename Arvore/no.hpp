
typedef class No{
    public:
        int dado;
        No* esq;
        No* dir;
}arvore;

typedef arvore *arvoreBinaria;

void cria(arvoreBinaria *r);
void vazia(No* r);
arvoreBinaria busca(arvoreBinaria r,int conteudo);
void exibirArvore(arvoreBinaria r);
int inserir(arvoreBinaria r, int conteudo);