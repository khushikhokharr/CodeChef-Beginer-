#include "iostream"


using namespace std;

int main()
{
  int n;
  cin>>n;
  int a[5];
  for(int i=0;i<n;i++)
  {
    int count=0;
    for (int j=0;j<5;j++)
    {
      cin>>a[j];
      if(a[j]==1)
      {
        count++;
      }
    }
    if(count==0)
    cout<<"beginner\n";
    else
      if(count==1)
        cout<<"junior developer\n";
    else
      if(count==2)
        cout<<"middle developer\n";
    else
      if(count==3)
        cout<<"senior developer\n";
    else
      if(count==4)
        cout<<"hacker\n";
    else
      cout<<"Jeff Dean\n";
  }
  return 0;
}
