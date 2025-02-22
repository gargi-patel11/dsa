#include<bits/stdc++.h>
using namespace std;

void printarr(vector<int> nums){
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}
void sort123(vector<int> &nums){
    int zero = 0 , one =0 , two =2 , n = nums.size();
        for(int i =0 ;i < n ; i++){
            if(nums[i]==0){
                zero++;
                cout<< "zero" << i <<endl;
            }
            else if(nums[i] == 1){
                one++;
                cout<< "one" << i <<endl;
            }
            else{
                two++;
                cout<< "two" << i <<endl;
            }
        }
        cout<< zero << one << two ;
        for(int i =0 ;i< n ;i++){
            if(zero > 0 ){
                nums[i]=0;
                zero--;
            }
            else if(one > 0 ){
                nums[i]=1;
                one--;
            }
            else if(two>0){
                nums[i]=2;
                two--;
            }
        }
  
}
int fact(int num){
    if(num ==0 || num ==1){
        return 1;
    }
    return num*fact(num-1);
}
int numTilePossibilities(string tiles) {
    map<char , int > count ;
    int n= tiles.length();
    for(int i =0 ;i<n; i++){
        count[tiles[i]]++;
    }

    int ans = fact(n);
    cout<<ans << " ";
    for(auto i : count){
        cout<< i.second ;
        ans = ans / fact(i.second);
        cout<< ans << " ";
    }
    return ans ;
}

void optimal(vector<int> &nums){
    int low =0 , mid =0 , high = nums.size();
    while(mid < high){
        if(nums[mid]==0){
            swap(nums[low] , nums[mid]);
            low++;
            mid++;

        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[mid] , nums[high-1]);

            high--;            
        }
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
    optimal(nums);
    printarr(nums);
    // cout<<fact(3);

    // string s ;
    // cin >> s ;
    // numTilePossibilities(s);


}