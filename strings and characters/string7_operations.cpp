//c++ oprerations like 
// string length
//sub string in a string 
// find function

#include<iostream>
using namespace std;
int main()
{
    string name = "vikash";
    cout<<name<<endl;

    cout<<name.length()<<endl;

    // +
    name = name+" Sharma";
    cout<<name<<endl;

    //substring
    cout<<name.substr(2,4)<<endl;

    //find first occurance 
    cout<<name.find("S")<<endl;

    string a = "geeksforgeeks";
    int res = a.find("green");
    if(res == string :: npos)
    {
        cout<<"not present "<<endl;
    }
    else
    {
        cout<<"present at index "<<res<<endl;
    }
    

}