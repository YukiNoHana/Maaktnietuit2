//
// Created by misak on 28/04/2022.
//

#ifndef TRAFFICSITUATION_VERKEERSSITUATIE_H
#define TRAFFICSITUATION_VERKEERSSITUATIE_H

#include "Utility.h"


class Verkeerssituatie {
private:
    std::string naam;

public:
    Verkeerssituatie();

    virtual ~Verkeerssituatie();

    bool properlyInitialized();

};


#endif //TRAFFICSITUATION_VERKEERSSITUATIE_H
