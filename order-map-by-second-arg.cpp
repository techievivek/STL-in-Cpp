#include<bits/stdc++.h>
using namespace std;
bool sort_by_second(pair<int,int>f,pair<int,int>s)
{
return f.second>s.second;
}
int main()
{
map<int,int>mp;
int first,second;
for(int i=0;i<5;i++)
{
    cin>>first>>second;
    mp[first]=second;
    //mp.insert(make_pair(first,second))
    //or make a pair and insert
}
vector< pair<int,int> >v(mp.begin(),mp.end());
sort(v.begin(),v.end(),sort_by_second);
cout<<"Initial order"<<endl;
for(auto x: mp)
{
    cout<<x.first<<" "<<x.second<<endl;
}
cout<<"Final order, observe the key, value"<<endl;
for(auto x: v)
{
    cout<<x.first<<" "<<x.second<<endl;
}
//we could have achieved same thing without vector.
//Using set or new multi-map(as values can be same and we don't want to miss those).
//we could have copied value as (second,first) in new multi-map.
cout<<endl;
}