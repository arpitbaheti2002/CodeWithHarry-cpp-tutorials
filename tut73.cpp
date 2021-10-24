// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-73
// visit https://en.cppreference.com/w/cpp/container/map to know about member functions.

#include<iostream>
#include<map>
#include<string>
using namespace std;

// Map is an associatove array
int main(){
    map<string, int> marksMap;
    marksMap["Arpit"] = 95;                 // key value pairs
    marksMap["Harry"] = 100;
    marksMap["Rownack"] = 50;

    // Insert
    marksMap.insert({{"CBSE",98},{"ICSE",90}});

    // Display
    map<string, int> :: iterator itr;       // Declaring an iterator

    for(itr=marksMap.begin(); itr!=marksMap.end(); itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<endl;           // object.first gives key and object.second gives value 
    }

    // Size:
    cout<<"The size is "<<marksMap.size()<<endl;
    cout<<"The maximum size is "<<marksMap.max_size()<<endl;
    cout<<"The empty's  return value is "<<marksMap.empty()<<endl;          // 0 indicates map is no enmpty.

    return 0;
}