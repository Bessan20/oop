#include<iostream>
using namespace std;

/*
 Parameterized Constructor:
Write a Java program to create a class called Dog with instance variables name and color. Implement a parameterized constructor that takes name and color as parameters and 
initializes the instance variables. Print the values of the variables.
*/

class Dog {

    private :
    string name;
    string color;

    public :
    Dog(string name , string color) {

        cout<<this->name<<" "<<this->color<<"\n";//* this will not print any thing
        cout<<name<<" "<<color<<"\n";//* values of the parameters
        this->name = name;
        this->color = color;
        cout<<this->name<<" "<<this->color<<"\n";//* values of the parameters stored in this->name
        cout<<name<<" "<<color<<"\n";//* values of parameters

    }
};

int main () {

    Dog myDog("Max","Brown");
    return 0;
}