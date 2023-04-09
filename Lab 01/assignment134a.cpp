#include <iostream>
#include<conio.h>
#include<string>
using namespace std;
class Animal {
private:
int age;
long id;
bool alive;
pair<double, double> location;
public:
Animal() : age(0), id(generateUniqueId()), alive(true), location({0.0, 0.0}) {}
Animal(int age, double x, double y) : age(age), id(generateUniqueId()), alive(true),
location({x, y}) {}
virtual ~Animal() {}
Animal(const Animal& other) : age(other.age), id(generateUniqueId()), alive(true),
location(other.location) {}
void setAlive(bool status) { alive = status; }
bool isAlive() const { return alive; }

void move(double x, double y) {
cout << "Animal moved to (" << x << ", " << y << ")" << endl;
location = {x, y};
}
virtual void sleep() { cout << "Animal is sleeping" << endl; }
virtual void eat() { cout << "Animal is eating" << endl; }
friend ostream& operator<<(ostream& os, const Animal& animal) {
os << "Animal: age = " << animal.age << ", id = " << animal.id << ", alive = " <<
animal.alive
<< ", location = (" << animal.location.first << ", " << animal.location.second << ")";
return os;
}
private:
static long generateUniqueId() {
static long id = 0;
return ++id;
}
};
class Bird : public Animal {
public:
void fly(double x, double y) {
cout << "Bird is flying to (" << x << ", " << y << ")" << endl;
move(x, y);
}
void sleep() override { cout << "Bird is sleeping" << endl; }
void eat() override { cout << "Bird is eating seeds" << endl; }
};
class Canine : public Animal {
public:
void run(double x, double y) {
cout << "Canine is running to (" << x << ", " << y << ")" << endl;
move(x, y);
}
void sleep() override { cout << "Canine is sleeping" << endl; }
void eat() override { cout << "Canine is eating meat" << endl; }
};
int main() {
Animal animal1;
cout << animal1 << endl;

Bird bird1( 1.0, 2.0);
cout << bird1 << endl;
bird1.fly(3.0, 4.0);
bird1.sleep();
bird1.eat();
Canine canine1(5, 5.0, 6.0);
cout << canine1 << endl;
canine1.run(7.0, 8.0);
canine1.sleep();
canine1.eat();
getch();
}
