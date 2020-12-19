#include "iostream"
#include "string"

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    char s[1000];
    int a[26],c;

    for(int i=0;i<26;i++)
      a[i]=0;

    cin>>s;
    for(int i=0;i<=(strlen(s)/2-1);i++)
    {
      c = int(s[i]);
      a[c-97]++;
    }


    int d;
    if(strlen(s)%2!=0)
      {
        for (int j=((strlen(s)/2)+1);j<(strlen(s));j++)
          {
              d = int(s[j]);
              a[d-97]--;
          }
      }
    else
    {
      for (int j=((strlen(s)/2));j<(strlen(s));j++)
        {
          d = int(s[j]);
          a[d-97]--;
        }
    }



    int flag=0;
    for(int k=0; k<26; k++)
    {  if(a[k]!=0)
      {
        flag++;
        break;
      }
    }

    if (flag>0)
    cout<<"NO"<<endl;
    else
    cout<<"YES\n";

  }
}
