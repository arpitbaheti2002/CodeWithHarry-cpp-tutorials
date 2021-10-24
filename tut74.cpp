// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-74

#include<iostream>
#include<functional>        // All functional objects is in this file
#include<algorithm>
using namespace std;

int main(){
    // Function Objects (Functor): Function wrapped in a clas so that it is available like a object.
    int arr[] = {1, 73, 4, 2, 54, 16};

    // Sort:
    // sort(arr, arr+4);                    // This will sort upto 4th element
    sort(arr, arr+6);                    // Sort in ascending order
    // sort(arr, arr+6, greater<int>());        // Sort in descending order

    for(int i =0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}