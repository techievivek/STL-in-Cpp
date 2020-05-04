#include<bits/stdc++.h>
using namespace std;
void disp(priority_queue<int>pq)
{
//pq.size()-> for size
while(!pq.empty())
{
cout<<pq.top()<<" ";
pq.pop();
}
cout<<endl;
}
int main()
{
priority_queue<int>pq;
//All functionality similar to stack
pq.push(-10);
pq.push(0);
pq.push(-100);
pq.push(-40);
pq.push(-50);
//Pass by value(In c++ that's the default unless & or pointer is used)
disp(pq);

/*
Note the syntax for min-heap is quite complex and can be looked on GFG but you can multiply the values by -1, so lowest value has highest priority.
*/
return 0;
}
