#include<bits/stdc++.h>
using namespace std;
int main()
{
queue<int>q;
//size and empty
if(q.empty())
{
cout<<"Queue is empty\n";
}
else
{
cout<<"Queue size is "<<q.size()<<endl;
}
int n;
for(int i=0;i<5;i++)
{
cin>>n;
q.push(n);
}
cout<<"Front element of queue is "<<q.front()<<endl;
cout<<"Rear element of queue is "<<q.back()<<endl;
//swap 2 queue
queue<int>q2;
//q2.swap(q);
queue<int>q3;
//q3=q2; //assignment
//traverse queue
while(!q.empty())
{
cout<<q.front()<<" ";
q.pop();
}
return 0;
}
