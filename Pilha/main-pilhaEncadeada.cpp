#include <iostream>
#include "pilhaEncadeada.hpp"
using namespace std;

No::No(){
    this->proximo = NULL;
}
void No::setDado(int conteudo){
    this-> dado= conteudo;
}
int No::getDado(){
    return dado;
}
void No::setProximo(No* nprox){
    this->proximo = nprox;
}
No* No::getProximo(){
    return proximo;
}

 Pilha::Pilha(){
    tamanho = 0;
    topo = NULL;
}

void Pilha::pilhaVazia(){
    if (tamanho == 0){
        cout<<" está vazia";
    }else{cout<<"não está vazia";}
}
int Pilha::tamnanhoPilha(){
    
    return tamanho;
}
void Pilha::push(int conteudo){
    No* novo = new No();
    novo->setDado(conteudo);

    novo->setProximo(topo);
    topo= novo;
    ++tamanho;
    
}

bool Pilha::pop(){
    if (tamanho==0){return false;}
    No* aux = new No();
    aux= topo ;
    topo = topo->getProximo();
    delete aux;
    --tamanho;
    return true;
}

int Pilha::top(){
    return topo->getDado();
}

int main (void){
    Pilha teste=  Pilha();
    
    teste.pilhaVazia();
    teste.push(3);
    teste.push(15);
    teste.push(78);
    cout<<endl<<"inserindo o valor 3"<<endl;
    cout<<"inserindo o valor 15"<<endl;
    cout<<"inserindo o valor 78"<<endl;

    cout<<"tamanho da pilha: "<<teste.tamnanhoPilha()<<endl;
    cout<<"elmento do topo: "<<teste.top()<<endl;
    teste.pop();
    cout<<"removendo elemento"<<endl;
    cout<<"tamanho da pilha: "<<teste.tamnanhoPilha()<<endl;
    cout<<"elmento do topo: "<<teste.top()<<endl;


    return 0;
}