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

void setMatrixzeroBruit(vector<vector<int>> &nums){
    int row = nums.size() , col = nums[0].size();
    for(int i = 0 ;i < row ; i++){
        for( int j = 0 ; j < col ; j++){
            if(nums[i][j]==0){
                for(int x = 0 ; x < col ; x++ ){
                    if(x!=j){
                        nums[i][x]=-1;
                    }
                }
                for(int x = 0 ; x < row ; x++ ){
                    if(x!=i){
                        nums[x][j]=-1;
                    }
                }
            }
        }
    }

    for(int i = 0 ; i< row ; i++){
        for(int j = 0 ; j< col ; j++){
            if(nums[i][j] == -1){
                nums[i][j]=0;
            }
        }
    }
}

int setMatrixZerobetter(vector<vector<int>> &nums){
    int row = nums.size() , col = nums[0].size();
    vector<int> rows(row) , cols(col);

    for(int i = 0 ; i< row ; i++){
        for(int j = 0 ; j< col ; j++){
           if(nums[i][j]==0){
                rows[i]=1;
                cols[j]=1;
           }
        }
    }
    for(int i = 0 ; i< row ; i++){
        for(int j = 0 ; j< col ; j++){
          if(rows[i]==1 || cols[j]==1){
            nums[i][j]=0;
          }
        }
    }
}

void setMatrixZeroOptiml(vector<vector<int>> &nums){
    //row nums[i][0]; col nums[0][j]
    int col0= 1 , row = nums.size() , col = nums[0].size();
    for(int i = 0 ; i < row ; i++){
        for(int j =0  ; j< col ; j++){
            if(nums[i][j]==0){
               
                nums[0][j]=0;
                if(j ==0 ){
                    col0=0;
                }
                else{
                    nums[i][0]=0;
                }
            }
        }
    }
    for(int i = 1 ; i < row ; i++){
        for(int j =1  ; j< col ; j++){
            if(nums[0][j]==0 || nums[i][0]==0){
               
                nums[i][j]=0;
            }
        }
    }
    if(nums[0][0]==0){
        for(int i =1 ; i< col ; i++) nums[0][i]=0;
    }
    if(col0==0){
        for(int i =1 ; i< col ; i++) nums[i][0]=0;
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
    setMatrixZeroOptiml(nums);
    printarr(nums);
}