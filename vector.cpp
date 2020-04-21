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
    for(int i=0;i<v5.size();i++)
    {
        cout<<v5[i]<<" ";
    }
    cout<<endl;
     for(int i=0;i<2;i++)
    {
        for(int j=0;j<v3.size();j++)
        {
            cout<<v6[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;


}