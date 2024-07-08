#ifndef VEHICULO_H
#define VEHICULO_H


class vehiculo
{
    public:
        vehiculo();
        virtual ~vehiculo();

        string GetNombre() { return Nombre; }
        void SetNombre(string val) { Nombre = val; }

    protected:

    private:
        string Nombre;
};

#endif // VEHICULO_H
