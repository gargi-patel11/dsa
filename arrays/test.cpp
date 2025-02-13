#include<bits/stdc++.h>
using namespace std ;
string clearDigits(string s) {
    int n= s.length();
    for(int i=0 ;i<n;i++){
        int num = s[i];
        if(num >=48 && num<=57 ){
            cout<<"if";
            s.erase(s.begin() + i);
            s.erase(s.begin() +(i-1)); 
        }
    }
    return s;
}
int main(){
    string s = "gargi78";
    cout<< clearDigits(s);
  
}