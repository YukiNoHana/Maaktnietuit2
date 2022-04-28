//
// Created by galaqe on 15/03/22.
//

#ifndef TTT_VERKEERSSITUATIEPARSER_H
#define TTT_VERKEERSSITUATIEPARSER_H

#include "parser.h"
#include "../tinyxml_2_6_2/tinyxml/tinyxml.h"
#include <string>
#include "../Baan.h"
#include "../Verkeerslicht.h"
#include "../Voertuig.h"

/**
 * Oorspronkelijk sub classe van de parser, was bedoeling om alle parsers hier te samen uit te parsen,
 * maar uiteindelijk 3 sub classes gemaakt voor alles apart te parsen.
 */
class Verkeersparser:public parser {
private:
    std::string readElement(TiXmlElement *elem, const char* attr);
    Voertuig* voertuig;
    Baan* baan;
    Verkeerslicht* verkeerslicht;

public:
    /**
     * Constructor van verkeersparser
     */
    Verkeersparser();
    virtual ~Verkeersparser();

    /**
     *
     * @param elem Dit element representeerd voor alle voertuigen
     * @return Zal het element parsen en dan teruggeven van een pointer naar een vector voertuigen
     */
    Voertuig* parseVoertuig(TiXmlElement *elem);

    /**
     * Pointer naar alle voertuigen
     */

    Voertuig* getVoertuig();

    /**
     *
     * @param elem Dit element representeerd voor alle banen
     * @return Zal het element parsen en dan teruggeven van een pointer naar vector van banen
     */
    Baan* parseBaan(TiXmlElement* elem);

    /**
     * Pointer naar alle banen
     */

    Baan* getBaan();

    /**
     *
     * @param elem Dit element representeerd voor alle verkeerslichten
     * @return Zal het element parsen en dan teruggeven van een vector van verkeerslichten
     */
    Verkeerslicht* parseVerkeerslicht(TiXmlElement* elem);

    /**
     * Pointer naar alle verkeerslichten
     */

    Verkeerslicht* getVerkeerslicht();
};


#endif //TTT_VERKEERSSITUATIEPARSER_H
