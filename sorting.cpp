
#include <iostream>
using namespace std;
void mergsort(int a[] , int low , int high );
void printarr(int a[] , int n )
{
    for(int i = 0 ;i < n ; i++){
        cout<< a[ i]<< endl;
    }
}

int main()
{

// insertion sort

    int a[10], n , j , temp;
    cin>>n ;
    for(int i=0;i<n;i++){
        cin>> a[i];
    }
    mergsort(a, 0 , n -1);
    printarr(a ,n );

}

int  combine(int a[] , int low , int mid , int high ){
     int i=low , k =0;
     int j = mid+1;
     int b[(high - low) +1];
   while(i <= mid && j <=high ){
    if(a[i] < a[j]){
        b[k]= a[i];
        i++;
        k++;
    }
    else{
        b[k]= a[j];
        j++;
        k++;
    }

    }

    while (i <= mid)
    {
       b[k]=a[i];
       i++;
       k++;
    }
    while (j <= high )
    {
        b[k]= a[j];
        j++;
        k++;
    }
    
    
   
      for(int i=low , k=0 ;i <= high ;i++ , k++){

        a[i] = b[k];
      }
     
     

     
}
 

void mergsort(int a[] , int low , int high ){
    if(low>=high){
        return ;
    }
    int mid = (high +low )/2 ;
    mergsort(a , low , mid);
    mergsort(a, mid+1 , high );
    combine(a , low , mid , high );

}
