#include <iostream>
using namespace std;
int main()
{
  int i,j,m,p;
  cout<<" Enter the value of m : ";
  cin>>m;
  for(i=1;i<=m;i++)
  {
    for(j=1;j<=m-i;j++)  
    cout<<" ";
    for(j=1;j<=i;j++)   
    cout<<j;
    for(j=2;j<=i;j++)  
    cout<<i+j-1;         
    cout<<endl;

  }

  for(i=1;i<=m;i++)
  {
    for(j=1;j<=i;j++)
    cout<<" ";
    p=1;
    for(j=1;j<=m-i;j++)
    cout<<p++;
    for(j=2;j<=m-i;j++)
    cout<<p++;
    cout<<endl;
  }
}
