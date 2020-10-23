#include <iostream>
using namespace std;
int main()
{
  int i,j,m;
  cout<<"Enter the value of m : ";
  cin>>m;
  int p;
  for(i=1;i<=m;i++)
  {
    for(j=1;j<=m-i;j++)
    cout<<" ";
    for(j=1;j<=i;j++)
    cout<<m;
    for(j=2;j<=i;j++)
    cout<<" ";
    cout<<endl;
  }
}
