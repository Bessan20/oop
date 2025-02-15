#include<iostream>
#include<string>
using namespace std;

class Human
{

private:
       string Name;
       int Age ;

public:
     Human() {
        cout << "Welcome to my app\n";
    
     }

     Human(string name) {
        cout << "Hello " << name << "\n";
        
     }

     Human(int age) {
        cout << "Your age is : " << age <<"\n";
     }

     Human(string name , int age) {
        Age = age;
        Name = name;
        cout << "Hello " << name << " , your age is " << age << "\n";
     }

     string getName() {

        return Name;
     }

     void setName(string name) {

        Name = name;
     }

     int getAge() {

        return Age;
     }

     void setAge(int age) {

        Age = age;
     }
};
int main()
{


    Human human1  , human2("bessan") , human3(21) ,human4 ("bessan",21);
    cout<<"\n";
    cout<<human4.getAge()<<"\n";
    cout<<human4.getName()<<"\n";
    human2.setName("menna");
    cout<<human2.getName();
    human2.setAge(9);
    cout<<human2.getAge();
    

    return 0;
};