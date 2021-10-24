// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-71
// visit https://en.cppreference.com/w/cpp/container/vector to know about member functions.

#include<iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector<T> &v){
    cout<<"Displaying this vector "<<endl;
    for(int i=0; i < v.size(); i++)                 // object.size() returns no of elements in vector
    {
        // cout<<v.at(i);                              // displays element at index i
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){

    // Ways to create a vector
    
    vector<int> vec1;           // zero length integer vector
    // display(vec1);

    vector<char> vec2(4);       // 4-element character vector
    vec2.push_back('a');
    vec2.push_back('b');
    // display(vec2);

    vector<char> vec3(vec2);    // 4-element cgaracter vector from vec2
    // display(vec3);

    vector<int> vec4(10, 2);    // 10-element vector of 2s
    // display(vec4);

    // int element, size;

    // cout<<"Enter the size of your vector : ";
    // cin>>size;

    // for(int i = 0; i < size; i++)
    // {
    //     cout<<"Enter an element to add to this vector : ";
    //     cin>>element;
    //     vec1.push_back(element);                        // This function adds element at the end 
    // }
    // display(vec1);

    // vector<int> :: iterator iter = vec1.begin();        // iterator declaration and placing at begining.

    // vec1.insert(iter, 300602);                  // inserts element at place of iterator.
    // vec1.insert(iter+1, 101);

    // vec1.insert(iter+1, 50, 102);               // inserts 50 copies of 102 in vector

    // vec1.pop_back();                        // removes 1 element from end
    
    // display(vec1);
    return 0;
}