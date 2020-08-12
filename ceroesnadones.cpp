# include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    string s;int c=n;
    cin>>s;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='1' && s[i+1]=='0')
        {
            c--;i=-1;
        }
    }
    cout<<c;

    return 0;
}
