//
// Created by misak on 10/03/2022.
//

#include "Baan.h"
#include "DesignByContract.h"

Baan::Baan() {
}

Baan::~Baan() {
}

bool Baan::properlyInitialized() {
    return _initCheck = this;
}

const std::string& Baan::getNaam() const {
    return naam;
}


void Baan::setNaam(const std::string& name) {
    REQUIRE(this->properlyInitialized(),
            "Baan was not properly initalized");
    ENSURE()
    naam = name;
}

int Baan::getLengte() const {
    return lengte;
}

void Baan::setLengte(int length) {
    lengte = length;
}

std::string Baan::getInfo() {
    std::string roady;
    roady += "baan:" + getNaam();
    roady += "lengte:";
    roady += getLengte();
    return roady;
}


