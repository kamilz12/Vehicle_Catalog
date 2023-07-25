
#include "VehicleCatalog.h"
#include <iostream>

/*Function */
int VehicleCatalog::getLastCatalogMapID(){
    if (catalog.empty()) {
        std::cout << "Map is empty!";
        return -1;
    }
    // Value of last ID in map
    return catalog.rbegin()->first;
}

void VehicleCatalog::loadVehicleDataFromFile (const std::string& fileName){
    std::ifstream inputFile (fileName);
    if (!inputFile){
        std::cerr << "Error, unable to open this file";
    }
    else {
        std::string line;
        while (std::getline(inputFile, line)) {
            std::istringstream streamLine(line);

            std::string tempStringToInt; // it's used to read a string number, and then it's converted to int by stoi()
            int ID, wheelCount, productionYear;
            std::string vehType, brand, model;
            Vehicle* vehicle;

            /*Reading ID*/
            std::getline(streamLine, tempStringToInt, ',');
            ID = stoi (tempStringToInt);

            std::getline(streamLine,vehType,',');

            std::getline(streamLine,brand,',');

            std::getline(streamLine,model,',');

            /*Reading wheel count*/
            std::getline(streamLine, tempStringToInt, ',');
            wheelCount = stoi(tempStringToInt);

            /*Reading production year*/
            std::getline(streamLine, tempStringToInt, ','); //reading production Year
            productionYear = stoi (tempStringToInt);

            if (vehType == "Car") {
                int GVW;
                std::string driveTrain;

                std::getline(streamLine,driveTrain,',');

                /*reading GVW*/
                std::getline(streamLine, tempStringToInt, ',');
                GVW = stoi(tempStringToInt);

                vehicle = new Car (brand, model, productionYear, wheelCount, driveTrain, GVW);
                addVehicle(vehicle, ID);
            }
            else if (vehType == "Motorcycle") {
                int vMax;
                std::string motoType;

                std::getline (streamLine,tempStringToInt,','); //Reading vMax
                vMax = stoi(tempStringToInt);

                std::getline(streamLine,motoType,',');

                vehicle = new Motorcycle (brand, model, productionYear, wheelCount, vMax, motoType);
                addVehicle(vehicle,ID);
            }
        }
    }
    inputFile.close ();
}

int VehicleCatalog::getAvailableID (){
    int nextID = 0;
    while(!isIDNotPresentInCatalog(nextID)) {
        nextID++;
    }
    return nextID;
}

void VehicleCatalog::addVehicle (Vehicle* vehicle){
    int freeID = getAvailableID();
    catalog [freeID] = vehicle;
}



void VehicleCatalog::editVehicle(Vehicle* vehicle, int ID)
{
    catalog[ID] = vehicle;
}

void VehicleCatalog::busyID (Vehicle* vehicle) {
    int choose;
    std::cout << "Do you want to add a vehicle to the next available ID? type [0 - no, 1 -yes]: ";
    std::cin >> choose;
    switch (choose){
        case 0:
            break;
        case 1:
            addVehicle(vehicle);
            break;
        default:
            std::cout << "Wrong choose";
            break;
    }
}

void VehicleCatalog::addVehicle (Vehicle* vehicle, int ID){
    if(isIDNotPresentInCatalog(ID))
    {
        catalog [ID] = vehicle;
    }

    else  {
        std::cerr << "You're trying to add a new vehicle when one already exists on ID: " << ID << std::endl;
        busyID(vehicle);
    }
}

int VehicleCatalog::getAvailableID (int startLookUpID){
    while(!isIDNotPresentInCatalog(startLookUpID)) {
        startLookUpID++;
    }
    return startLookUpID;
}

/*We are printing information about each element in our map*/
void VehicleCatalog::showInfo() const{
    if (catalog.empty())
    {
        std::cout << std::endl << "You don't have any object in your catalog" << std::endl;
    }
    for (const auto& element : catalog) {
        std::cout << "ID: " << element.first << std::endl;
        if (element.second) {
            element.second->writeToText();
        } else {
            std::cout << "Vehicle object is null." << std::endl;
        }
        std::cout << std::endl;

    }
}
Vehicle* VehicleCatalog::operator[](int ID){
    if (catalog.count(ID) == 0) {
        std::cout << "Vehicle doesn't exist." << std::endl;
        return nullptr;
    }
    return catalog [ID];
}

void VehicleCatalog::removeVehicle(int ID) {
    catalog.erase(ID);
}

void VehicleCatalog::saveVehicleDataToFile(const std::string &fileName) {
    std::ofstream outputFile (fileName);
    if (!outputFile){
        std::cerr << "Error: can't open file" << fileName;
    }
    if (catalog.size() > 0){
        for (const auto& element : catalog) {
            outputFile << element.first << "," << element.second->saveText();
        }
    }
    outputFile.close();
}
