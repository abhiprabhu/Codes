//
//  main.cpp
//  permutation
//
//  Created by Abhis Prabhu on 9/13/18.
//  Copyright © 2018 Abhis Prabhu. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int a[3],b,i;
    cout<<"Enter the elements\n";
    for(i=0;i<3;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<3;i++)
    {
       if(a[i]!=a[i+1])
        {
            if(a[i]>a[i+1])
            {
                b=a[i];
                a[i]=a[i+1];
                a[i+1]=b;
            }
        }else
            if(a[i]==a[i+1])
        {   b=a[i+1];
            a[i+1]=a[i+2];
            a[i+2]=b;
        }
    }
    for(i=0;i<3;i++)
    {
        cout<<a[i]<<"\t";
    }
}
