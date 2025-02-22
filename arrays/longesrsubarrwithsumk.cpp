#include<bits/stdc++.h>
using namespace std;

int longestsubarrwithsumk(vector<int> &nums , int k){
    int n = nums.size() , ans =0;
    for (int i = 0; i < n; i++)
    {
        int sum = nums[i];
        if(sum== k){
            ans = max(ans , 1);
        }
        for(int j = i+1 ; j< n ;j++){
            sum=sum+nums[j]; 
            if(sum == k){
                ans = max(ans , j-i+1);
             }
        }

    }
    return ans;
    
}
int betteraproach(vector<int> &nums , int k){
    int n =nums.size(), ans=0 , sum=0;
    map<int,int> store;
    for(int i=0;i<n ;i++){
        sum=sum+nums[i];
        if(sum==k){
            ans= max(ans , i+1);
        }
       
        int res = sum -k;
        if(store.find(res) != store.end()){
            int len = i - store[res];
            ans = max(ans , len);
        }
        if(store.find(sum) != store.end()){
            store[sum]=i;
        }

    }
    return ans ;

}

int optimalaproch(vector<int> &nums , int k){
    int i =0 , n = nums.size() , sum = nums[0] , maxlen =0 , j=1;
  while( j < n || i < n){
        sum+=nums[j];
        
        if( i < j && sum > k){
            sum-=nums[i];
            i++;
        }
        else{
            j++;
        }
        if(sum == k){
            maxlen = max(maxlen , j-i);

        }
    }
    return maxlen;
}
void printarr(vector<int> nums){
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}
int main(){
    vector<int> nums ;
    int n ,k;
    cout << "enter size of array";
    cin >> n;

    for(int i= 0; i< n ;i++){
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    cout<<"enter target";
    cin >> k;
   cout<< longestsubarrwithsumk(nums , k);
   cout<< betteraproach(nums , k);
    cout<< optimalaproch(nums , k);

}