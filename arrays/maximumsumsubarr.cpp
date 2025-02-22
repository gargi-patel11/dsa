#include<bits/stdc++.h>
using namespace std;

void printarr(vector<int> nums){
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}
int maxsum(vector<int> &nums){
   int max=INT_MIN , start=0 , end;
   int sum =0  , n = nums.size();
   for(int i =0 ;i< n ;i++){
        sum+=nums[i];
        if(sum > max){
            end = i;
            max=sum;
        }
        if(sum <= 0){
            start = i+1;
            sum =0;
        }
   }
   cout<< start << "to " << end;
   return max;

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
    cout<<maxsum(nums);
}