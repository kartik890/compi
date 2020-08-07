# include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int n;
    cin>>n;
    int a[1001]={0};
    set <int> s;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        a[t]++;
        s.insert(t);
    }
    set <int> :: iterator i;bool c=0;

    for( i=s.begin();i!=s.end();i++)
    {
        if(a[*i] > ceil(n/2.0))
        {
            c=true;
            break;
        }

    }
    if(c==0)
    cout<<"YES";
    else
    {
        cout<<"NO";
    }
    

    return 0;
}