#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
   // vector<int>arr{1,2,3,4,5,6,7,8,9};
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size= sizeof(arr)/sizeof(int);
    cout<<"the size of array is "<<size<<endl;
    cout<<"enter the number you want to search "<<endl;
    int target;
    cin>>target;
    //if(binary_search(arr.begin(),arr.end(),target)) // for vector 
    if(binary_search(arr,arr+size,target))
    cout<<"the number is found ";
    else{
        cout<<"the number is not found ";
    }
    


}
