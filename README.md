# Vehicle_Catalog
Vehicle Catalog is a catalog of cars and motocycles. It's allow us to add new vehicles and show information about them. It was based on OOP paradigms with using polymporhism and inheritance in C++ programming language.
We can add to our catalog brand, model, year of production, count of wheels and much more things for indivudal type of our vehicle. At the moment, there are plans to create a GUI and add the ability to delete, edit, save and read information from the file. 

    Vehicle Class: This is an abstract base class that represents a generic vehicle. It contains common attributes like brand, model, vehProductionYear, and wheelCount. It also has a pure virtual function toText() that needs to be implemented in derived classes.

    Motocycle Class: This class is derived from Vehicle and represents a motorcycle. It has additional attributes specific to motorcycles, such as vMax (maximum speed) and type.

    Cars Class: This class is also derived from Vehicle and represents a car. It has additional attributes specific to cars, such as driveTrain and possibleTotalWeight.

    VehicleCatalog Class: This class is responsible for managing the collection of vehicles. It uses a map to store vehicles with unique IDs as keys. It has methods to add vehicles to the catalog, display information about the vehicles in the catalog, and access a specific vehicle by its ID.

The main function initializes a VehicleCatalog object, adds cars to the catalog through user input, and then displays information about all the vehicles in the catalog.

The program allows users to create a catalog of cars and motorcycles, providing details such as brand, model, production year, wheel count, and other specific attributes based on the vehicle type. It then organizes and displays this information in a structured manner.
