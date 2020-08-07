# include <bits/stdc++.h>
using namespace std;
int main ()
{   
    int k,n;
    cin>>n>>k;
    int s=2*n + 1;
    int a[s];
    for(int l=0;l<s;l++)
    cin>>a[l];
    int i=s - 2*bool(s%2);
    for(int j=0;j<k;j++)
    {
        a[i]--;
        i-=2;
        
    }
        
    

    for(int i=1;i<=s-2;i+=2)
    {
        //1cout<<i<<endl;
        if(a[i]<=a[i+1] && i+1!=s-1 )
        a[i]++;
        if(a[i]<=a[i-1] && (i-1)!=0)
        a[i]++;
    }
    for(int i=0;i<s;i++)
    cout<<a[i]<<" ";
    return 0;
}
