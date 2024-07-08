#ifndef VEHICULO_H
#define VEHICULO_H
#include <iostream>
#include <string>

using namespace std;

class vehiculo
{
    public:
        vehiculo();
        virtual ~vehiculo();

        string GetNombre() { return Nombre; }
        void SetNombre(string val) { Nombre = val;}
        string GetMarca() { return Marca; }
        void SetMarca(string val) { Marca = val;}
        int GetNumRuedas() { return NumRuedas; }
        void SetNumRuedas(int val) { NumRuedas = val; }
        float GetPrecio() { return Precio; }
        void SetPrecio(float val) { Precio = val; }
        string GetCombustible() { return Combustible; }
        void SetCombustible(string val) { Combustible = val; }

        void PrintVehiculo(){
        cout<<"\nNombre del vehiculo: " << Nombre <<"   Marca: " << Marca <<"    Precio: " << Precio << "\nTipo de Combustible: " << Combustible << "   Numero de ruedas: " << NumRuedas <<endl;
        }

    protected:

    private:
        string Nombre;
        string Marca;
        int NumRuedas;
        float Precio;
        string Combustible;
};

#endif // VEHICULO_H
