#include<bits/stdc++.h>
using namespace std;
void printarr(vector<int> nums){
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}

//moving all zderos in the end 
void bruite(vector<int> &nums){
    vector<int> temp ;
    int n= nums.size();
    for (int i =0 ; i < n;i ++){
        if(nums[i]!= 0){
            temp.push_back(nums[i]);
        }

    }
    int tempn = temp.size();
    for(int i=0;i<tempn ;i++ ){
        nums[i]=temp[i];
    }
    for(int i = tempn ; i< n ; i++){
        nums[i]=0;
    }
}

 void optimal(vector<int> &nums){
    int i=0 , n = nums.size(), temp;
    for (int j=1 ; j<n ;j++){
        if(nums[i]==0 && nums[j]!=0){
           temp =nums[i];
           nums[i]=nums[j];
           nums[j]=temp;
            i==j ;
        }
        else if(nums[i]==0 && nums[j]==0){
            continue;
        }
        else{
            i++;
        }
    }
 }

 // union of two sorted array 
 // bruite oproch  {using set }

vector<int> unionoftwoarr(vector<int> &nums1 , vector<int> &nums2){
    set<int> set1;
    int n1 = nums1.size();
    int n2 = nums2.size();
    for(int i =0 ; i<n1 ;i++ ){
        set1.insert(nums1[i]);
    }
    for(int i =0 ; i<n2 ;i++ ){
        set1.insert(nums2[i]);
    }
    vector<int> union1;
     int i =0;
    for(auto it :set1 ){
        union1.push_back(it);
    }
    printarr(union1);
    return union1;
}


// union of two sorted  array 
// optimal aproch {two pointer}

vector<int> unionoftwo(vector<int> &nums1 , vector<int> &nums2){
    int n1 = nums1.size();
    int n2 = nums2.size();
    vector<int> ans;
    int i =0, j=0;
    while (i < n1 && j < n2){
        if(nums1[i]<=nums2[j] ){
            if((ans.empty() || ans.back()!=nums1[i] )){
                ans.push_back(nums1[i]);
            }
            i++;
        } 
        else
        {
            if((ans.empty() || ans.back()!=nums2[j] )){
                ans.push_back(nums2[j]);
            }
                j++;
        }
    }
    while (i<n1)
    {

      if((ans.empty() || ans.back()!=nums1[i])){
            ans.push_back(nums1[i]);
        }
        i++;
    }
    
while (j<n2)
    { 
        if((ans.empty() || ans.back()!=nums2[j] )){
        ans.push_back(nums2[j]);
    }
    j++;       
    }
    printarr(ans);
    return ans ;
}


// intersection of two sorted array 
vector<int> intersectionoftwoarr(vector<int> &nums1 , vector<int> &nums2){
    int n1= nums1.size() , n2 = nums2.size(), i =0 , j=0;
    vector<int> ans ; 
    while (i < n1 && j < n2 )
    {
      if(nums1[i]==nums2[j] && (ans.empty() || ans.back()!=nums1[i])){
        ans.push_back(nums1[i]);
        i++;
        j++;
      }
      else {
        if(nums1[i] < nums2[j] ){
            i++;
        }
        else{
            j++;
        }
      }
    }

    printarr(ans);
    return ans ;
}




int main(){
    vector<int> nums , nums1;
    int n , n1 ;
    cout << "enter size of array";
    cin >> n;
    cin >> n1;
    for(int i= 0; i< n ;i++){
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    for(int i= 0; i< n1 ;i++){
        int temp;
        cin >> temp;
        nums1.push_back(temp);
    }
     intersectionoftwoarr(nums , nums1);
}
