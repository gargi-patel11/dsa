<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0 , j = 0 , index = 0 , x=nums1.size() ;
        if( m == 0){
            for( int i =0 ; i< n ;i++){
                nums1[i]=nums2[i];
            }
        }
        else if (n == 0 ){
            return ;
        }
        else{
        
      while(i < m+n-1  && j < n){
        if(nums1[i] < nums2[j])
        {
            nums1.insert(nums1.begin() + index , nums1[i] );
            i+=2;
            index++;
        }
        else{
            nums1.insert(nums1.begin() + index , nums2[j] );
            j++;
            i++;
            index++;

        }
      }
      while( i < m ){
         nums1.insert(nums1.begin() + index , nums1[i] );
            i+=2;
            index++;
      }
      while(j < n){
        nums1.insert(nums1.begin() + index , nums2[j] );
            j++;
            i++;
            index++;
      }
        }
    while(x < nums1.size()){
        nums1.pop_back();
    }
        
    }
int main (){
    vector <int> nums1={4,0,0,0,0,0};
    vector <int> nums2={1,2,3,5,6};
    merge(nums1 , 1 , nums2 , 5);
    for (int i =0 ;i< nums1.size() ;i++){
        cout<< nums1[i]<< " ";
    }

=======
#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0 , j = 0 , index = 0 , x=nums1.size() ;
        if( m == 0){
            for( int i =0 ; i< n ;i++){
                nums1[i]=nums2[i];
            }
        }
        else if (n == 0 ){
            return ;
        }
        else{
        
      while(i < m+n-1  && j < n){
        if(nums1[i] < nums2[j])
        {
            nums1.insert(nums1.begin() + index , nums1[i] );
            i+=2;
            index++;
        }
        else{
            nums1.insert(nums1.begin() + index , nums2[j] );
            j++;
            i++;
            index++;

        }
      }
      while( i < m ){
         nums1.insert(nums1.begin() + index , nums1[i] );
            i+=2;
            index++;
      }
      while(j < n){
        nums1.insert(nums1.begin() + index , nums2[j] );
            j++;
            i++;
            index++;
      }
        }
    while(x < nums1.size()){
        nums1.pop_back();
    }
        
    }
int main (){
    vector <int> nums1={4,0,0,0,0,0};
    vector <int> nums2={1,2,3,5,6};
    merge(nums1 , 1 , nums2 , 5);
    for (int i =0 ;i< nums1.size() ;i++){
        cout<< nums1[i]<< " ";
    }

>>>>>>> 9d7e62f11a8c04905926d7c814ecb7afe3fd0314
}