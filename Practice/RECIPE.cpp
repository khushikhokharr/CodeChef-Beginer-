#include "iostream"

using namespace std;

int hcf(int a, int b)
{
  if (b==0)
  return a;
  return hcf(b,a%b);

}


int hcfs (int a[], int n)
{
 int val;
 val = a[0];
 for(int i = 1; i < n; i++)
{
    val = hcf(a[i], val);

    if(val == 1)
    {
       return 1;
    }
}
return val;
}


int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
     {
       cin>>a[i];
     }
     int gcd = hcfs(a , n);
     for (int i=0;i<n;i++)
      cout << (a[i]/gcd) << " ";
    cout<<endl;  
   }
return 0;
}
