//
// Created by misak on 19/03/2022.
//

#ifndef MAAKTNIETUIT_PARSEBANEN_H
#define MAAKTNIETUIT_PARSEBANEN_H
#include <string>
#include "parser.h"
#include "Verkeersparser.h"
#include <string>
#include <vector>

/**
 * Een sub classe van de parser, hier word de baan apart geparseerd
 */

class parseBanen {
private:
    std::vector<Baan*>* banen;

public:
    parseBanen();

    virtual ~parseBanen();

    /**
     *
     * @return
     */

    std::vector<Baan*>* getBanen();

    /**
     *
     * @param elem
     */
    void parseBaantje(TiXmlElement* elem);








};


#endif //MAAKTNIETUIT_PARSEBANEN_H
