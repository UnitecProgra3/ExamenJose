#ifndef MAGO_BLANCO_H
#define MAGO_BLANCO_H

#include "Personaje.h"

class Mago_Blanco : public Personaje
{
    public:
        Mago_Blanco(int hp, int puntos_de_ataque);
        void activarPoder();
        virtual ~Mago_Blanco();
    protected:
    private:
};

#endif // MAGO_BLANCO_H
