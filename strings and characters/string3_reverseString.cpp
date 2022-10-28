#include<iostream>
using namespace std;
int main()
{
    char arr[6] = {'v','i','k','a','s','h'};
    int n=6;
    int si=0;
    int ei = n-1;

    while(si<=ei)
    {
        swap(arr[si],arr[ei]);
        si++;
        ei--;
    }

    cout<<arr;
}