#include<bits/stdc++.h>
using namespace std;

// bruite approch 
void leftrotatebydplace(vector<int> &nums , int d){
    int n=nums.size();
    d=d%n;
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i]=nums[i];
    }
    for(int i=0 ;i<n-d ;i++){
        nums[i]=nums[i+d];
    }
    for(int i = n-d ; i<n ;i++){
        nums[i]=temp[i-(n-d)];
    } 
}

//optimal approch 
void optimal(vector<int> &nums ,int d){
    int n =nums.size();
   reverse(nums.begin() , nums.begin()+d);
   reverse(nums.begin()+d , nums.end());
   reverse(nums.begin(),nums.end());
}

void rightrotate(vector<int> &nums , int d){
    int n =nums.size();
    reverse(nums.begin() , nums.end()-d);
    reverse(nums.end()-d , nums.end());
    reverse(nums.begin(),nums.end());
}
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
    optimal(nums , 2);
    printarr(nums);
    rightrotate(nums , 2);
    printarr(nums);
}