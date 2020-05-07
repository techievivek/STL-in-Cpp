#include<bits/stdc++.h>
using namespace std;
int main()
{
//For integer
int *p=new int; //This will return a pointer to a 4-byte memory location in heap.
*p=10;
cout<<*p<<endl;
delete p; //Clear the memory data so that it can be reused
//For character
char *p1=new char;
*p1='v';
cout<<*p1<<endl;
delete p1;
//For 1-dimensional array
int *p2=new int[20]; //This returns a 20*4 byte of memory from heap and stores the 0th element address into p2.
for(int i=0;i<20;i++)
cin>>p2[i]; //insert data as we do with array.
//Display the data
for(int i=0;i<20;i++)
cout<<p2[i]<<" ";
cout<<endl;
//Delete the memory data.
delete []p2;
//For 2-d array
//First we need something so that it stores 1-d array's first element address.
//Lets create 2*5 2-d array.
int **p3=new int*[2]; //For no of rows
for(int i=0;i<2;i++)
{
p3[i]=new int[5];// create single row 5-elements array and stores the first element in *(p+i)
//Insert value
for(int j=0;j<5;j++)
{
cin>>p3[i][j];
}
}
//Display the elements
for(int i=0;i<2;i++)
{
for(int j=0;j<5;j++)
{
cout<<p3[i][j]<<" ";
}
cout<<endl;
}
//De-allocate the memory
//First de-allocate the internal row.
for(int i=0;i<2;i++)
{
delete []p3[i]; //This will give initial address of each 5-row elements.
}
delete []p3;
//Similarly we can create at runtime.
int n;
cout<<"Enter the size of array you want to create\n";
cin>>n;
int *p4=new int[n];
//Now take input, similar you can do for multi-dimensional array.
delete []p4;
return 0;
}


