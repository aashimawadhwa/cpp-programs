#include<iostream>
using namespace std;
int main()
{
    int i,j,n,k;
    cin>>n;
    
    for(i=1;i<=(n+1)/2;i++)
    {
        for(k=1;k<=(n+1)/2-i;k++)
        {
            cout<<" ";
            for(j=1;j<=(2*i-1);j++)
            cout<<"*";
            cout<<endl;
        }
        
        for(i=n/2;i>0;i--)
        {
            for(k=1;k<=(n/2)+1;k++)
            cout<<" ";
           for(j=1;j<=(2*i-1);j++)
            cout<<"*";
             cout<<endl;
        }
