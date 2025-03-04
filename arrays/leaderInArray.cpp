#include<bits/stdc++.h>
using namespace std;

void printarr(vector<int> nums){
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}

vector<int> leaderbruit(vector<int> &nums){
    int n = nums.size();
    vector<int> ans ;
    for(int i =0 ;i< n ;i++){
        bool leader = true;
        for(int j = i+1 ;j < n ;j++){
            if(nums[j]>nums[i]){
               
                leader = false;
                break;
            }
        }
        if(leader){
            ans.push_back(nums[i]);
        }
    }
    printarr(ans);
    return ans ;
}

vector<int> leaderoptimal(vector<int> &nums){
    int n = nums.size();
    vector<int> ans;
    int max = INT_MIN;
    for(int i = n-1 ; i>=0 ;i--){
        if(nums[i]>max){
            ans.push_back(nums[i]);
            max = nums[i];
        }
    }
    printarr(ans);
    return ans;
}
int maxproduct(vector<int> &nums){
    int n = nums.size();
    int large1 = INT_MIN ,large2 = INT_MIN , large3 = INT_MIN , small1 =INT_MAX  , small2 = INT_MAX  ;
    for(int i = 0 ;i< n ;i++){
        if(nums[i]>large1){
            large3=large2;
            large2=large1;
            large1=nums[i];
        }
        if(nums[i]< small1){
            small2=small1;
            small1=nums[i];
        }
    }

    return max(large1*large2*large3 , small1*small2*large1);

  
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
    // leaderbruit(nums);
    // leaderoptimal(nums);
    cout<<maxproduct(nums);
}