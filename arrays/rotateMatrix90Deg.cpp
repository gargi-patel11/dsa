#include<bits/stdc++.h>
using namespace std;

void printarr(vector<vector<int>> nums){
    int row = nums.size() , col = nums[0].size();
    for(int i=0;i<row;i++){
        for(int j = 0 ; j< col ; j++){
            cout<<nums[i][j]<<" ";
        }
        cout << endl;
    }
}
void printarr1d(vector<int> nums){
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}

void rotate90(vector<vector<int>> &matrix){
    int n = matrix.size() , m= matrix[0].size();
    for(int i =0 ; i < n ;i++){
        for(int j = i+1 ; j < m ; j++){
            swap(matrix[i][j] , matrix[j][i]);
        }
    }
    for(int i =0 ; i< n ; i++){
        reverse(matrix[i].begin() , matrix[i].end());
    }
}

int main(){
    vector<vector<int>> nums;
    int row , col;
    cout << "enter size of row";
    cin >> row;
    cout << "enter size of col";
    cin >> col;

    nums.resize(row, vector<int>(col));
    for(int i= 0; i< row;i++){
        

        for(int j = 0 ; j< col ; j++){
            int temp ; 
            cin >>temp ;
            nums[i][j]=(temp);
        }

        cout<< "new row";
    }
    rotate90(nums);
    printarr(nums);
    
}