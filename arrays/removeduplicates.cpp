#include<bits/stdc++.h>
using namespace std;
int removeduplocates(vector<int> nums){
    int pointer=0 ;
    for (int i =1 ; i< nums.size();i++){
        if(nums[i]==nums[pointer]){
            continue;
        }
        else if( nums[i] > nums[pointer]){
            pointer+=1;
            nums[pointer]=nums[i];
        }

    }
    return pointer+1;

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
    cout<< removeduplocates(nums);
}