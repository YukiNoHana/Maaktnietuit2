//
// Created by galaqe on 15/03/22.
//

#include "parser.h"


parser::~parser() {}

bool parser::loadFile(std::string file) {
    if (!Doc.LoadFile("Verkeerssituatie.xml")) {
        std::cerr << Doc.ErrorDesc() << std::endl;
        return false;
    }

    root = Doc.FirstChildElement();
    if (root == NULL) {
        Doc.Clear();
        std::cerr << Doc.ErrorDesc() << std::endl;
        return false;
    }

    //TiXmlElement *elem = root->FirstChildElement(); elem
    for (TiXmlElement *elem = root->FirstChildElement(); elem != NULL;
        elem = elem->NextSiblingElement()){
        std::string elemName = elem->Value();
    }
    return true;
}

parser::parser() {}
