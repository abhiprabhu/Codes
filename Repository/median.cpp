#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;


int main()
{
    int a[10],b[10],c,d;
    float m;
    cout<<"enter the size of the 1st array \n";
    cin>>c;
    cout<<"Enter the size of the 2nd array \n";
    cin>>d;
    cout<<"Enter the elements of first array \n";
    for(int i=0;i<c;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the elements of the second array \n";
    for(int i=0;i<d;i++)
    {
        cin>>b[i];
    }
    if((c+d)%2==0)
    {
        m=float((a[c-1]+b[0]))/2;
       // cout<<a[c-1]<<"\t"<<b[0]<<"\n";
    }
    else
        if(c>d)
            m=a[c];
        else
            m=b[0];

    cout<<"The median is "<<fixed<<setprecision(2)<<m<<"\n";
    }
