#include<bits/stdc++.h>
using namespace std;
int main()
{
set<int>s; //set 's' to store integers.
//empty() and size()
if(s.empty())
{
cout<<"Set is empty"<<endl;
}
else
{
cout<<"Size of set is "<<s.size()<<endl;
}
//insert a new element in set
s.insert(10);
s.insert(10); //Won't be inserted.
//erase a element from set
s.erase(10); //we can also erase the set element by pointing it with iterator
s.insert(10);
s.erase(s.find(10)); //delete by pointer position
//insert 5 element in set
int num;
for(int i=0;i<5;i++)
{
cin>>num;
s.insert(num);
}
//iterate the set
for(auto it=s.begin(); it!=s.end();it++)
{
cout<<*it<<" ";
}
cout<<endl;
//find a num;
cout<<"Enter a number to find\n";
cin>>num;
if(s.find(num)!=s.end())
{
cout<<"Found in set\n";
}
else
{
cout<<"Not in set, so it will be unique\n";
}
//count occurence, can be used to search occurence
cout<<s.count(3)<<endl;
//upper bound
cout<<"The lower bound for 1 in set is"<<*s.lower_bound(1)<<endl;
// lower bound
cout<<"The upper bound for 1 in set is"<<*s.upper_bound(1)<<endl;
//swap
set<int>s2;
s2.swap(s);
//clear the set
s2.clear();
//decreasing order set
set<int, greater<int> >s3;
s3.insert(10);
s3.insert(20);
s3.insert(30);
//This will be re-arranged as 30,20,10
for(auto it=s3.begin(); it!=s3.end();it++)
{
cout<<*it<<" ";
}
return 0;
}



