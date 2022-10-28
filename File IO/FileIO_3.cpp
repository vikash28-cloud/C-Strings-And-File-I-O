#include<iostream>
#include<bits/stdc++.h>
#include<fstream>

using namespace std;
int main()
{
    string text = "vikash sharma is the student of gla university";
    string text2 = "he is intrested in programming";

    ofstream out("f3.txt");
    out<<text<<endl;
    out<<text2<<endl;

    out.close();  //connection between the file and this program breaks

    string read;
    ifstream in("f3.txt");
    getline(in,read);
    cout<<read<<endl;
    getline(in,read);
    cout<<read<<endl;

    in.close();

    


}