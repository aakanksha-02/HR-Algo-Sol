/*******************************************************
 * Copyright (C) 2016 Aakanksha
 *
 * PLUS-MINUS
 *
 *******************************************************/

#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int N;
    cin>>N;
    int a[N];
    float count_p=0,count_n=0,count_z=0;
    float positive=0.0, negative=0.0, zero=0.0;
    for(int i=0;i<N;i++)
    {
       cin>>a[i];
    }
     for(int i=0;i<N;i++)
    {
       if(a[i]==0)
       {
           count_z++;
       }
       else if(a[i]>0)
       {
           count_p++;
       }
       else if(a[i]<0)
       {
           count_n++;
       }
    }
    positive = count_p/N;
    negative = count_n/N;
    zero = count_z/N;
    cout<<positive<<endl<<negative<<endl<<zero;
    return 0;
}
