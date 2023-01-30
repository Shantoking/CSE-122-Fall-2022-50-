#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a[30],n,i;
    cout<<"How many fibonacci number : ";
    cin>>n;

    a[0]=0;
    a[1]=1;

    for(i=2;i<n;i++)
    {
        a[i]=a[i-1] + a[i-2];
    }
    cout<<endl;
    for(i=0;i<n;i++)
    {
        cout << " "<<a[i];
    }
    getch();
}
