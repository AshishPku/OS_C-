#include <bits/stdc++.h>
#include "trie.cpp"
using namespace std;
int main()
{
    Trie obj;
    vector<string> data;
    string a;
    ifstream cinf("File1.txt");
    while(getline(cinf,a)){
        obj.insert(a);
    }
    cinf.close();
    int choice;
    do
    {
        cout << "-----------------------------------------------------------\n";
        cout << "1. Exact word search.\n";
        cout << "2. Prefix Search.\n";
        cout << "0. Exit.\n";
        cin >> choice;
        string pattern;
        switch (choice)
        {
        case 1:
            cout<<"Enter exact word you want to search: ";
            cin>>pattern;
            if(obj.search(pattern))
            {
                cout<<pattern;
                cout << " string Exists.\n";
            }
            else
            {
                cout << "NOT Found.\n";
            }
            break;
        case 2:
            cout<<"Enter any prefix: ";
            cin>>pattern;
            cout<<"List of words:-"<<endl;
            obj.startsWith(pattern);
            break;
        default:
            break;
        }
        } while (choice);
    return 0;
}
