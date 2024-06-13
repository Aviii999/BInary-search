#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{1,2,3,4,5,6,7,8,9};
    cout<<"enter the number you want to search "<<endl;
    int target;
    cin>>target;
    if(binary_search(arr.begin(),arr.end(),target))
    cout<<"the number is found ";
    else{
        cout<<"the number is not found ";
    }
    


}