 
 #include<iostream>
 #include<vector>
 using namespace std;
 int countPartitions(vector<int>& nums){
    int sum=0 , lsum=0, rsum ,ans=0;

        for(int i=0;i< nums.size()  ;i++){
            sum=sum+nums[i];
        }
        cout<< sum<<" " ;
        for (int i=0; i< nums.size() -1 ;i++){
            lsum=lsum+nums[i];
            cout<<lsum<<"lsum";
            rsum=sum-lsum;
            cout<< (lsum-rsum) % 2 <<" ";
            if(lsum - rsum % 2 == 0 ) {
                ans++;
            }
        }

        return ans;
 
 }
 int main(){
    vector <int> nums;
    int n;
    cin>> n ;
    for(int i=0;i<n ;i++){
        int num;
        cin>> num;
        nums.push_back(num);

    }

int ans =countPartitions(nums);
cout<<ans;



 }
