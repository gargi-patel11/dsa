#include<bits/stdc++.h>
using namespace std;

void printarr(vector<int> nums){
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}
int longestconseqbruit(vector<int> & nums){
    int n = nums.size() , count = 1 , maximun = 0, lastele;
    for(int i = 0 ; i < n ;i++){
        lastele=nums[i]+1;
        count=1;
        while (find(nums.begin() , nums.end() , lastele)!=nums.end())
        {
            count++;
            lastele++;
        }
        maximun=max(maximun , count);        
    }
    return maximun;
}

int lngestconsebetter(vector<int> &nums){
    int count = 1, maximum = 0 ;
    sort(nums.begin() , nums.end());
    for(int i = 0 ; i< nums.size()-1 ; i++){
        if(nums[i+1]==nums[i]+1){
            count++;
        }
        else if(nums[i+1]!=nums[i]){
            count=1;
        }
        
        
        maximum=max(maximum , count);
    }
    return maximum;
}
int longestseqoptimal(vector<int> &nums){
    unordered_set<int>  st;
    int n = nums.size() , maximum = 0 , count = 1 , lastele;
    for(int i = 0 ; i< n ;i++){
        st.insert(nums[i]);
    }
    for(auto it : st){
        if( st.find( it-1)==st.end()){
            lastele= it;
            count=1;
            while (st.find(lastele+1)!=st.end())
            {
                count++;
                lastele+=1;
            }
            maximum=max(maximum , count);
            
        }
    }
    return maximum;

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
    cout<<longestconseqbruit(nums);
    cout<<lngestconsebetter(nums);
    cout<<longestseqoptimal(nums);

}