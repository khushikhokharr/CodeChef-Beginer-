#include "iostream"
#include "string"

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    char s1[100];
    char s2[100];
    cin>>s1>>s2;
    int count1=0,count2=0;
    for(int i=0;i<strlen(s1);i++)
    {
      if(s1[i]=="?")
        count1++;
    }

    for(int i=0;i<strlen(s2);i++)
    {
      if(s2[i]=="?")
        count2++;
    }

    if(count1==count2 && strlen(s1)>strlen(s2))
      cout<<"0"<<" "<<strlen(s1)<<"\n";
    else
      if(count1==count2 && strlen(s1)<strlen(s2))
         cout<<"0"<<" "<<strlen(s2)<<"\n";
    else
      if(count1<count2 && strlen(s1)>strlen(s2))
          cout<<count1<<""<<strlen(s1)<<"\n";
    else
      if(count1<count2 && strlen(s1)<strlen(s2))
          cout<<count1<<""<<strlen(s2)<<"\n";
    else
      if(count1>count2 && strlen(s1)<strlen(s2))
          cout<<count2<<""<<strlen(s2)<<"\n";
    else
      if(count1>count2 && strlen(s1)>strlen(s2))
          cout<<count1<<""<<strlen(s1)<<"\n";
    else
      if(count1==0 && count2==0 && strlen(s1)>strlen(s2))
          cout<<"0"<<" "<<strlen(s1)<<"\n";
    else
      if(count1==0 && count2==0 && strlen(s1)<strlen(s2))
         cout<<"0"<<" "<<strlen(s2)<<"\n";
    else
      if(strlen(s1)==1)
        cout<<"0"<<" "<<1<<"\n";
  }
  return 0;
}
