#ifndef MOTO_H
#define MOTO_H

#include <vehiculo.h>


class moto : public vehiculo
{
    public:
        moto();
        virtual ~moto();

        string GetTipo() { return Tipo; }
        void SetTipo(string val) { Tipo = val; }

        void PaqueTipo(){
        if (Tipo=="Cross"){ cout <<"Tipo: Cross \nSe usa en circuitos off road, terrenos pedregosos, con rampas para realizar competencias." <<endl;}
        if (Tipo=="Scooter"){ cout <<"Tipo: Scooter \nIdeal para la ciudad. Es ligera, diseñada para tener una experiencia de manejo comoda y sencilla."<<endl;}
        if (Tipo=="Cruiser"){ cout <<"Tipo: Cruiser \nSon motos pesadas que dan comodidad al conductor para largos recorridos." <<endl;}
        }

    protected:

    private:
        string Tipo;
};

#endif // MOTO_H
