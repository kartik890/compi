# include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    int n ,m ;
    cin>>n>>m;
    int a[11]={0};
    for(int i =0;i<m;i++)
    {
        int t,b;
        cin>>t>>b;
        a[b]+=t;
    }
    int s=0;
    for(int i=10;i>=0;i--)
    {
        if(a[i]<n)
        {
            s+= a[i] * i;
            n-=a[i];
        }
        else
        {
            s+= i*n;
            break;
        }
        
    }
cout<<s;
return 0;


}