# include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a;
    cin>>a;
    long long n=a,c=0;
    while(n/10!=0)
    {
        long long t=n,s=0;
        while(t!=0)
        {
            int temp;
            temp=t%10;
            s+=temp;
            t=t/10;
        }
        n=s;
        c++;
              

    }
    cout<<c;
    return 0;
}