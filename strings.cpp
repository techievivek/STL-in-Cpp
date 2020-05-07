#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
s="vivek kumar";
s+="roy";
//Size and length of the string
cout<<s.size()<<endl;
cout<<s.length()<<endl;
//Check if string is empty
if(s.empty())
{
cout<<"String is empty\n";
}
else
{
cout<<"The string is not empty\n";
}
s.clear();
if(s.empty())
{
cout<<"String is empty\n";
}
else
{
cout<<"The string is not empty\n";
}
s="This is a demo string";
//Iterate over string
for(int i=0;i<s.size();i++)
{
cout<<s[i];
}
cout<<endl;
//Using iterator
for(auto it=s.begin();it!=s.end();it++)
{
cout<<*it;
}
cout<<endl;
if(s.find("demo")!=-1)
{
cout<<"Demo is present in string\n";
}
else
{
cout<<"Demo is not present in string\n";
}
cout<<s.size()<<endl;
//Push back and pop back in string
s.push_back('2'); //Charcter to insert in string.
cout<<s<<endl;
cout<<s.size()<<endl;
s.pop_back();
cout<<s<<endl;
s+='2'; //Either character or string can be appended.
cout<<s<<endl;
//s.erase()
//s.insert()
//s.copy()
//s.swap()
//s.replace()
}





