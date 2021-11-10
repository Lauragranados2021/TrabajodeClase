//
// Created by lauri on 10/11/2021.
//

#include "House.h"

House::House(short largo, short ancho, short ventanas, const std::string &direccion) : largo(largo), ancho(ancho),
                                                                                       ventanas(ventanas),
                                                                                       direccion(direccion) {}

short House::getLargo() const {
    return largo;
}

void House::setLargo(short largo) {
    House::largo = largo;
}

short House::getAncho() const {
    return ancho;
}

void House::setAncho(short ancho) {
    House::ancho = ancho;
}

short House::getVentanas() const {
    return ventanas;
}

void House::setVentanas(short ventanas) {
    House::ventanas = ventanas;
}

const std::string &House::getDireccion() const {
    return direccion;
}

void House::setDireccion(const std::string &direccion) {
    House::direccion = direccion;
}

House::~House() {

}

std::ostream &operator<<(std::ostream &os, const House &house) {
    os << "largo: " << house.largo << " ancho: " << house.ancho << " ventanas: " << house.ventanas << " direccion: "
       << house.direccion;
    return os;
}

