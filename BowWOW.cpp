#include<bits/stdc++.h>
using namespace std;
int main()
{   
    string s;
    cin>>s;int c=0;
    for(int i=0;i<s.size();i++)
    {   
        if(s[i]=='1')
        {
            c++;
            if(c==2)
            break;
        }

    }
    if(c=1)
    cout<<int(ceil((s.size()-1)/2));
    else
    {
        cout<<int(ceil(s.size()/2));
    }
    cout<<" "<<c;
    

    return 0;
}