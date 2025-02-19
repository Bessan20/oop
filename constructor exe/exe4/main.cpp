#include<iostream>
using namespace std;

class Car {

    public :
    string model;
    int year;

    Car(string model = "Kia" , int year = 2014) {
        this->model = model;
        this->year = year;
        cout << "Car constructor called with model: " << model << ", year: " << year << endl;
    }
};

int main()
{

    Car car1;
    Car car2("Ford" , 2019);
    
    return 0;

}