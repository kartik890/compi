#include<bits/stdc++.h>
using namespace std;
int main()
{   
    long long n;
    cin>>n;long long c=0;
    while(n>=1)
    {
        if(n%2==1)
        {
            c++;n--;
        }
        n=n/2;
    }
    
    cout<<c;



    return 0;
}