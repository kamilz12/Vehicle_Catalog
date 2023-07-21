Vehicle Catalog - C++ Project

Vehicle Catalog is a C++ program that allows users to create and manage a catalog of cars and motorcycles. The program leverages object-oriented programming (OOP) principles, including polymorphism and templates, to efficiently handle different types of vehicles.
Key Features

    Vehicle Class: This is an abstract base class representing a generic vehicle. It holds common attributes like brand, model, year of production, and wheel count. It also defines a pure virtual function writeToText() that must be implemented in derived classes.

    Cars Class: Derived from the Vehicle class, this class represents a car. It includes additional attributes specific to cars, such as the type of drive train and possible total weight.

    Motocycle Class: Also derived from the Vehicle class, this class represents a motorcycle. It contains additional attributes specific to motorcycles, such as maximum speed (vMax) and type.

    VehicleCatalog Class: This class manages the collection of vehicles using a map to store vehicles with unique IDs as keys. It provides methods to add vehicles to the catalog, display information about them, and access specific vehicles by their IDs.

    Template Functions: The project utilizes template functions to enable users to input data for both Cars and Motocycles efficiently.

Usage

    Clone the repository to your local machine.
    Compile the C++ source files using your preferred compiler.
    Run the executable to launch the Vehicle Catalog program.
    Follow the on-screen instructions to add vehicles to the catalog.

Future Improvements

    Implement a graphical user interface (GUI) for a more user-friendly experience.
    Add functionalities for vehicle deletion, editing, saving, and reading information from file.
    Allow users to search and sort the vehicle catalog based on specific criteria.
