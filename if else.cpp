#include<iostream>

using namespace std;
int main()
{
 
  int age;
  cout<<"tell your age --->"<<endl;
  cin>>age;

  if((age<18) && (age>0))
  {
    cout<<"you can not come to my party"<<endl;
  }
  else if (age==18)
  {
    cout<<"you will get a party pass, and you will allowed to join party"<<endl;
  }
  else if(age<1)
  {
    cout<<"you are not yet born"<<endl;
  }
  else
  {
    cout<<"you can come to my party"<<endl;
  }
  return 0;
}