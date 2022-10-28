#include<iostream>
#include <math.h>

#include<sstream>
using namespace std;
int main()
{

    string x;
    cin>>x;
    stringstream ss(x);
    int num;
    ss>>num;
    int rem;
    int ans=0;
    int i=0;
    while(num>0)
    {
        rem = num%10;
        ans =ans+rem*pow(2,i);
        num=num/10;
        i++;
    }
    stringstream ss1;
    ss1<<ans;
    string b;
    ss1>>b;
    cout<<b;
}