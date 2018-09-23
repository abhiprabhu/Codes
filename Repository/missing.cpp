//
//  main.cpp
//  missing
//
//  Created by Abhis Prabhu on 9/13/18.
//  Copyright © 2018 Abhis Prabhu. All rights reserved.
//

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int a[10],b,i,j,p;
    cout<<"Enter the numbers\n";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }

    sort (a,a + 5);

  //  for(int i=0;i<5;i++){ cout<<a[i];
//    }
    j=a[0];
   for(i=0;i<6;i++)
    {
            if(a[i]!=j)
            {
                j++;
                cout<<"\n"<<j;
                break;

            }

            }



   // cout<<"\n"<<p;
}
