#include<bits/stdc++.h>
using namespace std;

void printarr(vector<int> nums){
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}

vector<int> rearrange(vector<int> &nums){
    int n = nums.size(),pos=0 , neg = 1;
    vector<int> ans(n);
    for(int i = 0 ;i< n ;i++){
      
        if(nums[i]<0){
            ans[neg]=nums[i];
            neg+=2;
        }
        else{
            ans[pos]=nums[i];
            pos+=2;
        }
    }
    printarr(ans);
    return ans;
}

vector<int> rearrangeNotEqualEle(vector<int> &nums){
    int n= nums.size();
    vector<int> pos;
    vector<int> neg;
   
    for(int i =0 ;i<n ; i++){
        if(nums[i]<0){
            neg.push_back(nums[i]);
        }
        else{
            pos.push_back(nums[i]);
        }

    }
    int size = min(pos.size() , neg.size());
    for(int i =0 ;i< size ;i++){
        nums[i*2]=pos[i];
        nums[i*2 +1]=neg[i];
    }
    int index = size*2;
    if(pos.size()>neg.size()){
       
        for(int i = size ;i< pos.size() ;i++){
            nums[index]=pos[i];
            index++;
        }
    }
    else{
        for(int i = size*2 ;i< neg.size() ;i++){
            nums[index]=neg[i];
            index++;
        }
    }
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
    // rearrange(nums);
    rearrangeNotEqualEle(nums);
}