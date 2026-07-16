#include<bits/stdc++.h>
using namespace std;


void merge(vector<int>&arr,int low,int mid,int high){
    vector<int>temp;        // If temp is global, call temp.clear() at the beginning of every merge()
// Otherwise values from previous merge calls will remain in temp.

    /*
     left half = low ->mid
    right = mid+1 -> high 
    */
    int left = low; 
    int right = mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }

    }

    //remaing left
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }

    //remaing right
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    //store in org arr
    /*
     low-low = 0 
    low+1 - low = 1
    low+2 -low = 2
    */
    for(int i=low;i<=high;i++){
        arr[i] = temp[i-low];
    }
    
}


void mergesort(vector<int>&arr,int low ,int high){
    if(low>=high){      //it work low==high also
        return;
    } 
   // Calculate the middle index
    int mid = (low+high)/2;
// Preferred in production:
// int mid = low + (high - low) / 2;

    mergesort(arr,low,mid);     //left half
    mergesort(arr,mid+1,high); //right half
    merge(arr,low,mid,high);    //merge
}

int main(){
    vector<int>arr =  {3,1,2,4,1,5,2,6,4};
    int low = 0;
    int high = 8;
    mergesort(arr,low,high);

    for(int i=low;i<=high;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}