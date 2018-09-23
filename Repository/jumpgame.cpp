//
//  main.cpp
//  jumpgame
//
//  Created by Abhis Prabhu on 9/15/18.
//  Copyright © 2018 Abhis Prabhu. All rights reserved.
//

#include<iostream>
using namespace std;

int main()
{
    int a[5],i,j=1,p=0;
    cout<<"Enter the numbers\n";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    i=0;
   while(a[i]!=0)
    {
        j=a[j-1];
        cout<<j;
        p++;
        i++;

    }
    cout<<"The minimum number of jumps : "<<p<<"\n";
}
