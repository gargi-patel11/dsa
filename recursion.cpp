#include<bits\stdc++.h>
using namespace std;
int name(int n , string user){
    if(n<=0){
        return 0;
    }

        cout<< user << endl;
        n--;
        name(n, user);
 

}
void oneton(int n , int i){
    if(i>n) return;

        cout<< i <<" ";
        oneton(n , i+1);

}
int sumn(int n){
    if( n <=0){
        return 0;
    }
    return n +sumn(n-1);
}
void revers(int nums[] , int i , int j){
    if(i>= j) return ;
    int temp ;
    temp=nums[i];
    nums[i]=nums[j];
    nums[j]=temp;
     revers(nums , i+1 , j-1);


}
void pelidrom(string s , int start ,int len){
    if(start > len){
        cout << "pelindrom";
        return ;
    } 
    if(s[start] == s[len]){
       
        pelidrom(s, start+1 , len -1);
    }
    else{
        cout<<"not pelindrom";
        return ;
    }
}
int fibonacci( int n){
    if ( n == 0){
        return 0 ;
    }
    if(n==1 ){
        return 1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    int n , nums[10];
    cin>> n;
    string s;

    name(n , "gargi");
    oneton(n , 1);
   cout<<  sumn(n);

      for(int i=0 ;i<n ;i++){
        cin >> nums[i];
      }

      revers(nums , 0, n-1);
      for(int i=0 ;i<n ;i++){
        cout << nums[i]<<" ";
      }
    cout<< "enter the string";
  
    cin>> s;
    cout<< s.length()<<" ";
    pelidrom(s, 0 , s.length() -1);

cout << fibonacci(n);




}