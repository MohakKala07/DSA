#include<iostream>
using namespace std;

int main()
{
    int n,k=1,p=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=n-i;j>0;j--)
        {
            cout<<" ";
        }
        for(int j=0;j<k;j++)
        {
            cout<<p;
            p--;
        }
        k+=2;
        p=k;
        cout<<"\n";
    }
}