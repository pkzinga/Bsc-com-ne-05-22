#include<iostream>
#include<fstream>

using namespace std;

int main()
{

    streampos begin;
    streampos end;

    ifstream myFile("example.bin", ios::binary);
    begin = myFile.tellg();
    myFile.seekg (0, ios::end);
    end = myFile.tellg();
    myFile.close();
    cout<< "size is: " << (end-begin) <<" byte, \n";

    return 0;
}