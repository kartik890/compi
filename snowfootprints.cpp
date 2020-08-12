#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string h;
    cin>>n;
    cin>>h;
    int f=0,t=0,k=0;
    for(int i=0;i<h.length();i++)
    {
        if(h[i]=='R')
        {
            f=i+1;
            break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(h[i]=='R')
        {
            k=i+1;
            break;
        }
    }
    for(int i=0;i<h.length();i++)
    {
        if(h[i]=='L')
        {
            t=i+1;
            break;
        }
    }
    if( t> 0 && f==0)
    {
        cout<<t<<" "<<t-1;
    }
    else
    {
        cout<<f<<" "<<k+1;
    }
    
    return 0;
}`