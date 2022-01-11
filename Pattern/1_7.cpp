#include<iostream>
using namespace std;

int main()
{
    int n,temp;
    cin>>n;
    cout<<"\n";
    for(int i=0;i<n-1;i++)
    {
        temp=n-1;
        for(int j=0;j<=i;j++)
        {
            cout<<temp;
            temp--;
        }
        cout<<"\n";
    }
    temp=n-1;
    for(int i=0;i<n;i++)
    {
        cout<<temp;
        temp--;
    }
    cout<<"\n";
    for(int i=0;i<n-1;i++)
    {
        temp=n-1;
        for(int j=n-1-i;j>0;j--)
        {
            cout<<temp;
            temp--;
        }
        cout<<"\n";
    }
}