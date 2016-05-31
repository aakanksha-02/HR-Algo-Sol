/*******************************************************
 * Copyright (C) 2016 Aakanksha
 *
 * STAIRCASE
 *
 *******************************************************/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    char arr[n][n];
    for(int i=0; i<n; i++)
    {
       for(int j=0;j<n;j++)
       {
           int k = i+j;
            if(k>=n-1)
            {
                arr[i][j]='#';
            }
           else
           {
               arr[i][j]=' ';
           }
       }
    }
    for(int i=0; i<n; i++)
    {
       for(int j=0;j<n;j++)
       {
           cout<<arr[i][j];
       }
        cout<<"\n";
    }
    return 0;
}
