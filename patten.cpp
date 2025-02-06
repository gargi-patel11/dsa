#include <iostream>
using namespace std;
void pattent13(int n ){
    int k ,space=(2*n)-2;
     for(int i=1;i<n;i++){
        for(int j =1;j<=i;j++){
           
            cout<<j ;

           
        }
        for(int j=1;j<space-1;j++){
            cout<<" ";
        }
        space-=2;
        for( int j=i;j>=1;j--){
            
            cout<<j;
        }
        cout<<""<<endl;
    }
}
int main()
{
    int n , k=1;
    cin >> n;
    // for (int i = 0; i <= a ; i++)
    // {
    
    //         for (int j = 0; j < i; j++)
    //         {
    //             cout << "* ";
    //         }
        
    //     cout << "" << endl;
    // }
    //  for (int i = 0; i <= a -1; i++)
    // {
    //         for (int j = 0; j < a - i - 1; j++)
    //         {
    //             cout << "* ";
    //         }
        
    //     cout << "" << endl;
    // }

    // for(int i=0 ; i< a;i++){
    //     for(int j = 0; j< a-i-1;j++){
    //         cout<<"0";
    //     }
    //     for(int j =0 ; j<=(2*i) -1 ;j++){
    //         cout<<"*";
    //     }
    //      cout << "" << endl;
    // }
    pattent13(n);

   
}

