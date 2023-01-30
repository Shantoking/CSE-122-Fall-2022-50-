#include<iostream>
#include<conio.h>
using namespace std;

void addiction (int a,int b)
{
    int sum = a+b;
    cout<<"sum = "<<sum<<endl;

}

int main()
{
    addiction(10,20);
    addiction(20,30);
    addiction(40,10);

    getch();
}
