#ifndef _restaurants_inc_h_  //have to write dont know why

#define _restaurants_inc_h_  //have to write dont know why

#include<iostream>
#include<bits/stdc++.h>
#include"destination.h"
using namespace std;


class restaurants: virtual public destination
{
public:  //will change to protected;
string rest_name;
string typeoffood;

public:
void showrestaurantdata();
void inputnoutput(string , string);
};

#endif