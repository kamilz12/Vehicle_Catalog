# Vehicle Catalog - C++ Project

Vehicle Catalog is a C++ program that allows users to create and manage a catalog of cars and motorcycles. The program leverages object-oriented programming (OOP) principles, including polymorphism and templates, to efficiently handle different types of vehicles.

## Key Features

Vehicle Class (Vehicle.h):
        Base class representing a generic vehicle.
        Contains common attributes like brand, model, production year, and wheel count.
        Provides pure virtual functions writeToText() and saveText(), which must be implemented by derived classes.

    Car Class (Car.h):
        Derived class of Vehicle.
        Represents a specific type of vehicle, i.e., a car.
        Contains additional attributes like drivetrain and possible total weight (GVW).
        Implements writeToText() and saveText() functions for printing and saving car-specific information.

    Motorcycle Class (Motorcycle.h):
        Derived class of Vehicle.
        Represents a specific type of vehicle, i.e., a motorcycle.
        Contains additional attributes like maximum speed and type.
        Implements writeToText() and saveText() functions for printing and saving motorcycle-specific information.

    VehicleCatalog Class (VehicleCatalog.h):
        Manages a collection of vehicles using a map.
        Provides functionality to load vehicle data from a file, add vehicles to the catalog, edit vehicle information, and save the data back to a file.
        Contains helper functions to handle vehicle ID management and displaying vehicle information.
        Implements templated functions addVehicles and inputVehicleData to add multiple vehicles of different types to the catalog.

    Main Function (main.cpp):
        Defines the entry point of the program.
        Creates an instance of VehicleCatalog to manage the vehicles.
        Loads vehicle data from a file.
        Adds vehicles to the catalog using different methods, including manual input and adding multiple vehicles at once.
        Displays vehicle information and saves the updated data back to the file.


## Future Improvements

    Implement a graphical user interface (GUI) for a more user-friendly experience.
    Allow users to search and sort the vehicle catalog based on specific criteria.

## Done improvements  
- Add functionalities for vehicle deletion, editing, saving, and reading information from file. 