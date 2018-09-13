#include <iostream>
#include <string>

using namespace std;


class phone{
 public:int phones(int n)
 {
 int m,v;
 char s[8][4]={{'a','b','c','\0'},{'d','e','f','\0'},{'g','h','i','\0'},{'j','k','l','\0'},{'m','n','o','\0'},{'p','q','r','s'},{'t','u','v','\0'},{'w','x','y','z'}};
 m=n/10;
 v=n%10;
 cout<<m<<"\t"<<v<<"\n";
 for(int i=0;i<3;i++)
 {
 for(int j=0;j<4;j++)
 {
 cout<<s[m-2][i]<<s[v-2][j]<<"\n";
 }
 }
     return 0;
 }
};


int main()
{
    phone P;
    int k;
    cout<<"Enter the number \n";
    cin>>k;
    P.phones(k);
}


