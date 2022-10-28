
//laxographically comparision
//it checks compare two string character by character
#include<iostream>
using namespace std;
int main()
{
    string str1 = "vikash";
    string str2 = "vyz";

    if(str1==str2)
    {
        cout<<"str1 and str2 is same"<<endl;
    }
    if(str1>str2)
    {
        cout<<"str1 is greater than str2"<<endl;   //v>s
    }
    else
    {
        cout<<"str1 is smaller than str2"<<endl;
    }

}