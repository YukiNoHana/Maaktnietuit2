//
// Created by misak on 10/03/2022.
//

#ifndef UNTITLED19_BAAN_H
#define UNTITLED19_BAAN_H

#include "Utility.h"

class Baan {
private:
    /**
     * Initcheck to see if it's properly initialized
     */
    Baan* _initCheck;
    std::string naam;
    int lengte;
public:
    Baan();

    /**
     \n REQUIRE: constructor baan, "Geen baan gevonden bij baan invoer"
     \n ENSURE: Moet een string zijn, de naam van de baan
     */

    bool properlyInitialized();
    const std::string& getNaam() const;

    /**
     \n REQUIRE : Properly initialized
     \n REQUIRE : Een naam hebben van de baan
     \n ENSURE : getNaam == name
     */
    void setNaam(const std::string& name);

    /**
     \n REQUIRE: Constructor van de baan
     \n ENSURE: Een integer met de lengte van de baan
     */
    int getLengte() const;

    /**
     \n REQUIRE: Constructor van baan
     \n REQUIRE: Lengte hebben van de baan
     \n ENSURE: getLengte == length in int
     */

    void setLengte(int length);

    /**
     \n ENSURE: Informatie van de baan weergeven (de naam en lengte van de baan)
     */

    std::string getInfo();

    virtual ~Baan();

};


#endif //UNTITLED19_BAAN_H
