#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
  ll r1,r2,c1,c2,d1,d2,a[9]={1,2,3,4,5,6,7,8,9};
  cin>>r1>>r2>>c1>>c2>>d1>>d2;
  do
  {
    if(a[0]+a[1]==r1&&a[2]+a[3]==r2&&a[0]+a[2]==c1&&a[1]+a[3]==c2&&a[0]+a[3]==d1&&a[1]+a[2]==d2)
    {
      cout<<a[0]<<' '<<a[1]<<endl;
      cout<<a[2]<<' '<<a[3]<<endl;
      return 0;
    }
  }
  while(next_permutation(a,a+9));
  cout<<-1;
  return 0;
}