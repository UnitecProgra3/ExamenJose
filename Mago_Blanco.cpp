#include "Mago_Blanco.h"

Mago_Blanco::~Mago_Blanco()
{
    //dtor
}

Mago_Blanco::Mago_Blanco(int hp, int puntos_de_ataque)
{
    this->hp = hp;
    this->puntos_de_ataque = puntos_de_ataque;
    this->tipo="Mago Blanco";
}

void Mago_Blanco::activarPoder()
{
    this->hp= this->hp*2;
    this->puntos_de_ataque=this->puntos_de_ataque/2;
}
