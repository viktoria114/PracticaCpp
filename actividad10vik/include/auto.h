#ifndef AUTO_H
#define AUTO_H

#include "vehiculo.h"


class automovil : public vehiculo
{
    public:
        automovil();
        virtual ~automovil();

        int GetCantPuertas() { return CantPuertas; }
        void SetCantPuertas(int val) { CantPuertas = val; }

        void TipoCantPuertas(){
        if (CantPuertas==2){ cout <<"Tipo: Coupe" <<endl;}
        if (CantPuertas==4){ cout <<"Tipo: Sedan" <<endl;}
        }
    protected:

    private:
        int CantPuertas;
};

#endif // AUTO_H
