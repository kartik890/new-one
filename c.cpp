#include<bits/stdc++.h>
using namespace std;

struct coor
{
    int x,y,z;
};
int main()
{
      int n,sx=0,sy=0,sz=0;
      cin>>n;
      coor a[n];
      for(int i=0;i<n;i++)
      {
          cin>>a[i].x>>a[i].y>>a[i].z;
      }
      for(int i=0;i<n;i++)
      {
       sx=sx+a[i].x;  
      }
      for(int i=0;i<n;i++)
      {
       sy=sy+a[i].y;  
      }
      for(int i=0;i<n;i++)
      {
       sy=sy+a[i].y;  
      }
      if(sx==0 && sy==0 && sz==0)
      cout<<"YES";
      else
      cout<<"NO";
    
}
