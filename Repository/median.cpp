#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;


int main()
{
    int sud[3][3],com[3][3];
    int i,j,k;
    cout<<"Enter the numbers\n";
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
        cin>>sud[i][j];
      }
    }
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
        com[i][j]=sud[i][j];
      }
    }
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
      if((sud[i][j]==(com[i][j])||(sud[i][j]==com[j][i]))
      cout<<"invalid \n";
      else cout<<"valid \n";
    }
  }
    }
