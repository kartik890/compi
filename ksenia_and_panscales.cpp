    # include<iostream>
    # include<algorithm>
    # include<ctype.h>
    # include<string.h>
    # include<string>
    # include<vector>
    # include<set>
    # include<limits.h>
    # include<math.h>
    # include<iterator>
    # include<iomanip>
    typedef unsigned long long ll;
    using namespace std;
    int main()
    {
        string s1,s2,b;
        getline(cin,s1,'|');
        getline(cin,s2);
        getline(cin,b);
        
        int a[3];
        a[0]=s1.size();
        a[1]=s2.size();
        a[2]=b.size();
        sort(a,a+3);
        if(a[0]+a[1]-a[2] != 0 )
        {
            cout<<"Impossible";
            return 0;
        }
        if(s1.size()<b.size())
        {
            int i= abs(s2.size()-s1.size());
            for(int j= b.size();)
            {
                cout<<s1<<b[i-1];
                b.pop_back();
            }
        }
        if(s2.size()<b.size())
        {
            int i= b.size()-s1.size();
            while(i--)
            {
                cout<<s1<<b[i-1];
                b.pop_back();
            }
        }
        

        
     
        return 0;
    }