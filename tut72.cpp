// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-72
// visit https://www.cplusplus.com/reference/list/list/ to know about member functions.

#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    list<int> :: iterator it;       // declaring an iterator

    for(it=lst.begin(); it!=lst.end(); it++)        // lst.end() returns the end of the list.
    {
        cout<<*it<<" ";
    }        
    cout<<endl;
}

int main(){
    
    list<int> list1;        // List of 0 Length
    
    list1.push_back(5);     // Inserts at the end of the list
    list1.push_back(7);
    list1.push_back(9);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);

    // list<int> :: iterator iter;     // declaring an iterator
    // iter = list1.begin();           // places iterator at begining of the list
    // cout<<*iter<<" ";
    // iter++;                         // just like pointer in array it shifts to next element
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";

    // Sorting the list
    list1.sort();

    display(list1);

    // Removing elements from the list :

    list1.pop_back();       // Removes 1 element from end of the list
    display(list1);
    list1.pop_front();      // Removes 1 element from front.
    display(list1);
    list1.remove(9);        // Removes the element given
    display(list1);

    list<int> list2(3);     // Empty list of size 7
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 12;
    iter++;
    *iter = 34;
    iter++;
    *iter = 5;
    iter++;

    cout<<endl; 
    display(list2);

    // Merge 2 kist
    list1.sort();
    list2.sort();           // gives sorted list automaticallly       

    list1.merge(list2);

    cout<<"List 1 After merging: ";
    display(list1);

    // Reversing the list
    list1.reverse();
    display(list1);
    
    return 0;
}