#include<bits/stdc++.h>
using namespace std;
int main(int argc,char* argv[]){
    if(argc>1){
        cout<<argc<<" arguments provided."<<endl;
        cout<<"arguments are following as:-"<<endl;
        for(int i=1;i<argc;i++){
            cout<<argv[i]<<endl;
        }
    }else{
        cout<<"No any arguments provided."<<endl;
    }
}