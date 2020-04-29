#include<bits/stdc++.h>
using namespace std;
int main()
{
    //similar to vectors except they are not contigous and hence only use iterators.
    //same methods supportable as vectors+ push & pop both front and back.
    deque<int>dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(0);
    dq.push_front(-10);
    //iterating over the dequeu.
    for(auto x:dq)
    cout<<x<<" ";
    cout<<endl;
    //Using iterator.
    for(auto it=dq.begin();it!=dq.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    //size or empty.
    if(dq.empty())
    {
      cout<<"Queue is empty\n";
    }
    else
    {
cout<<"Size of dequeu is "<<dq.size()<<endl;
    }
    //Remove elements from front and back
    dq.pop_front(); //this will delete -10
    dq.pop_back(); //this will delete 20
    //print remaining elements
      for(auto it=dq.begin();it!=dq.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    //insert at the given iterator
    //find element
    auto it1=find(dq.begin(),dq.end(),10);
    dq.insert(it1+1,20); // 0,10,20
    //remove from given iterator or range of iterator.
    dq.erase(it1); //deletes previous 10
    //print remaining elements.
       for(auto it=dq.begin();it!=dq.end();it++)
    {
        cout<<*it<<" ";
    }
    //front and back elements
    cout<<"\nFront element is "<<dq.front()<<endl;
    cout<<"Back element is "<<dq.back()<<endl;
//swap to swap two deque.
    //clear as dq.clear()
    cout<<endl;
    return 0;
}