//
// Created by galaqe on 15/03/22.
//

#ifndef TTT_PARSER_H
#define TTT_PARSER_H

#include "../tinyxml_2_6_2/tinyxml/tinyxml.h"
#include <string>
#include <iostream>

/**
 * Basis klasse van parsers
 */
class parser {
private:
    TiXmlElement *root;
    TiXmlDocument Doc;
public:
    parser();
    virtual ~parser();

    /**
     *
     * @param file Inladen van een file
     * @return Een bool met true of false of het file gelezen kan worden
     */
    bool loadFile(std::string file);

    /**
     *
     * @return Verkijgen van root van het document/text, teruggeven in TiXmlElement
     */
    TiXmlElement* getRoot(){return root;}


};


#endif //TTT_PARSER_H
