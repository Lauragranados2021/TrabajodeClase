//
// Created by lauri on 10/11/2021.
//

#ifndef TRABAJODECLASE_HOUSE_H
#define TRABAJODECLASE_HOUSE_H

#include <string>
#include <ostream>
class House {

private:
    short int largo;
    short int ancho;
    short int ventanas;
    std::string direccion;
public:
    friend std::ostream &operator<<(std::ostream &os, const House &house);

public:
    short getLargo() const;

    void setLargo(short largo);

    short getAncho() const;

    void setAncho(short ancho);

    short getVentanas() const;

    void setVentanas(short ventanas);

    const std::string &getDireccion() const;

    void setDireccion(const std::string &direccion);


    virtual ~House();


public:
    House(short largo, short ancho, short ventanas, const std::string &direccion);
};


#endif //TRABAJODECLASE_HOUSE_H
