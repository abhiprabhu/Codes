//
//  main.cpp
//  haystack
//
//  Created by Abhis Prabhu on 9/14/18.
//  Copyright © 2018 Abhis Prabhu. All rights reserved.
//

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char s1[20],s2[10];
    char *p;
    int a=0;
    cout<<"Enter the haystack \n";
    cin>>s1;
    cout<<"Enter the needle\n";
    cin>>s2;
    p=strstr(s1,s2);
    if(p)
        {
            a++;
    cout<<"The number of occurrence is "<<a<<"\n";
        }
    if(!p)
    {
        cout<<"The number of occurrence is -1\n";
    }
}
