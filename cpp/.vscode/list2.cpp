#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<string>s;
    set<string>::iterator it;
    s.insert("bodrul");
    s.insert("amin");
    s.insert("nazrul");
    s.insert("minal");
    pair<set<string>::iterator,bool>p;
    p=s.insert("adil");
    if(p.second == false)
        cout<<"cant be inserted"<<endl;
    else
        cout<<"inserted"<<endl;
    cout<<endl;

}
