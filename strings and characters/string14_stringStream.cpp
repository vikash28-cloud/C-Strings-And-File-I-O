//string stream is a class 

#include<iostream>
#include<sstream>
using namespace std;
int main()
{

    // string to integer conversion
    string str = "28 09 2002";
    stringstream ss(str);
    int a,b,c;
    ss>>a;         //extracting data from ss object to integer a
    ss>>b;
    ss>>c;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;


    // or 


    string str1 = "28 09 2002";
    stringstream ss2(str1);
    int d;
    while (ss2>>d)
    {
       
        cout<<d<<endl;
    }


    //integer to string

    stringstream ss3;
    int k=  434;
    
    ss3<<k;
    string v;
    ss3>>v;

    cout<<v<<endl;
    

    
    
}
