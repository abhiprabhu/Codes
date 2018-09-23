//
//  main.cpp
//  strmul
//
//  Created by Abhis Prabhu on 9/13/18.
//  Copyright © 2018 Abhis Prabhu. All rights reserved.
//

#include<iostream>
#include<sstream>

using namespace std;

int main()
{
    int a,b,c;
    string s1,s2;
    cout<<"Enter the values\n";
    getline(cin,s1);
    getline(cin,s2);
    a=stoi(s1);
    b=stoi(s2);
    c=a*b;
    cout<<c<<"\n";

    //cout<<c;
}
