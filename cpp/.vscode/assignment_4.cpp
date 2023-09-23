//4. Using Gravitational acceleration(g) as preprocessor definition write a c++ program to find the weight(w) of a given mass(m). Must use the function.
//
#include<bits/stdc++.h>//preprocessor header file
using namespace std;//using declaration command
#define g 9.8//defining the value of gravity in as universal value
float solve(float a);//prototype

int main()//main function
{
    float m;//declaring a float variable
    cin>>m;//inputing the variable
    float w=solve(m);//storing the value of the declared function
    cout<<"weight="<<w<<endl;//printing the ourput
}
float solve(float a )//user defined function
{
    return a*g;//returning the value to the main function
}

