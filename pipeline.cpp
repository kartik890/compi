# include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,k;
    cin>>n>>k;
    ll s=k;ll c=1;
    for(ll i=k-1;i>=2;i--)
    {
        if(s==n)
        {
            cout<<c;
            return 0;
        }
        s=s+ i-1;c++;
        if(s==n)
        {
            cout<<c;
            return 0;
        }
    }
    cout<<"-1";
        
    return 0;
}