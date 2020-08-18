# include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    if(n==k || n-k==1)
    {
        cout<<"1";
        return 0;
    }
    int r=0;
    for(int i=0;i<k;i++)
    r+=a[i];
    int mi,c=r;
    for(int i=1;i<=n-k;i++)
    {
        r=r-a[i-1]+a[i-1+k];
        if(r<c)
        {
            mi=i;
            c=r;
        }
    }
    cout<<mi+1;
    return 0;

}