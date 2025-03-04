#include<bits/stdc++.h>
using namespace std;

void printarr(vector<int> nums){
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}

vector<int> nextpermutation(vector<int> &nums){
    int n= nums.size() , index = -1;
    for(int i = n-1 ;i > 0 ;i--){
        if(nums[i]> nums[i-1]){
            index=i-1;
            break;
        }
    }
    if(index==-1){
        reverse(nums.begin() , nums.end());
        return nums;
    }
    for(int i = n-1 ; i>index ;i--){
        if(nums[i]>nums[index]){
            swap(nums[i] , nums[index]);
            break;
        }
    }
    reverse(nums.begin()+index+1 , nums.end());
    printarr(nums);
    return nums;

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
    nextpermutation(nums);
}