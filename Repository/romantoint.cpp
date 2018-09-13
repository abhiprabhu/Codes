#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int romanToInt(string str) {
        int i,m=0;
        for(i=0;i!=str.length();i++)
        {
            //   cout<<str[i]<<"\n";
            if(str[i]=='I')
            {
                if((str[i+1])=='V'||(str[i]=='X'))
                {
                    m=-1;
                }
                else m+=1;
                
            }
            if(str[i]=='V')
                m+=5;
            if(str[i]=='X')
                m+=10;
            if(str[i]=='L')
                m+=50;
            if(str[i]=='C')
                m+=100;
            if(str[i]=='D')
                m+=500;
            if(str[i]=='M')
                m+=1000;
        }
    
    return m;
    }
};

int main()
{
    Solution f;
    string st;
    int k;
    cout<<"Enter the roman \n";
    cin>>st;
    k=f.romanToInt(st);
    cout<<"The number is "<<k<<"\n";
    return 0;

}
