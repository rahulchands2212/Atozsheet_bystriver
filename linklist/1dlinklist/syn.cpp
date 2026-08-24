#include<bits/stdc++.h>
using namespace std;

class Listnode{
    public:
    int data;
    Listnode *next;

    Listnode(int data,Listnode *next){
        this->data = data;
        this->next = next;
    }
};

int main(){
    vector<int>arr = {1,2,3};
    Listnode *head = new Listnode(arr[0],nullptr);
    Listnode *temp = head;
    int n = arr.size();
    for(int i = 1;i<n;i++){
        Listnode *address = new Listnode(arr[i],nullptr);
        temp->next = address;
        temp = address;
    }

    temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<"-->";
        temp = temp->next;
    }
    return 0;
}