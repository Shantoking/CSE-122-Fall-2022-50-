#include <iostream>
using namespace std;

class Country {
  public:
    virtual void printName() = 0; // declare printName() as a pure virtual function to make the class abstract
};

class Germany : public Country {
  public:
    void printName() {
      cout << "Germany" << endl;
    }
};

class Argentina : public Country {
  public:
    void printName() {
      cout << "Argentina" << endl;
    }
};

class Brasil : public Country {
  public:
    void printName() {
      cout << "Brasil" << endl;
    }
};

int main() {
  Country* countries[3]; // declare an array of pointers to Country objects

  countries[0] = new Germany(); // assign a new instance of Germany to the first element of the array
  countries[1] = new Argentina(); // assign a new instance of Argentina to the second element of the array
  countries[2] = new Brasil(); // assign a new instance of Brasil to the third element of the array

  for (int i = 0; i < 3; i++) {
    countries[i]->printName(); // call the printName() function for each object in the array
  }

  for (int i = 0; i < 3; i++) {
    delete countries[i]; // free the memory allocated for each object in the array
  }

  return 0;
}


