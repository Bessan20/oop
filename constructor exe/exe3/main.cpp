#include<iostream>
using namespace std;

class Book {

    public:
    string title;
    string author;
    int price;

    public:
    Book() {

        cout << "***Welcome to my app***" <<"\n";

    }

    Book(string title , string author) {

        this->title = title;
        this->author = author;
    }
    Book(string title , string author , int price) {

        this->title = title;
        this->author = author;
        this->price = price;
    }

    void displayBookInfo() {
        cout << "Title: " << title << "\n";
        cout << "Author: " << author << "\n";
        cout << "Price: $" << price << "\n";
    }

    
};
int main()
{

    Book b1 , b2("Nodejs","John") , b3("c++" , "free code camp" , 70) ;
    b1.displayBookInfo();
    b2.displayBookInfo();
    cout << "Title: " <<b3.title << "\n";
    cout << "Author: " <<b3.author << "\n";
    cout << "Price: $" <<b3.price << "\n";
    
    
}
