#include<iostream>
using namespace std;
int main()
{
    char name[20];
    cout<<"enter your name: "<<endl;

    cin>> name;

    name[2] = '\0';   // '\0' is a null character
    cout<<"your name is: "<<endl;
    cout<<name;    
    
}