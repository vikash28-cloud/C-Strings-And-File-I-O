#include<iostream>
using namespace std;

int pallendrome(char arr[],int n)
{
    int si=0;
    int ei =n-1;
    while(si<=ei)
    {
        if(arr[si]!=arr[ei])
        {
            return 0;
        }
        else
        {
            si++;
            ei--;
        }
    }
    return 1;   
}

int main()
{
    char arr[50];
    cin>>arr;
    int i=0;
    while(arr[i]!='\0')
    {
        i++;
    }

    int x = pallendrome(arr,i);

    if(x==1)
    {
        cout<<"pallendrome"<<endl;

    }
    else
    {
        cout<<"not pallendrome"<<endl;
    }
}