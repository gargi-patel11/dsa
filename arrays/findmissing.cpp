#include<bits/stdc++.h>
using namespace std;

void printarr(vector<int> nums){
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}


// bruite
int findmissingnumber(vector<int> &nums){
    int n=nums.size();
    for(int i =1 ;i<=  n ;i++){
        for(int j=0 ; j< n ;j++){

            if( (nums[j] != i) && (j == n-1)){
                return i;
            }
            else if(nums[j] == i){
                break;
            }

        }
    }
}

// better 

int missingbetter(vector<int> &nums){
    int n =nums.size();
    int arr[n];
    for(int i =0 ;i<n ;i++){

        arr[nums[i]]=1;
    }

    for(int i=1;i<=n ;i++){

        if(arr[i]!=1){
            return i;
        }
    }
}
// sum of n value and after that mins sum of all element of vector 
int missingoptimal(vector<int>  &nums){
    int n = nums.size() , sum =0;
    int total = (n+1) * (n+2)/ 2;

    for(int i=0;i< n ;i++){
        sum =sum +nums[i];
    }
    return (total-sum) ;
}


// sum is xor of n value after that do xor of all element of vector so missing element will be sum 
int missingoptimal2(vector<int> &nums){
     int n=nums.size();
     int sum=1;

    for(int i=2;i< n+2 ; i++){
        sum =sum ^i;
    }
    for(int i = 0;i< n ;i++){
        sum=sum ^ nums[i];
    }
    return sum;
}

// maximum consicuive 1 

int maximum1(vector<int> &nums){
    int one = 0 ,ans =0 , n=nums.size() ;
    for(int i = 0 ;i< n ;i++ ){
        if(nums[i]==1 ){
            one ++;
        }
        else{
            one =0;
        }
        if(ans < one){
            ans=one;
        }
        
    }
return ans ;
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
    // cout << findmissingnumber(nums);
    // cout<< missingbetter(nums);
    // cout<< missingoptimal(nums);
    // cout<<missingoptimal2(nums);
    cout<<maximum1(nums);

}