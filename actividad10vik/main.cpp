#include <iostream>
#include <string>

#include "vehiculo.h"
#include "auto.h"
#include "moto.h"


using namespace std;

int main()
{

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


    cout << "Clases Vehiculo!" << endl;

    moto A;
    A.SetNombre("YZ 450F");
    A.SetMarca("Yamaha");
    A.SetNumRuedas(2);
    A.SetPrecio(10.499);
    A.SetCombustible("Gasolina");
    A.SetTipo("Cross");

    A.PrintVehiculo();
    A.PaqueTipo();

    automovil B;
    B.SetNombre("Siena");
    B.SetMarca("Fiat");
    B.SetNumRuedas(4);
    B.SetPrecio(6.000);
    B.SetCombustible("Gas");
    B.SetCantPuertas(4);

    B.PrintVehiculo();
    B.TipoCantPuertas();


    return 0;
}

vehiculo::vehiculo()
{
    cout<<"Se creo un vehiculo"<<endl;
}

vehiculo::~vehiculo()
{
    cout<<"Se destruyo un vehiculo"<<endl;
}

