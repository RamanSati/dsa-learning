#include<iostream>
#include<fstream>
#include<string>
using namespace std;
 
int main()
{
 
    // declaring an object of the type ofstream
    ofstream out;
 
    //connecting the object out to the text file using the member function open()
    out.open("sample60.txt");
 
    //writing to the file
    out<<"This is me\n";
    out<<"This is also me";
    //closing the file connection
    out.close();
    return 0;
}
