//
// Created by Krul Kamil on 21.06.2023.
//
#include "Vehicle.h"

#ifndef KOLOKWIUM2_SAMOCHOD_H
#define KOLOKWIUM2_SAMOCHOD_H


class Cars: public Vehicle {
private:
    std::string driveTrain;
    int pessibleTotalWeight;
public:
    Cars (const std::string& brand, std::string model, int productionYear, int wheelCount, const std::string& driveTrain, int GVW);
    bool czyDostawczy () const
    {
        if (pessibleTotalWeight > 3500){
            return false;
        }
        else {return true;}
    }
void doTekstu() const override {
    std::cout <<
              "Marka:" << brand << std::endl <<
              "Model: " << model << std::endl <<
              "Rok produkcji : " << vehProductionYear << std::endl <<
              "Liczba kol: " << wheelCount << std::endl <<
              "Rodzaj napedu : " << driveTrain << std::endl <<
              "Dop masa calk: " << pessibleTotalWeight;
}
};


#endif //KOLOKWIUM2_SAMOCHOD_H
