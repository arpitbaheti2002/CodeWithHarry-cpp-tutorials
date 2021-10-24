//  Notes :-->  https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-5

#include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout<<"Enter the value of num 1 :- ";   //  '<<' is called Insertion operator.
    cin>>num1;                              //  '>>' is called Extraction operator.
    cout<<"Enter the value of num 2 :- ";   //  '<<' is called Insertion operator.
    cin>>num2;                              //  '>>' is called Extraction operator.    

    cout<<"The sum is "<<(num1 + num2);
    return 0;
}


/*  There are other data types also :- 
    1.  short int   (2 bytes)   (256*256/2)   to  (256*256/2 - 1)
    2.  unsigned short int   (2 bytes)   (0)   to  (256*256 - 1)
    3.  unsigned int    (4 bytes)   (0) to  (256*256*256*256 - 1)
    4.  int (4 bytes)
    5.  long int (4 bytes)
    6.  unsigned long int (4 bytes)
    7.  long long int (8 bytes)
    8.  unsigned long long int (8 bytes)
    9.  signed char (1 byte)    (-128)  to  (127)
    10. unsigned char   (1 byte)
    11. float   (4 byte)
    12. double   (8 byte)
    13. long double   (12 byte) 
    14. wchar_t     (2 to 4 byte)   (1 wide character)    
*/



    