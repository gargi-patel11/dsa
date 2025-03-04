#include<bits/stdc++.h>
using namespace std;

void printarr(vector<int> nums){
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}


string smallestNumber(string pattern) {
    int n = pattern.length() , start = 0 ;
    string ans="";
    for(auto i :pattern){
        if(i=='D'){
            start +=1;
        }
        else{
            start -=1;
        }
    }
    start+=1;
    ans = start;
    cout<< ans << "ans hai";
    for(int i =0 ;i< n ;i++){
        if(pattern[i]=='D'){
            start -=1;
            ans +=start;
        }
        else{
            start +=1;
            ans +=start;
        }
    }
    return ans ;
}

int main(){
    string  s ;
    cin>> s;
    cout<<smallestNumber(s);

}