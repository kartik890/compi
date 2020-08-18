# include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int a[n],b[n+1];
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
        b[a[i]]=i+1;
        
    }
    for(int i=0,j=1;i<n && j<n+1;i++,j++)
    {
        if(a[i]!=b[j])
        {
            cout<<"no";
            return 0;
        }
    }
    int l=0,si=-1;
    for(int i=1;i<n+1;i++)
    {
        //cout<<i<<" "<<b[i]<<endl;
        if(i!=b[i])
        {
            if(l==0)
            si=i;
            l++;
        }
        else if((l!=0 && i+1!=b[i+1]) && i!=n )
        l++;
      // cout<<si<<" "<<l<<endl<<endl;
        

    }
    if(l==0 && si==-1)
    cout<<"yes"<<endl<<"1"<<" "<<"1";
    else
    cout<<"yes"<<endl<<si<<" "<<si+l-1;

     
    return 0;
}
