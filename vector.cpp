#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //Type of vector declaration and initialization
    vector<int>v0{1,2,3,4,5}; //basic vector declaration with respective elements
    vector<int>v1; //Basic vector declaration
    vector<int>v2(5); //Vector of size 5
    vector<int>v3(5,6);//vector of size 5 with initial value 6
    vector<int>v4(v3); //vector of same dimension and initial value as of v3
    vector<int>v5(v3.begin(),v3.end()); //similar as above with begin() and end() iterator
    vector< vector<int> >v6(2,v3); //2-d vector of row 2 and col same as v3
    vector< vector<int> >v7{{1,2},{3,4}}; //2*2 vector
    vector< vector<int> >v8(5, vector<int>(2,0)); // 5* vector with each element '0' initialized
    vector<int>v9;
    //Traverse vector  
    //METHOD 1
    for(int i=0;i<v5.size();i++)
    {
        cout<<v5[i]<<" ";
    }
    cout<<endl;
    //METHOD 2
    for(auto it=v4.begin();it!=v4.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
//Traverse 2-d vector
     for(int i=0;i<2;i++)
    { //usually as v[i].size();
        for(int j=0;j<v6[i].size();j++)
        {
            cout<<v6[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
   //Input value from user in vector v1
   int n; //number of values to be inserted
   cout<<"Enter the number of value to be inserted\n";
   cin>>n;
   v1.resize(n); //resize so that it can accomodate 5 elements.
   for(int i=0;i<n;i++)
   {
       cin>>v1[i];
   }
   //traverse v1
    for(int i=0;i<n;i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    /* Suppose you don't want to resize afterall it is a dynamically allocated array, right! */
   int n1; //number of values to be inserted
   cout<<"Enter the number of value to be inserted\n";
   cin>>n1;
   int num;
   for(int i=0;i<n1;i++)
   {
       cin>>num;
       v9.push_back(num); //push_back and it will automatically increase size
   }
    //traverse v9
    for(int i=0;i<n1;i++)
    {
        cout<<v9[i]<<" ";
    }
    cout<<endl;
    //You could also have used iterator to traverse.
    /* -------------------- Important methods -----------------------*/
    vector<int>v10{1,2,3,4,5};
    //1. begin()
    int data=*(v10.begin());
    cout<<data<<endl;
    //2. end()
    data=*(v10.end()-1); //it points to next imaginary element to last element
    cout<<data<<endl;
    //3. rend()
    data=*(v10.rend()-1);//it points to previous element of first element
    cout<<data<<endl;
     //4. rbegin()
    data=*(v10.rbegin()); //it points to last element
    cout<<data<<endl;
    //5. insert(pos,value)-> pos before whom you want to insert
    v10.insert(v10.begin(),-1);
    v10.insert(v10.begin()+v10.size(),6); 
    //multiple values like v10.insert(v.10.begin()+2,{10,20,30});
     for(int i=0;i<v10.size();i++)
    {
        cout<<v10[i]<<" ";
    }
    cout<<endl;
    //6. erase(start pos, end pos)-> excluding end pos
    v10.erase(v10.begin(),v10.begin()+2); //
    for(int i=0;i<v10.size();i++)
    {
        cout<<v10[i]<<" ";
    }
    cout<<endl;
    //7. clear() -> clears the whole vector
    //8. assign(size, value)-> it assigns new value to vector v10.assign(10,3), new vector of size 10 with value 3
    //9. push_back()
    //10. pop_back()-> to remove elements from back

    //11. front() -> returns value of first element in vector
    cout<<v10.front()<<" ";

    //12. back() -> returns value of last element in vector
    cout<<v10.back()<<" ";

    //13. empty() -> returns 0/1 on whether or not vector in empty.
    //14.swap(vector2) -> Swap the vector with another vector
}
