/*******************************************************
 * Copyright (C) 2016 Aakanksha
 *
 * A-VERY-BIG-SUM
 *
 *******************************************************/

#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int N;
    cin>>N;
    long long int A[10], sum=0;
    for(int i=0; i<N; i++)
    {
        cin>>A[i];
    }
    for(int i=0; i<N; i++)
    {
        sum+=A[i];
    }
    cout<<sum;
    return 0;
}
