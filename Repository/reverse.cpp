//
//  main.cpp
//  reverse
//
//  Created by Abhis Prabhu on 9/14/18.
//  Copyright © 2018 Abhis Prabhu. All rights reserved.
//

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
int n,d=0,s,p;
cout<<"Enter the number \n";
cin>>n;
s=n;
if(n<0)
{
    n=n* -1;
}
    while(n != 0)
    {
        p = n%10;
        d = d*10 + p;
        n /= 10;
    }
 if(s<0)
     cout<<"-"<<d<<"\n";
    else
        cout<<d<<"\n";
}
