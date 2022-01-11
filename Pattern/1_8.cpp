#include<iostream>
using namespace std;

int main()
{
    int n,temp,k=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=n-i;j>0;j--)
        {
            cout<<" ";
        }
        cout<<i;
        if(i!=1)
        {
            for(int j=0;j<k;j++)
            {
                cout<<" ";
            }
            k+=2;
            cout<<i;
        }
        cout<<"\n";
    }
    temp=n-1;
    k-=2;
    for(int i=1;i<n;i++)
    {   
        k-=2;
        int j;
        for(j=0;j<i;j++)
        {
            cout<<" ";
        }
        cout<<temp;
        if(j!=n-1)
        {
            for(j=0;j<k;j++)
            {
                cout<<" ";
            }
            cout<<temp;
            temp--;

            cout<<"\n";
        }    
    }
}