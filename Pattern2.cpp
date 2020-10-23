#include <iostream>
using namespace std;
 int main()
 {
   int i,j,m;
   cout<<"Enter the value of m : ";
   cin>>m;
   int x=m/2;
   for(i=1; i<=m;i++)
   {
     for(j=m;j>=i;j--)
     cout<<i<<" ";
     cout<<endl;
  }

 }
