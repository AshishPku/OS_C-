#include<bits/stdc++.h>
using namespace std;
struct Node {
    char val;
    int flag=0;
    std::vector<Node*> v1;
    
    Node():v1(26,nullptr){};// Default constructor initializes v1 with 26 nullptrs
    Node(char val):val(val), v1(26, nullptr) {};// Parameterized constructor initializes v1 with 26 nullptrs
};
class Trie {
public:
    string temp;
    Node* root=new Node('A');
    void insert(string word) {
        Node* n=root;
        int size=word.length();
        for(int i=0;i<size;i++){
            if(!n->v1[word[i]-'a']){
                Node* newnode=new Node(word[i]);
                n->v1[word[i]-'a']=newnode;
            }
            if(i==(size-1)){
                n->v1[word[i]-'a']->flag=1;
            }
            n=n->v1[word[i]-'a'];
        }
    }
    
    bool search(string word) {
        Node* n=root;
        int size=word.length();
        for(int i=0;i<size;i++){
            if(!n->v1[word[i]-'a']) return 0;
            if(i==(size-1)){
                if(n->v1[word[i]-'a']->flag==0) return 0;
            }
            n=n->v1[word[i]-'a'];
        }
        return 1;
    }
    bool startsWith(string prefix) {
        Node* n=root;
        for(char x:prefix){
            temp.push_back(x);
            if(!n->v1[x-'a']){
                temp.clear();
                return 0;
            }
            n=n->v1[x-'a'];
        }
        func(n);
        temp.clear();
        return 1;
    }
    void func(Node* root){
        if(root){
            int count=0;
            for(auto x:root->v1){
                if(x) {
                    temp.push_back(x->val);
                    if(x->flag==1) cout<<temp<<endl;
                    func(x);
                    temp.pop_back();
                    count++;
                }
            }
        }
    }
};