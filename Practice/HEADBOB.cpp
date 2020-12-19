#include "iostream"

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    char s[n];
    for(int i=0;i<n;i++)
      cin>>s[i];
    int flag=0,flag2=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]== 89)
          {
            flag++;
            break;
          }

      else
        if(s[i]== 73)
          {
            flag2++;
            break;
          }
    }
      if (flag)
        cout<<"NOT INDIAN\n";
      else
        if(flag2)
          cout<<"INDIAN\n";
      else
          cout<<"NOT SURE\n";
   }
   return 0;
}
