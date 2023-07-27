
#ifndef VEHICLE_CATALOG_VEHICLECATALOG_H
#define VEHICLE_CATALOG_VEHICLECATALOG_H

#include "Vehicle.h"
#include "Motorcycle.h"
#include "Car.h"

#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

class VehicleCatalog {
private:
    std::map<int, Vehicle*> catalog;
public:
    ~VehicleCatalog() {}
    void loadVehicleDataFromFile (const std::string& fileName);
    void saveVehicleDataToFile (const std::string& fileName);
    int getLastCatalogMapID();
    void editVehicle(Vehicle* vehicle, int ID);
    int getAvailableID ();                      //get available ID counting 0-free ID
    int getAvailableID (int startLookUpID);     // get available ID counting startLookUpID - freeID
    void addVehicle (Vehicle* vehicle);         // Add vehicle to next ID in order
    void addVehicle (Vehicle* vehicle, int ID); // Add vehicle to specified ID
    void showInfo() const;
    void busyID (Vehicle* vehicle);
    template <typename VehicleType>
    VehicleType* inputVehicleData (){

    }

    /*This method allow us to add more than one vehicle to our map catalog */
    template <typename VehicleType>
    void addVehicles(std::vector<VehicleType*>&veh_vector){
        int numVehiclesToAdd = static_cast<int>(veh_vector.size());
        /*Looking for first not used ID*/
        int nextID = getAvailableID();
        // Add vehicles to the catalog with sequential IDs
        for(int i=0; i<numVehiclesToAdd; i++) {
            nextID = getAvailableID(nextID);
            addVehicle(veh_vector[i], nextID);
            nextID++;
        }
    }

    void removeVehicle (int ID);
    const std::map<int, Vehicle*>& getCatalogMap() const;
    bool isIDNotPresentInCatalog(int ID);
    Vehicle* operator[](int ID);
};

#endif //VEHICLE_CATALOG_VEHICLECATALOG_H
