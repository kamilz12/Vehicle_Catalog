//
// Created by Krul Kamil on 21.06.2023.
//
#include "Vehicle.h"
#ifndef KOLOKWIUM2_MOTOCYKL_H
#define KOLOKWIUM2_MOTOCYKL_H


class Motocycle : public Vehicle {
private:
    int vMax;
    const std::string type;
public:
    Motocycle(const std::string &vehicleBrand, const std::string &vehicleModel, const int vehicleProductionYear,
              const int vehicleWheelCount, int vMax_parameter, const std::string& typ_parameter);


    void doTekstu()  const override{
        std::cout <<
                  "Marka:" << brand << std::endl <<
                  "Model: " << model << std::endl <<
                  "Rok produkcji : " << vehProductionYear << std::endl <<
                  "Liczba kol: " << wheelCount << std::endl <<
                  "vmax : " << vMax << std::endl <<
                  "type: " << type << std::endl;
    }
};




#endif //KOLOKWIUM2_MOTOCYKL_H
