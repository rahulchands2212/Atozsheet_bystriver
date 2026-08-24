#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;

    //constructor
    node(int data,node *next){
        this->data = data;
        this->next = next;
    }
};

int main(){
    vector<int>nums = {1,2,3,4,5};
    int n = nums.size();
    //create a head of linklist;
    node *head = new node(nums[0],nullptr); 
    node *temp = head;
    //data insert from array to linklist;
    for(int i=1;i<n;i++){
        node *newnode = new node(nums[i],nullptr);
        temp->next = newnode;
        temp = newnode;
    }
    //counter for len find
    int count = 0;
    temp = head;
    while(temp!=nullptr){
        count++;
        temp = temp->next;
    }
    //print len;
    cout<<"length of linklist : "<<count;

    return 0;
}

