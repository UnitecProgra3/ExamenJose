#include <iostream>
#include <vector>
using namespace std;

#include "Personaje.h"
#include "Curador.h"
#include "Tanque.h"
#include "Guerrero.h"
#include "Mago_Oscuro.h"
#include "Mago_Blanco.h"

int main()
{
    vector<Personaje*>personajes;


    personajes.push_back(new Curador(70,10,15));
    personajes.push_back(new Tanque(200,3));
    personajes.push_back(new Mago_Blanco(100,10));
    personajes.push_back(new Mago_Oscuro(75,20));
    personajes.push_back(new Guerrero(150,15));

    for(int i=0;i<personajes.size();i++)
    {
        personajes[i]->imprimir();
    }
    cout<<"---------Activar Poder---------"<<endl;

    for(int i=0;i<personajes.size();i++)
    {
        personajes[i]->activarPoder();
    }

    for(int i=0;i<personajes.size();i++)
    {
        personajes[i]->imprimir();
    }

    cout<<"---------Recibir ataque---------"<<endl;

    for(int i=0;i<personajes.size();i++)
    {
        personajes[i]->recibirAtaque(10);
    }

    for(int i=0;i<personajes.size();i++)
    {
        personajes[i]->imprimir();
    }

    return 0;
}
