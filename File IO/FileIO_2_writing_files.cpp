#include<iostream>
#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
    string text = "vikash sharma";
    ofstream out("f2.txt");

    out<<text;

    out.close();
}