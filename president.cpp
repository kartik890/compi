# include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b;
    char c;
    cin>>a>>b>>c;
    char s[a][b]; 
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        cin>>s[i][j];
    }
    set <char> adj;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            if(s[i][j]==c)
            {
                if(i!=0&&s[i-1][j]!=c)
                adj.insert(s[i-1][j]);
              if(i!=a-1&& s[i+1][j]!=c)
                adj.insert(s[i+1][j]);
              if(j!=0 && s[i][j-1]!=c)
                adj.insert(s[i][j-1]);
              if(j!=b-1&& s[i][j+1]!=c)
                adj.insert(s[i][j+1]);
            }
        }
    }
    int x=0;
    if(adj.find('.')!=adj.end())
    x--;
    cout<<adj.size()+x<<endl;
    return 0;

    return 0;
}
