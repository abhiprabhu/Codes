#include<iostream>
#include<string>
using namespace std;

int main()
{
  string s,w1,w2,a,b;
  cout<<"Enter the string \n";
  getline(cin,s);
  cout<<"Enter the words\n";
  getline(cin,w1);
  getline(cin,w2);
  b=w1;
  a=w2;
  strcat(w1,a);
  strcat(w2,b);
  if(strcmp(w1,s)==0)
  {
    cout<<"1";
  }
  else
  cout<<"0";
  if(strcmp(w2,s)==0)
  cout<<"2";
  else
  cout<<"4";

}
