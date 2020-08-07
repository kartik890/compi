# include<bits/stdc++.h>
using namespace std;
int main ()
{   
    string s[4];
    for(int i=0;i<4;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {   
            char a[4];
            a[0]=s[i][j];a[1]=s[i][j+1];a[2]=s[i+1][j];a[3]=s[i+1][j+1];
            sort(a,a+4);
            if(a[0]=='#' && a[1]=='#' && a[2]=='#' && (a[3]=='.' || a[3]=='#') || ((a[0]=='#' || a[0]=='.') && a[1]=='.' && a[2]=='.' && a[3]=='.' ))
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO";


    return 0;
}