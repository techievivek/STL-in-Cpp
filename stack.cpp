#include<bits/stdc++.h>
using namespace std;
int main()
{
stack<string>s;
//size and empty
if(s.empty())
{
cout<<"Stack is empty\n";
}
else
{
cout<<"Size of stack is "<<s.size()<<endl;
}
string st;
for(int i=0;i<5;i++)
{
cin>>st;
//push to insert into stack
s.push(st);
}
stack<string>s2;
s2=s;
while(!s.empty())
{
cout<<s.top()<<endl;
//s.top-> returns top element from stack
s.pop();
}
//swap stacks
stack<string>s3;
s3.swap(s2);
return 0;
}
