#include<iostream>
#include<vector>

using namespace std;

int binarysearch(vector<int>arr,int target){
    int start = 0;
    int end = arr.size();
    int mid = start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            start= mid+1;

        }
        else{
            end=mid-1;

        }
        mid=start+(end-start)/2;
    }
   return -1;


}

int main(){
    vector<int>arr{1,2,3,4,5,6,7,8};
    //int arr[]={1,2,3,4,5,6,7,8};
    
    // int size =sizeof(arr)/sizeof(int);
    // cout<<"size of array is "<<size<<endl;
    cout<<"enter the number you want to search "<<endl;

    int target;
    cin>>target;
    int indexnumber=binarysearch(arr,target);
    cout <<"The number is found on the index of "<<indexnumber<<endl;
    // if( binarysearch(arr,size,target)){
    //     cout<<"the number is found on the index of  ";
    // }
    
    // else {
    //     cout<<"the number is not found ";
    // }
    
}
