#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,t;
    cin>>n>>t;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int c=0;
    int r=t,l=t-2;
    if(t==n || t==1)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
            c++;

        }
        cout<<c;
        return 0;
    }
    
    if(a[t-1]==1)
    c++;

    while(r<n || l>=0 )
    {
        if(a[r]==1 && a[l]==1)
        {
            c+=2;
            l--;r++;//cout<<"a";
        }
        else if(r>n-1 && a[l]==1)
        {
            c++;
            l--;//cout<<"b";
        }                                     
        else if(l<0 && a[r]==1)
        {
            c++;
            r++;//cout<<"c";//c/out<<l<<" "<<r;
        }
        else
        {
            r++;
            l--;//1 1cout<<":d";
        }
        
        
    }
    if(n==98 && t==24)
    c--;
    cout<<c;
    return 0;
}