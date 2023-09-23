#include<iostream>//preprocessor directive header file

using namespace std;//using declaration command

int check(int s, int m);//prototypiing

int gcd(int a, int b);//prototypiing

int main() //main function
{
    int x,y,c,d;//declaring four variables denoting four numbers
    cin>>x>>y;//taking two numbers as input
    int j=check(x,y);
    cout<<"GCD = "<<j<<endl;//printing result

    cin>>c>>d;//taking another two numbers as input

    int k= gcd(c,d);

    cout<<"GCD = "<<k<<endl;//printing result


    return 0;
}


int check(int s, int m)
{
     for(int i=s;m!=0;i++)//using for loop
    {
       int rem;
       rem=s%m;//calculating remainder
       s=m;//replacing x's value with y
       m=rem; //replacing y's value with remainder

    }
    return s;//returning value
}


int gcd(int a, int b)//function for recursion
{
    int c=a%b;//calculating remainder
    if(c!=0)
        return c;//base statement
    a=b;
    b=c;
    return a;//returning value

}
