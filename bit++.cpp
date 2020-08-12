# include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,c=0;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
    cin>>s[i];
    for(int i=0;i<n;i++)
    {
        if(s[i][1]=='+')
        c++;
        else
        {
            c--;
        }
        
    }
    cout<<c;


}