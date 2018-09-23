//
//  main.cpp
//  rotation
//
//  Created by Abhis Prabhu on 9/18/18.
//  Copyright © 2018 Abhis Prabhu. All rights reserved.
//

#include<iostream>
using namespace std;

int main()
{
    int i,j,n,a[20][20],b[20][20];
    cout<<"Enter the matrix : 3 or 4\n";
    cin>>n;
    cout<<"Enter the elements\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];

        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    cout<<"The rotated matrix is \n";
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>=0;j--)
        {
            cout<<b[i][j]<<"\t";
        }
        cout<<"\n";
    }
}
