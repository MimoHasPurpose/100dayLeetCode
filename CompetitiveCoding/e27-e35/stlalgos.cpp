#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    int min=*min_element(v.begin(),v.end());
    cout<<min<<endl;
    int max=*max_element(v.begin(),v.end());
    cout<<max<<endl;
    int sum=accumulate(v.begin(),v.end(),0);
    cout<<sum<<endl;
    int ct=count(v.begin(),v.end(),2);
    cout<<ct<<endl;
    auto it=*find(v.begin(),v.end(),2);
    if(it!=v.end())
        cout<<*it<<endl;
    else
        cout<<"Element not found!"<<endl;
    cout<<it<<endl;


    string s="abcdefghijklmnop";
    reverse(s.begin(),s.end());
    auto sum=[](int x,int y){return x+y;};
    cout<<sum(2,3);


    cout<<s<<endl;
}
