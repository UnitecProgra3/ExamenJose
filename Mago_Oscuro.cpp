#include "Mago_Oscuro.h"

Mago_Oscuro::~Mago_Oscuro()
{
    //dtor
}

Mago_Oscuro::Mago_Oscuro(int hp, int puntos_de_ataque)
{
    this->hp = hp;
    this->puntos_de_ataque = puntos_de_ataque;
    this->super_rayo=false;
    this->tipo = "Mago Oscuro";
}

void Mago_Oscuro::activarPoder()
{
    super_rayo=true;
}

void Mago_Oscuro::atacar(Personaje *objetivo)
{
    if(super_rayo)
    {
        objetivo->recibirAtaque(puntos_de_ataque*2);
    }else
    {
        objetivo->recibirAtaque(puntos_de_ataque);
    }
}
