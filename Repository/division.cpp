#include <iostream>
#include <stdlib.h>
using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor) {
        int c=0;
        if(divisor==0)
        {
            cout<<"Division not possible \n";
       exit(0);
        }
        for(int i=divisor;i<=dividend;i=i+divisor)
        {
            if(i<=dividend)
                c++;
        }
        return c;
    }
};
    
    
    int main()
    {
        Solution S;
        int a,b,q;
        cout<<"Enter the dividend \n";
        cin>>a;
        cout<<"Enter the divisor \n";
        cin>>b;
        q=S.divide(a,b);
        cout<<"The quotient is "<<q;
        
    }
    

