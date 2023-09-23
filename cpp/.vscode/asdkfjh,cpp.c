#include<iostream>//preprocessor directive header file

using namespace std;//using declaration command

int main() //main function
{
    int x,y,rem;//declaring three variables denoting two numbers and their remainder
    cin>>x>>y;//taking two numbers as input
    for(int i=x; y!=0; i++) //using for loop
    {
        rem=x%y;//calculating remainder
        x=y;//replacing x's value with y
        y=rem; //replacing y's value with remainder
    }
    cout<<"GCD = "<<x<<endl;//printing result


        return 0;
}
