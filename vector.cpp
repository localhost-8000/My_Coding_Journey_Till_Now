#include<iostream>
#include<vector>
using namespace std;

int main(){
    //vector<int>v1;
    vector <int> v1 {10,20,30};
    vector <char> v2;
    vector <int> v3(5,10);      //(capacity,initial value)....10,10,10,10,10
    //cout<<v3[0]<<" "<<v3[1]<<endl;
    //cout<<v3[2]<<" "<<v3[3]<<endl;
    //push_back() is a member fn. which can be used to add value to the vector at the end.
    cout<<v2.capacity()<<endl;
    v2.push_back(10);
    cout<<v2.capacity()<<endl;
    v2.pop_back();
    cout<<v2.capacity()<<endl;
    //pop_back() reduce the last element...but capacity remains same..
    cout<<v1.capacity()<<endl;
    v1.pop_back();
    cout<<v1.capacity()<<endl;
    //size() no. of elements in vector
    cout<<"capacity of v2 is :"<<v2.capacity()<<endl;
    cout<<"size of v2 is :"<<v2.size()<<endl;
    //clear() clear all the elements  v2.clear()
    cout<<v1.at(1)<<endl;
    cout<<v1.front()<<endl;
    cout<<v1.back()<<endl;

    cout<<"before insertion"<<endl;
    for(int i=0;i<v1.size();i++)
            cout<<v1[i]<<" ";

    vector<int>::iterator it=v1.begin();
    v1.insert(it+1,15);

    cout<<endl<<"after insertion"<<endl;

    for(int i=0;i<v1.size();i++)
            cout<<v1[i]<<" ";


}
