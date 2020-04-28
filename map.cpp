#include<bits/stdc++.h>
using namespace std;
int main()
{
map<int,int>mp; //create a int,int map.
map<int,int>::iterator it; //iterator for map.
mp[1]=1; //store value in map
mp[0]=2; //It will get sorted and 0th element is mp[0]=2;
it=mp.begin();
cout<<it->first<<" "<<it->second<<endl;
mp.insert(make_pair(3,5)); //make_pair method to insert a pair in map
pair<int,int>p(2,4);
mp.insert(p);
//mp.insert(6,4); -> this will not work.
for(auto i=mp.begin();i!=mp.end();i++)
{
//Traverse map and print all element
cout<<i->first<<" "<<i->second<<endl;
}
//find an element in map.
if(mp.find(3)!=mp.end())
{
cout<<"Element is present in map"<<endl;
}
else
{
cout<<"Element is not present in map"<<endl;
}
//Print count of a number
cout<<mp.count(3)<<endl;
map<int,int>mp1;
mp.swap(mp1); //for swapping two maps.
//empty and size
if(mp.empty())
{
cout<<"Map is empty"<<endl;
}
else
{
cout<<"The size of mp is"<<mp.size()<<endl;
}
for(auto i=mp1.begin();i!=mp1.end();i++)
{
//Before deleting
cout<<i->first<<" "<<i->second<<endl;
}
//erase a particular entry
mp1.erase(3);
for(auto i=mp1.begin();i!=mp1.end();i++)
{
//After deleting
cout<<i->first<<" "<<i->second<<endl;
}
//Element at present in mp1-> (0 2), (1 1) (2 4)
//lower bound in map
cout<<"Lower bound for 0 is "<<mp1.lower_bound(0)->first<<endl;
//upper bound in map
cout<<"Upper bound for 0 is "<<(mp1.upper_bound(0))->first<<endl;
map<int,int>mp2;
mp2=mp1; //copies value, they don't point to same memory location unlike other programming language i.e python, JS
mp2[0]=10;
cout<<mp1[0]<<endl;
//clear the map mp1
mp1.clear();
//create map in decreasing order of key value
map<int,string,greater<int> >mp3;
mp3[0]="vivek";
mp3[1]="hello";
//This will be rearranged as mp[1]=2, mp[0]=1;
for(auto i=mp3.begin();i!=mp3.end();i++)
{
cout<<i->first<<" "<<i->second<<endl;
}
return 0;
}



