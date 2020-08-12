# include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    if(n==1)
    {
        cout<<"1";
        return 0;
    }
    
    int f,b,s=1,max=-1;
    for(int i=0;i<n;i++)
    {
        //int k=i;
        for(f=i;f<n;f++)
        {
            if(a[f]>=a[f+1])
            s++;
            else
            {
                break;
            }
            
        }
        for(b=i;b>0;b--)
        {
            if(a[b-1]<=a[b])
            s++;
            else
            break;
        }
        if(s>max)
        max=s;
        s=1;

    }

cout<<max;

    return 0;
}