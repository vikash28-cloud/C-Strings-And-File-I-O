#include<iostream>
#include<bits/stdc++.h>
#include<fstream>
#include<string>

using namespace std;
int main()
{
    string name = "vikash sharma";
    ofstream write;    //write is the object of ofstream class so yout can take any name
    write.open("f4.txt");
    write<<name<<endl;
    write<<"programmer"<<endl;
    write<<"hello world";
    write.close();

    string txt;
    ifstream read;
    read.open("f4.txt");

    // read>>txt;   //using this method can only prints starting single word
    // cout<<txt;

    // getline(read,txt);   //it prints single line
    // cout<<txt<<endl;
    // getline(read,txt);
    // cout<<txt<<endl;

    //using eof (end of file)

    while(read.eof()==0)
    {
        getline(read,txt);
        cout<<txt<<endl;
    }


    read.close();
}