#include"tourist.h"
#include<bits/stdc++.h>
#include<cstring>

string uppercase(string s)
{
    for(int i=0;i<s.size();i++)
    {
        s[i]= toupper(s[i]);
    }
    return s;
}

int isSubstring(string s1, string s2) 
{ 
    int M = s1.length(); 
    int N = s2.length(); 
  
    for (int i = 0; i <= N - M; i++) 
    { 
        int j; 
  
        for (j = 0; j < M; j++) 
            if (s2[i + j] != s1[j]) 
                break; 
  
        if (j == M) 
            return i; 
    } 
  
    return -1; 
}

bool tourist::login()
{
    string query;
    string a="y",b="yes";
    cout<<"Please enter your name \n";
    getchar();
    getline(cin,name);
    cout<<"\nPlease enter your e-mail id \n";
    getchar();
    getline(cin,email);
    int res = isSubstring("@gmail.com", email); 
    if (res == -1) 
        return false;
    else
    {
        cout<<"\nDo you want to give your phone number, enter yes or no"<<endl;
        getchar();
        getline(cin,query);

        if((query==a)||(query==b)||(query==uppercase(a))||(query==uppercase(b)))
       {
         cout<<"\nPlease enter your phone number \n";
         cin>>phoneno;

         if((phoneno.size())!=10)
         {
           return false;
         }
          
         else
         {
            return true;
         }
       
        }
    
        else
         return true;

    }
    
}

void tourist:: details(string a)
{
   this->showrecord(a);
}