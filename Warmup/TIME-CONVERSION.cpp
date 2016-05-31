/*******************************************************
 * Copyright (C) 2016 Aakanksha
 *
 * TIME-CONVERSION
 *
 *******************************************************/

#include <iostream>

using namespace std;

int main()
{
    char time[10];
    cin>>time;
    if(time[8]=='P' && time[9]=='M')
    {
        if(time[0]=='0' && time[1]=='8')
        {
            time[0]='2';
            time[1]='0';
        }
        else if(time[0]=='0' && time[1]=='9')
        {
            time[0]='2';
            time[1]='1';
        }
        else if(time[0]=='1' && time[1]=='0')
        {
            time[0]='2';
            time[1]='2';
        }
        else if(time[0]=='1' && time[1]=='1')
        {
            time[0]='2';
            time[1]='3';
        }
        else if(time[0]=='1' && time[1]=='2')
        {
            time[0]='1';
            time[1]='2';
        }
        else
        {
            time[0]='1';
            time[1]=char(int(time[1]+2));
        }
    }
    else if(time[8]=='A' && time[9]=='M')
    {
        if(time[0]=='1' && time[1]=='2')
        {
            time[0]='0';
            time[1]='0';
        }
    }
    for(int i=0; i<8; i++)
        cout<<time[i];
    return 0;
}
