#include <iostream>
# include "no.hpp"

using namespace std;



void cria(arvoreBinaria *r){
    *r= NULL;
}

void vazia(arvoreBinaria r){
    if( r == NULL ){
        cout<<"árvore vazia "<<endl;
    }
}

arvoreBinaria busca(arvoreBinaria r,int conteudo){
    if( r== NULL){
        cout<<"árvore vazia "<<endl;
        return ;
    }
    if (r->dado == conteudo){
        return r;
    }
    if (r->dado>conteudo){
        return busca(r->dir,conteudo);
    }
    else{
        return busca(r->esq,conteudo);
    }
}

void exibirArvore(arvoreBinaria r){
    if (r==NULL){
        cout<<"árvore vazia";
        
    }
    if (r->esq!=NULL){
        exibirArvore(r->esq);
    }
    cout<<r->dado<<endl;
    if (r->dir!=NULL){
        exibirArvore(r->dir);
    }
}

int exibirArvore(arvoreBinaria r,int conteudo){
    arvore *nonovo,*atual,*p;
    nonovo = malloc(sizeof(r));

}

