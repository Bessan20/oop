#include<iostream>
using namespace std;

/*
    Class Cat with private member variables Name and Age.
    Public member functions to set and get these variables.

    - Constructor with no arguments initializes Name to "unknown" and Age to 0.
    - Constructor with arguments initializes Name and Age to provided values.
    - setName and getName functions to set and get Name respectively.
*/
class Cat {

    private :
    string Name = "";
    int Age = 0;

    public :
    Cat () {
        cout<<"The name is unknown and tha age is 0 \n";
    };

    Cat (string name , int age) : Name(name) , Age(age) {};

    void setName(string name)  {
        Name = name;
    }

    string getName() {
        return Name;
    }

    void setAge(int age)  {
        Age = age;
    }

    int getAge() {
        return Age;
    }

};
int main () 
{

    Cat c1;
    c1.setName("Tom");
    c1.setAge(5);
    cout<<"Cat Name : "<<c1.getName()<<"\n";
    cout<<"Cat Age : "<<c1.getAge()<<"\n";

    return 0;
}