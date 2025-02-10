#include<bits/stdc++.h>
using namespace std;
int secoundlarge(vector<int> nums ){
    int temp=-1 , large =nums[0];
    if( nums.size()==0 || nums.size()==1){
        cout<< "length of array is very small";
        return 0;
    }
    for(int i=1 ;i<nums.size() ; i++ ){
        if(large < nums[i]){
            temp = large;
            large = nums[i];
        }
    }
    return temp ;
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
    cout << secoundlarge( nums);
}