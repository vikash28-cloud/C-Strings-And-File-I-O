#include<iostream>
#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
    string text;

    ifstream in("f1.txt");   //taking input from f1.txt to the program
    //in>>text;
    // cout<<text;


    //for getting full line 
    getline(in,text);
    cout<<text<<endl;
    getline(in,text); //for next line
    cout<<text<<endl;

    in.close();    // connection between the file and program breaks

    return 0;

}