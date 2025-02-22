#include<bits/stdc++.h>
using namespace std;

void printarr(vector<int> nums){
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}

int majorityelemt(vector<int> &nums){
    map<int ,int> count;
    int n =nums.size();
    for(auto i :nums){
        count[i]++;
    }
    for(auto i :count){
        if(i.second > n/2 ){
            return i.first;
        }

    }
    return -1;
}

int optimal(vector<int> &nums){
    int ele = nums[0] , count = 1 , n =nums.size();
    for( int i = 1 ; i< n ;i++){
        if(nums[i]==ele){
            count++;
        }
        else{
            count--;
        }
        if(count == 0 ){
            ele = nums[i];
            count++;
        }
    }
    return ele;
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
    cout<<optimal(nums);
}