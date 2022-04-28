//
// Created by misak on 20/03/2022.
//

#ifndef MAAKTNIETUIT_PARSEVOERTUIGEN_H
#define MAAKTNIETUIT_PARSEVOERTUIGEN_H
#include <string>
#include "parser.h"
#include "Verkeersparser.h"
#include <string>
#include <vector>

/**
 * Sub klasse van parser, hierin worden de voertuigen geparseerd
 */
class parseVoertuigen {
private:
    std::vector<Voertuig*>* voertuigen;
public:
    parseVoertuigen();

    virtual ~parseVoertuigen();

    void parseVoertuigje(TiXmlElement* elem);

    std::vector<Voertuig*>* getVoertuigen();
};


#endif //MAAKTNIETUIT_PARSEVOERTUIGEN_H
