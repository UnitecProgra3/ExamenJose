#include "Guerrero.h"

Guerrero::~Guerrero()
{
    //dtor
}

Guerrero::Guerrero(int hp, int puntos_de_ataque)
{
    this->hp = hp;
    this->puntos_de_ataque = puntos_de_ataque;
    this->tipo = "Guerrero";
}

void Guerrero::activarPoder()
{
    this->hp= this->hp/2;
    this->puntos_de_ataque=this->puntos_de_ataque*2;
}
