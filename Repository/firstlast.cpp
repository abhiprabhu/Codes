//
//  main.cpp
//  firstandlast
//
//  Created by Abhis Prabhu on 9/18/18.
//  Copyright © 2018 Abhis Prabhu. All rights reserved.
//

#include<iostream>
using namespace std;

int main()
{
    int a[20],n,i,j,s,c=0,b[5];
    cout<<"Enter the number of elements\n";
    cin>>n;
    cout<<"Enter the sorted elements\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element to be searched\n";
    cin>>j;
    for(i=0;i<n;i++)
    {
        if(a[i]==j)
        {
            s=i+1;
            b[c]=s;
            c++;
        }
    }

    if(c==0)
    {
        cout<<"[-1,-1]\n";
    }
    else
        cout<<"["<<b[0]<<","<<b[c-1]<<"]\n";
}
