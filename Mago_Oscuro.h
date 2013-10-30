#ifndef MAGO_OSCURO_H
#define MAGO_OSCURO_H

#include "Personaje.h"

class Mago_Oscuro : public Personaje
{
    public:
        Mago_Oscuro(int hp, int puntos_de_ataque);
        bool super_rayo;
        void activarPoder();
        void atacar(Personaje *objetivo);
        virtual ~Mago_Oscuro();
    protected:
    private:
};

#endif // MAGO_OSCURO_H
