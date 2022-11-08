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

int inserir(arvoreBinaria r,int conteudo){
    arvore *new_no = new arvore();
    arvore *atual = new arvore();
    arvore *p = new arvore();
    if (new_no == NULL) {
        return 0;}
    new_no->dado = conteudo;
    new_no->esq = NULL;
    new_no->dir = NULL;

    if (r == NULL){ 
        r = new_no;
        return 1;
    }
    atual = r;
    while (atual != NULL) {
        p = atual;
        if (atual->dado > conteudo){
        atual = atual->esq;}
        else{
        atual = atual->dir;}
        }
    if (p->dado > conteudo){
        p->esq = new_no;}
    else{
        p->dir = new_no;}
    return 1;
       
}


