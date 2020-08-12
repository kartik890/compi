# include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int flag=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        a[i]=a[i]/2;
        else
        {
            if(flag==-1)
            a[i]=floor(float(a[i])/2);
            else
            {
                a[i]=ceil(float(a[i])/2);
            }
            flag=flag*(-1);
            
            
        }
        
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<endl;

    return 0;
}