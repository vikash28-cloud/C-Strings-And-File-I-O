#include<iostream>
using namespace std;
int main()
{
    string str= "geeks for geeks is a very good website for the geeks";
    int found = str.find("geeks");

    while (found!=string::npos)
    {
        cout<<"pattern found at: "<<found<<endl;
        found= str.find("geeks",found+1);
    }
    
    

    

}