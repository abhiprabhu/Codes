//
//  main.cpp
//  sudoku
//
//  Created by Abhis Prabhu on 9/18/18.
//  Copyright © 2018 Abhis Prabhu. All rights reserved.

#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;


int main()
{
    int sud[9][9];
    int i,j,k,c=0,temp;
    cout<<"Enter the numbers\n";
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            cin>>sud[i][j];
        }
    }

    for ( int i = 0 ; i < 9 ; i++) {
        for ( int j = 0 ; j < 9 ; j++) {
            c = 0;
            temp = sud[i][j];
            if ( temp != '.') {
                for (  k = 0 ; k < 9 ; k++ ) {
                    if (sud[k][i] == temp)
                        c++; } }
            if (c >= 2) {
            //    cout << "Row " << i << " is invalid." << endl;
                i++;
            }
            }
    }
    if(c>=2){
        cout<<"Sudoku is invalid"<<endl;
    }
    else
        cout<<"Valid Sudoku"<<endl;

}
