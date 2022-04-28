//
// Created by misak on 10/03/2022.
//

#ifndef UNTITLED19_VERKEERSLICHT_H
#define UNTITLED19_VERKEERSLICHT_H
#include "Utility.h"

class Verkeerslicht{
private:
    std::string baan;
    int positie;
    int cyclus;
public:
    Verkeerslicht();

    /**
     \n REQUIRE: Moet een baan bevatten
     \n ENSURE: Integer met positie van de baan
     */
    int getPositie() const;

    /**
     \n REQUIRE: Bevat een baan
     \n REQUIRE: Bevat positie van de baan
     \n ENSURE: getPositie = pos; positie van het verkeerslicht op de baan
     */
    void setPositie(int pos);

    /**
     \n REQUIRE: constructor van stoplicht
     \n ENSURE: Integer van cyclus voor verkeerslicht
     */
    int getCyclus() const;

    /**
     \n REQUIRE: Constructor van verkeerslicht
     \n REQUIRE: Stoplicht kan van cycles veranderen
     \n REQUIRE: getCyclus = cycle
     */
    void setCyclus(int cycle);

    /**
     \n REQUIRE: Constructor van verkeerslicht
     \n ENSURE: String naam van de baan
     */
    const std::string &getBaan() const;

    /**
     \n REQUIRE: Een baan naam
     \n REQUIRE: Constructor verkeerslicht
     \n ENSURE: getBaan == baan
     */

    void setBaan(const std::string &baan);

    /**
     *
     * @return String: informatie van de baan
     */
    std::string getInfo();

    virtual ~Verkeerslicht();

};


#endif //UNTITLED19_VERKEERSLICHT_H
