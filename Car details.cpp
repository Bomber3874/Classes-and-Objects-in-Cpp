/*Sanidhya Singh
24070123140
ENTC B2
*/

#include <iostream>
using namespace std;

class Car{
public:
    string brand;
    string model;
    int year;
    float price;

    void displayDetails() {
        cout << "Car Brand: " << brand << endl;
        cout << "Car Model: " << model << endl;
        cout << "Year of Manufacture: " << year << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {
    Car car1;
    car1.brand = "Toyota";
    car1.model = "Camry";
    car1.year = 2020;
    car1.price = 24000.00;

    Car car2;
    car2.brand = "Honda";
    car2.model = "Civic";
    car2.year = 2021;
    car2.price = 22000.00;

    cout << "Details of Car 1:" << endl;
    car1.displayDetails();
    
    cout << "\nDetails of Car 2:" << endl;
    car2.displayDetails();

    return 0;
}

/*Output
Details of Car 1:
Car Brand: Toyota
Car Model: Camry
Year of Manufacture: 2020
Price: $24000

Details of Car 2:
Car Brand: Honda
Car Model: Civic
Year of Manufacture: 2021
Price: $22000
*/