#include<iostream>
#include<utility>
using namespace std;
int main()
{
pair<int,int>p1;
pair<int,char>p2;
pair<int,string>p3(1,"vivek");
pair<int,string>p4(p3);
cout<<p4.first<<" "<<p4.second<<endl;
p1=make_pair(1,2);
cout<<p1.first<<" "<<p1.second<<endl;
p2=p1;
//swap pairs
pair<int,int>p5;
p1.swap(p5);
p1.first=4;
p1.second=5;
cout<<p1.first<<" "<<p1.second<<endl;
//Comparison operator in pair(useful for understading sorting)
p5.first=4;
p5.second=10;
//p1=(4,5) and p5=(4,10)
if(p1==p5)
{
cout<<"Both are equal"<<endl;
}
else
{
cout<<"Both are not equal"<<endl;
}
if(p1<=p5)
{
cout<<"p1 is less than to p5"<<endl;
}
else
{
cout<<"p1 is grater than or equal to p5"<<endl;
}
//make both equal
p5.first=4;
p5.second=5;
//p1=(4,5) and p5=(4,5)
if(p1==p5)
{
cout<<"Both are equal"<<endl;
}
else
{
cout<<"Both are not equal"<<endl;
}
if(p1<=p5)
{
cout<<"p1 is less than or equal to p5"<<endl;
}
else
{
cout<<"p1 is grater than or equal to p2"<<endl;
}
}


