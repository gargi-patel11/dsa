#include<bits/stdc++.h>
using namespace std;

int sets(){
    set<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(2);
    // cout<< s[0] ;

    return 1;

}
int main(){
    vector<int> v={1,2,3};
    v.insert(v.begin() , 10);
    for(auto it=v.begin() ; it<v.end() ; it++){
        cout<< *it <<" ";
    }

    sort(v.begin() , v.end()) ;
    for(auto it=v.begin() ; it<v.end() ; it++){
        cout<< *it <<" ";
    }
    
}