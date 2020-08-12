# include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    const int s=int(1e5+3);
    int pos[s];
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        pos[t]=i+1;
    }
    int m,v=0,p=0;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int t;
        cin>>t;
        v+=pos[t];
        p+=n-pos[t]+1;

    }
    cout<<v<<" "<<p;
return 0;
}