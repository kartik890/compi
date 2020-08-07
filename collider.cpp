#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    string s;
    cin>>n;
    getline(cin,s);
    ll a[n];
    for(ll i=0;i<n;i++)
    cin>>a[i];
    ll sd = 1e9;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='R' && s[i+1]=='L')
        {
            sd = min(sd,(a[i+1]-a[i])/2);
        }
    }
    if(sd==1e9)
        {
            cout<<"-1";
        }
    else
    {
    cout<<sd;
    }
    
    



    return 0;
}