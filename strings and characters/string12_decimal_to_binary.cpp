//try another compiler/or ide

#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

string decimalToBinary(int n)
{
    string s;
    while (n>0)
    {
        int r = n%2;
        s = s + to_string(r);
        n = n/2;
    }
    reverse(s.begin(),s.end());  //reverse function for reverse the string
    return s;
    
}
int main()
{
    int num;
    cout<<"enter the decimal number: ";
    cin>>num;

    string ans = decimalToBinary(num);

    cout<<ans<<endl;
}

