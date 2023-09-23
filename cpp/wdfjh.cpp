#include<stdio.h>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int ar[5]={5,2,1,6,3};
    list<int>mylist(ar,ar+5);
    list<int>::iterator it;
   /* mylist.push_back(10);
    mylist.push_back(15);
    mylist.push_front(5);*/
    it=find(mylist.begin(),mylist.end(),3);
    mylist.erase(it);
//    mylist.insert(it);
    for(it=mylist.begin(); it!=mylist.end(); it++)
    {
        cout<<*it<<" ";
    }
}

