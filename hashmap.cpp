#include<bits/stdc++.h>
using namespace std ;
int countElement(int arr[],int size, int ele){
    map<int ,int> mpp ;
    for ( int i=0;i< size; i++){
        mpp[arr[i]]+=1;
    }
    return mpp[ele];
}

int main(){
    int n ;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }
    int g = sizeof(arr)/sizeof(arr[0]);
    
    cout<< countElement(arr ,g , 1)<< endl;
    cout<< countElement(arr ,g, 1)<< endl;
    cout<< countElement(arr ,g, 2)<< endl;
    cout<< countElement(arr ,g, 3)<< endl;
    cout<< countElement(arr ,g, 4)<< endl;
    cout<< countElement(arr ,g, 5)<< endl;
    cout<< countElement(arr ,g, 10)<< endl;

    
    


}