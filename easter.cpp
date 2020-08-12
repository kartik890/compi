#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s= ("VIBGYOR");
    
    int t= (n%7);
    int k=n/7;
    while(k--)
    cout<<s;
    for(int i=0;i<t;i++)
    {
        cout<<s[i];   
    }
    return 0;
}