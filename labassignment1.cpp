#include <iostream>
using namespace std;
class ManchesterUnited {
private:
int coach;
int player;
public:
ManchesterUnited() {
coach = 0;
player = 0;
}
int getCoach() const {
return coach;
}
int getPlayer() const {
return player;
}
void setCoach(int c) {
coach = c;
}
void setPlayer(int p) {
player = p;
}
ManchesterUnited& operator++() {
coach++;
return *this;
}
ManchesterUnited& operator++(int) {
player++;
return *this;
}
bool operator<(const ManchesterUnited& other) const {
return (coach * 10 + player) < (other.coach * 10 + other.player);
}
};
int main() {
ManchesterUnited ronaldo;
ManchesterUnited fernandes;
cout << "Ronaldo: coach = " << ronaldo.getCoach() << ", player = " << ronaldo.getPlayer()
<< endl;
++ronaldo;
cout << "Ronaldo: coach = " << ronaldo.getCoach() << ", player = " << ronaldo.getPlayer()
<< endl;
ronaldo.setCoach(4);
ronaldo.setPlayer(5);
fernandes.setCoach(5);
fernandes.setPlayer(6);
if (ronaldo < fernandes) {
cout << "Ronaldo is less than Fernandes." << endl;
} else {
cout << "Ronaldo is greater than or equal to Fernandes." << endl;
}
++ronaldo;
if (ronaldo < fernandes) {
cout << "Ronaldo is less than Fernandes." << endl;
} else {
cout << "Ronaldo is greater than or equal to Fernandes." << endl;
}
return 0;
}
