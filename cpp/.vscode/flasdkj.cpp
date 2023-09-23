#include<iostream>
using namespace std;

int add(int a,int b);
int subtract(int a,int b);
int multiply(int a,int b);
int divide(int a,int b);
int mod(int a,int b);

int main()
{
    int a,b,result;
    char c;
    cin>>a>>c>>b;
    switch(c)
    {
    case '+':
        result = add(a,b);
        cout<<result<<endl;
        break;

    case '-':
        result = subtract(a,b);
        cout<<result<<endl;
        break;

    case '*':
        result = multiply(a,b);
        cout<<result<<endl;
        break;

    case '/':
        result = divide(a,b);
        cout<<result<<endl;
        break;

    case '%':
        result = mod(a,b);
        cout<<result<<endl;
        break;
    }
    return 0;
}

int add(int a, int b)
{
    int sum = a+b;
    return sum;

}
int subtract(int a, int b)
{
    int sub = a-b;
    return sub;
}
int multiply(int a, int b)
{
    int mul = a*b;
    return mul;

}
int divide(int a, int b)
{
    int div =  a/b;
    return div;
}
int mod(int a, int b)
{
    int g=a%b;
    return g;
}
