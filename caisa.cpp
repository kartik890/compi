# include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    int n;
    cin>>n;
    int c=-1;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        c=max(c,t);
    }
    cout<<c;
    return 0;

}