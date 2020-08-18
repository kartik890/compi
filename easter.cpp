#include<bits/stdc++.h>
using namespace std;
int main()
{
   


    pair <set <char>,int> c;
    
    int n;
    cin>>n;
    string s= ("ROYGBIV");
    string a=("");
    int t= (n%7);
    int k=n/7;
    while(k--)
    cout<<s;
    switch(t)
    {
        case 1:
        cout<<"G";
        break;
        case 2:
        cout<<"GB";
        break;
        case 3:
        cout<<"YGB";
        break;
        case 4:
        cout<<"YGBI";
        break;
        case 5:
        cout<<"OYGBI";
        break;
        case 6:
        cout<<"OYGBIV";
        break;
        default:
        break;

    }
    return 0;
}