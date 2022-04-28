//
// Created by misak on 10/03/2022.
//

#ifndef UNTITLED19_VOERTUIG_H
#define UNTITLED19_VOERTUIG_H
#include <iostream>


class Voertuig {
private:
    std::string baan;
    int positie;
public:
    Voertuig();

    /**
     * REQUIRE: Constructor van voertuig
     * @return Positie van het voertuig int ervan op de baan
     */
    int getPositie() const;

    /**
     * REQUIRE: Constructor van het voertuig
     * ENSURE: getPositie == pos
     * @param pos Op welke lengte van de baan staat het voertuig
     */
    void setPositie(int pos);

    /**
     * REQUIRE: Constructor van het voertuig
     * @return String: Baan van het voertuig
     */

    const std::string &getBaan() const;

    /**
     * REQUIRE: Constructor van het voertuig
     * ENSURE: getBaan = baantje
     * @param baantje Baan van het voertuig bekregen bij getBaan, op die baan zetten
     */

    void setBaan(const std::string &baantje);

    virtual ~Voertuig();

    /**
     * REQUIRE: Voertuig informatie, baan en positie
     * @return String: Informatie van het voertuig
     */

    std::string getInfo();

    /**
     * Weergave van het voertuig
     */

    void printVoertuig();

};


#endif //UNTITLED19_VOERTUIG_H
