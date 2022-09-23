#ifndef ___Lista__Encadeada___
#define ___Lista__Encadeada___

class No{
    private:
        int dado;
        No* proximo;
    public:
        No();
        void setDado(int conteudo);
        int getDado();
        void setProximo(No* nprox);
        No* getProximo();
};

class Lista{
    private:
        No* cabeca;
        int tamanho;
    public:
        Lista();
        void listaVazia();
        int tamanhoLista();
        bool insere(int pos, int conteudo);
        int obterElemento(int pos);
        int modificaElemento(int pos,int conteudo);

        bool remover(int pos);
        bool mostrarLista();

};

#endif