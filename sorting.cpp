<<<<<<< HEAD


#include <iostream>
using namespace std;
int mergsort(int a[] , int low , int high );
int printarr(int a[] , int n )
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
    int arr = mergsort(a, 0 , n );
    printarr(a ,n );
    // for(int i=1;i<n;i++){
    //     j=i-1;
    //     temp=a[i];
    //     while (j>=0 && a[j]>temp)
    //     {
    //         a[j+1]=a[j];
    //         j--;
    //     }
    //     a[j+1]=temp;
    // }
    //printarr(a , n )

    

//mearg sort






}

int combine(int a[] , int low , int mid , int high ){
     int i , k =low ;
     int j = mid ;
     int b[16];
     while (a[i]<a[j])
     {
        b[k]=a[i];
        i++;
        k++;
     }
     while (a[i]>a[j])
     {
        b[k]=a[j];
        j++;
        k++;
     }
     while (i>=low)
     {
        b[k]=a[i];
        k++;
        i++;
     }
     while (j<=high)
     {
        b[k]=a[j];
        k++;
        j++;
     }
    //   return b;
     
     

     
}
 

int mergsort(int a[] , int low , int high ){
    if(low>=high){
        return -1;
    }
    int mid = low+(high - low) /2 ;
    mergsort(a , low , mid);
    mergsort(a, mid+1 , high );
    combine(a , low , mid , high );

}






=======


#include <iostream>
using namespace std;
int mergsort(int a[] , int low , int high );
int printarr(int a[] , int n )
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
    int arr = mergsort(a, 0 , n );
    printarr(a ,n );
    // for(int i=1;i<n;i++){
    //     j=i-1;
    //     temp=a[i];
    //     while (j>=0 && a[j]>temp)
    //     {
    //         a[j+1]=a[j];
    //         j--;
    //     }
    //     a[j+1]=temp;
    // }
    //printarr(a , n )

    

//mearg sort






}

int combine(int a[] , int low , int mid , int high ){
     int i , k =low ;
     int j = mid ;
     int b[16];
     while (a[i]<a[j])
     {
        b[k]=a[i];
        i++;
        k++;
     }
     while (a[i]>a[j])
     {
        b[k]=a[j];
        j++;
        k++;
     }
     while (i>=low)
     {
        b[k]=a[i];
        k++;
        i++;
     }
     while (j<=high)
     {
        b[k]=a[j];
        k++;
        j++;
     }
    //   return b;
     
     

     
}
 

int mergsort(int a[] , int low , int high ){
    if(low>=high){
        return -1;
    }
    int mid = low+(high - low) /2 ;
    mergsort(a , low , mid);
    mergsort(a, mid+1 , high );
    combine(a , low , mid , high );

}






>>>>>>> 9d7e62f11a8c04905926d7c814ecb7afe3fd0314
