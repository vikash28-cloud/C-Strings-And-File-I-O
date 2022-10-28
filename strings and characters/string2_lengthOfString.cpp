#include<iostream>
using namespace std;
int main()
{
    char name[20];
    int i=0;
    int count=0;
    cin>>name;
    while(name[i]!='\0')
    {
        count++;
        i++;
    } 

    cout<<count;

}