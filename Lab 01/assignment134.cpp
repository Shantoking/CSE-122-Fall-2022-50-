#include <iostream>
#include<conio.h>
#include <string>
using namespace std;

class Publication {
private:
string title;
float price;
public:
void getData() {
cout << "Title name: ";
cin>>title;
cout << "price: ";
cin >> price;
}
void putData()
const
 {
cout << "Title: " << title << endl;
cout << "Price: $" << price << endl;

}
};
class Book : public Publication {
private:
int Count;
public:
void getData() {
Publication::getData();
cout << "PAGE Count: ";
cin >>Count;
}
void putData() const {
Publication::putData();
cout << "Page count: " << Count << endl;
}
};
class Tape : public Publication {
private:
float Time;
public:
void getData() {
Publication::getData();
cout << "Enter playing time in minutes: ";
cin >>Time;
}
void putData() const {
Publication::putData();
cout << "Playing time: " << Time << " minutes" << endl;
}
};
int main() {
Book book;
Tape tape;
cout << "DATA FOR BOOK"<<endl;
book.getData();
cout << "DATA FOR TAPE"<<endl;
tape.getData();
cout << "BOOK DATA"<<endl;
book.putData();
cout << "TAPE DATA"<<endl;
tape.putData();

getch();
}
