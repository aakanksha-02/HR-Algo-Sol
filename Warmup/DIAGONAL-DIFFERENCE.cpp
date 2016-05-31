/*******************************************************
 * Copyright (C) 2016 Aakanksha
 *
 * DIAGONAL-DIFFERENCE
 *
 *******************************************************/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int N;
    cin >>N;
    int a[N][N];
    int sum1=0, sum2=0;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            int k = i+j;
            if(i==j)
            {
               sum1+=a[i][j];
            }
            if(N-1==k)
            {
                sum2+=a[i][j];

            }

        }
    }
    int diff = abs(sum1-sum2);
    cout<<diff;
    return 0;
}
