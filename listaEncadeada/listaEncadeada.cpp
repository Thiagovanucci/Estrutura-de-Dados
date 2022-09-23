
#include <iostream>
#include "listaEncadeada.hpp"
using namespace std;

No::No(){
    this->proximo = NULL;
}
void No::setDado(int conteudo){
            this->dado = conteudo;
}
int No::getDado(){
    return dado;
}
void No::setProximo(No* nprox){
    proximo = nprox;
}
No* No::getProximo(){
    return proximo;
}


Lista::Lista(){
    cabeca = NULL;
    tamanho = 0;
}
void Lista::listaVazia(){
    if (tamanho == 0){
        cout<<"Vazia"<<endl ;
    }
    else{cout<< "Não está vazia"<<endl;}
}
int Lista::tamanhoLista(){
    return tamanho;
}
bool Lista::insere(int pos, int conteudo){
    if (tamanho ==0 && pos !=1 ) {return false;} 

    else if  (pos ==1){
        No* inicio = new No(); 
        inicio->setDado(conteudo);
        inicio->setProximo(cabeca);
        cabeca = inicio;
        ++tamanho;
    }
    else if (pos == tamanho+1){
        No* novo = new No();
        No* cauda = new  No();
        cauda = cabeca;
        novo->setDado(conteudo);
        while( cauda->getProximo()!=NULL){
            cauda = cauda->getProximo();
            
        }
        novo->setProximo(NULL);
        cauda->setProximo(novo);
        
        ++tamanho;
    }
    else {
        No* novo = new No();
        No* aux = new No() ;
        aux = cabeca;
        novo->setDado(conteudo);
        for (int i =1;i< pos-1 && aux!=NULL;i++ ){
            aux = aux->getProximo();
        }
        if (aux == NULL){ return false;}
        novo->setProximo(aux->getProximo());
        aux->setProximo(novo);

        ++tamanho;
    }
}
int Lista::obterElemento(int pos){
    if (tamanho == 0 || pos > tamanho || pos<1){return -1;}
    
    No* aux = new No();
    aux = cabeca;
    for( int i=1; i< pos;i++){
        aux = aux->getProximo();
    }
    return aux->getDado();
    
}
int Lista::modificaElemento(int pos,int conteudo){ 

    if( tamanho ==0 || pos>tamanho || pos <1){return -1; }

    No* aux = new No();
    aux = cabeca;
    for( int j=1; j< pos;j++){
        aux= aux->getProximo();
    }
    aux->setDado(conteudo);
    return 1;
}

bool Lista::remover(int pos){
    if( tamanho ==0 || pos>tamanho || pos <1){return false; }

    else if (pos == 1){
        No* aux = new No();
        aux = cabeca;
        cabeca= aux->getProximo();
        delete(aux);
        --tamanho;
    
    }
    else{
        No* aux = new No();
        No* aux_ante = new No();

        aux= cabeca;
        for (int i = 1;i<pos && aux!=NULL;i++){
            aux_ante =  aux;
            aux =aux->getProximo();
        }
        if (aux== NULL){
            return false;
        }
        aux_ante->setProximo(aux->getProximo());
        delete(aux);
        --tamanho;
    return true;
    }
}
bool Lista::mostrarLista(){
    No* aux = new No();
    aux =cabeca;
    if( tamanho ==0 ){return false; }
    
    for (int i=0;i<=tamanho && aux!=NULL;i++){
        cout<< aux->getDado()<<",";
        aux =aux->getProximo();
        
    }
    return true;
}


int main(void){
    Lista* teste = new Lista();
    teste->listaVazia();

    teste->insere(1,50);
    cout<< "inserindo 50 ma posição 1"<< endl;
    teste->insere(2,10);
    cout<< "inserindo 10 ma posição 2"<< endl;

    teste->insere(3,13);
    cout<< "inserindo 13 ma posição 3"<< endl;
    cout<< "mostrando lista: ";
    teste->mostrarLista();
    cout<< "\ntamanho da lista: "<<teste->tamanhoLista()<<endl;;

    teste->insere(2,33);
    cout<< "inserindo 33 ma posição 2"<< endl;
    cout<< "mostrando lista: ";
    teste->mostrarLista();
    cout<< "\ntamanho da lista: "<<teste->tamanhoLista()<<endl;

    cout<< "elemento na posição 2: "<<teste->obterElemento(2)<<endl;
    cout<<"removendo elemento da posição 3\n";
    teste->remover(3);
    cout<< "mostrando lista: ";
    teste->mostrarLista();
    cout<< "\ntamanho da lista: "<<teste->tamanhoLista()<<endl;;
 
    cout<<"modificando elmento na posição 3: ";
    teste->modificaElemento(3,15);
    cout<< "\nmostrando lista: ";
    teste->mostrarLista();

    

    cout<<" "<<endl;
    
    
    return 0;
}