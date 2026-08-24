#include<bits/stdc++.h>
using namespace std;

class Listnode{
    public:
    int data;
    Listnode *next;

    //constructor
    Listnode(int data,Listnode *next){
        this->data = data;
        this->next = next;
    }
};

int main(){
    vector<int>arr = {4,5,1,9};
    Listnode *head = new Listnode(arr[0],nullptr);
    Listnode *temp = head;
    int n = arr.size();
    //array to linklist
    for(int i = 1;i<n;i++){
        Listnode *address = new Listnode(arr[i],nullptr);
        temp->next = address;
        temp = address;
    }

    //traverse in linklist
    temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<"-->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;


    //find element and return node;
     int node = 9;
     int position = 0;
    temp = head;
    while(temp!=nullptr){
        position++;
        if(temp->data == node){
            break;
        }
        temp = temp->next;
    }


    if(temp == nullptr){
        cout<<"position : false";
    }else{
         cout<<"position : "<<position;
    }
   
   
    return 0;
}



