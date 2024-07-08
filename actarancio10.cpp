#include <iostream>
#include <string>

using namespace std;

int main()
{

    class vehiculo
{
    public:
        vehiculo(){cout<<"Se creo un vehiculo"<<endl;}
        ~vehiculo(){cout<<"Se destruyo un vehiculo"<<endl;}

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

class automovil : public vehiculo
{
    public:
        automovil(){  cout<<"Se creo un auto"<<endl; }
        ~automovil(){ cout<<"Se destruyo un auto"<<endl;}

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

class moto : public vehiculo
{
    public:
        moto(){cout<<"Se creo una moto"<<endl;}
        ~moto(){cout<<"Se destruyo una moto"<<endl;}

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
    B.SetPrecio(6000);
    B.SetCombustible("Gas");
    B.SetCantPuertas(4);

    B.PrintVehiculo();
    B.TipoCantPuertas();


    return 0;
}


