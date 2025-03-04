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

void spiralMatrix(vector<vector<int>> &matrix){
    int n = matrix.size() , m = matrix[0].size();
    int top = 0 , bottom = n-1 , left = 0 , right = m-1 ; 
    while(top<=bottom && left <= right){
        for(int i = left ; i<= right ; i++ ){
            cout<<matrix[top][i] <<" ";
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            cout<<matrix[i][right] <<" ";
        }
        right--;
        if(top <= bottom){
            for(int i = right ;i >= left ; i-- ){
                cout<<matrix[bottom][i] <<" ";
            }
        
            bottom-- ; 
        }
        if(left<=right){
            for(int i = bottom ; i >= top ; i--){
                cout<<matrix[i][left] <<" ";
            }
            left++;
        }
        
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
    spiralMatrix(nums);

}