#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("MYFILE.txt");
    fout<<"HELLO "<<endl;
    fout.close();


}
