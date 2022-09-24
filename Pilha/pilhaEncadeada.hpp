#ifndef ___pilha___
#define ___pilha___

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

class Pilha{
    private:
        int tamanho;
        No* topo;
    public:
        Pilha();
        void pilhaVazia();
        int tamnanhoPilha();
        int top();
        void push(int conteudo);
        bool pop();
};

#endif