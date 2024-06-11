//cerr in c++ is used to show error messages like cout to show messages.
//fstream is a library in c++ which is used to create, write or read files.
//ofstream 	Creates and writes to files
//ifstream 	Reads from files
//fstream 	A combination of ofstream and ifstream: creates, reads, and writes to files
#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    ifstream cinf("File1.txt");
    while(getline(cinf,a)){
        cout<<a<<endl;
    }
    cinf.close();
}