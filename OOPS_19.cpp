/*
    File Handling
        File Handling is a technique with the help of which we store data 
        permanently to hard disk.

    Data Persistance
        Life of data stores in a variable can't exceeds with life of program.

    Streams
        It is an abstraction used to represent sequence of bytes that are being read from
        or written to a file.

        It is of two types :
            1) istream  - - > read from file
            2) ostream  - - > write to file
*/

#include <fstream>
#include <iostream>

using namespace std;

/*
    In order to read/write data with file we need input/output streams.
    When we create an object of ifstream/ofstream,required streams got ready.
*/
int main()
{
    // output stream ready
    ofstream fout;

    // output stream got attched to file
    fout.open("Sarthak.txt");

    // writting the data
    fout<<"This is Insane!";


    // input streams ready
    ifstream fin;

    // input stream got attched to file
    fin.open("Sarthak.txt");

    // reading the data
    char ch;
    //fin>>ch;
    ch = fin.get();

    while(!fin.eof())
    {
        cout<<ch;
        //fin>>ch;
        ch = fin.get();
    }
    fin.close();


    return 0;
}




