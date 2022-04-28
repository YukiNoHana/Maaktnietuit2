//
// Created by misak on 20/03/2022.
//

#ifndef MAAKTNIETUIT_PARSEVERKEERSLICHT_H
#define MAAKTNIETUIT_PARSEVERKEERSLICHT_H
#include <string>
#include "parser.h"
#include "Verkeersparser.h"
#include <string>
#include <vector>

/**
 * Sub classe van parser, hier wordt verkeerslichten in geparseerd
 */
class parseVerkeerslicht {
private:
    std::vector<Verkeerslicht*>* verkeerslichten;
public:
    parseVerkeerslicht();

    virtual ~parseVerkeerslicht();

    std::vector<Verkeerslicht*>* getVerkeerslichten();

    void parseVerkeerslichtjes(TiXmlElement* elem);

};


#endif //MAAKTNIETUIT_PARSEVERKEERSLICHT_H
