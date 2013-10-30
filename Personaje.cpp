#include "Personaje.h"

Personaje::Personaje()
{
    //ctor
}

Personaje::~Personaje()
{
    //dtor
}

Personaje::Personaje(int hp,int puntos_de_ataque,string tipo)
{
    this->hp=hp;
    this->puntos_de_ataque=puntos_de_ataque;
    this->tipo=tipo;
}

void Personaje::recibirAtaque(int ataque)
{
    hp-=ataque;
}

void Personaje::atacar(Personaje *objetivo)
{
    objetivo->recibirAtaque(puntos_de_ataque);
}

void Personaje::imprimir()
{
    cout<<"Tipo: "<<tipo<<endl;
    cout<<"HP: "<<hp<<endl;
    cout<<"Puntos de Ataque: "<<puntos_de_ataque<<endl;
}
