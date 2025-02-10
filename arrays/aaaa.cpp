#include<bits/stdc++.h>
using namespace std;

void printarr(vector<int> nums){
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}
int main(){
    vector<int> nums;
    int n ;
    cout << "enter size of array";
    cin >> n;
    for(int i= 0; i< n ;i++){
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
}