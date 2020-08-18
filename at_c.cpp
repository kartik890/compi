# include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    ll a[n+1],b[n+1];
    for(int i=1;i<=n;i++)
    {
        int t;
        cin>>t;
        a[i]=t;
        b[i]=t;

    }
    sort(b+1,b+n+1);
    for(ll i=1;i<=n;i++)
    {
        a[i]+=a[i-1];
        b[i]+=b[i-1];
    }
    ll m;
    cin>>m;
    while(m--)
    {
        ll c,l,r;
        cin>>c>>l>>r;
        if(c==1)
        cout<<a[r]-a[l-1]<<endl;
        else
        {
            cout<<b[r]-b[l-1]<<endl;
        }
        
    }
    return 0;
}