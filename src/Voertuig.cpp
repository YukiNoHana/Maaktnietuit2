//
// Created by misak on 10/03/2022.
//

#include "Voertuig.h"
#include <iostream>

Voertuig::Voertuig() {}

Voertuig::~Voertuig() {

}

int Voertuig::getPositie() const {
    return positie;
}
void Voertuig::setPositie(int pos) {
    positie = pos;
}

const std::string &Voertuig::getBaan() const {
    return baan;
}

void Voertuig::setBaan(const std::string &baantje) {
    Voertuig::baan = baantje;
}

std::string Voertuig::getInfo(){
    std::string vehicle;
    vehicle += getBaan();
    vehicle += getPositie();
    return vehicle;
}

void Voertuig::printVoertuig() {
    Voertuig bmw;
    std::cout << "Tijd: " << '\n';
    std::cout << "positie: " << bmw.getPositie() << '\n';
    std::cout << "baan: " << bmw.getBaan() << std::endl;
}

//Gebruik maken van cout om te printen, je kan een integer ook printen