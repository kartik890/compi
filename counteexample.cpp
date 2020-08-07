# include <bits/stdc++.h>
using namespace std;
int main ()
{
    long long a ,b;
    cin>>a>>b;
    if(-a + b +1 <3)
    {
        cout<<"-1"<<endl;
        return 0;
        }
    if(a%2==0)
    {
    cout<<a<<" "<<a+1<<" "<<a+2<<endl;
    return 0;
    }
    if(b-a+1 > 3)
    {
        cout<<a+1<<" "<<a+2<<" "<<a+3<<endl;
        return 0;
    }
    cout<<"-1"<<endl;
    return 0;
}