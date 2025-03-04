#include<bits/stdc++.h>
using namespace std;

void printarr(vector<int> nums){
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}
int longestAlternatingSubarray(vector<int>& nums, int threshold) {
    int n = nums.size(), maxlen =0 , i =0 , j = 1;
    if(n==1 && nums[i]%2==0 && nums[i]<=threshold){
       maxlen = max(maxlen , 1);
    }

   while( i< n){
    if(nums[i]%2 != 0 || nums[i]>threshold){
        i++;
        j=i+1;
       
    }
    else{
        if(nums[i]%2==0 && nums[i]<=threshold){
            maxlen = max(maxlen , 1);
            if(j< n && nums[j]<=threshold && nums[j]%2 != nums[j-1]%2){
                j++;
                maxlen = max(maxlen , j-i);
            
            }
            else{
                i++;
                j=i+1;
            }
        }
        else{
            i++;
            j=i+1;
        }
    }
}
   return maxlen;
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
    cout<<longestAlternatingSubarray(nums , 17);
}