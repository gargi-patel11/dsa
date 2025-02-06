#include<bits/stdc++.h>
using namespace std ;
// revers of numbers 
int reverse(int num){
    int duplicate=num , revs=0;
    while(duplicate >0){

        revs =( revs*10 )+(duplicate % 10) ;
        duplicate =duplicate /10;

    }
    return revs;
}

// armstrong number     1
void armstrong(int num ){
    int duplicate =num , count =0 , newnum=0;
     while(duplicate >0){
       count++;
        duplicate =duplicate /10;
    }
    duplicate=num;
    for(int i =0 ;i<count ;i++){
        newnum = newnum +pow((num %10 ) , count);  
        num=num/10;
    }
    if(newnum == duplicate ) cout<<"yes";
    else cout<<"no";
}

int gcd(int a , int b){
    while (a >0 && b>0 ){
        if(a>b) a=a%b;
        else b=b%a;
    }
    if(a==0) return b;
    else return a;
}

int main(){
 int num , num2;
 cin>> num ;
 cin >> num2;
 if(num == reverse(num)) cout << "it is pelindrom " ;
 else cout <<"it is not pelindrom ";


 armstrong(num);
cout<< gcd(num, num2);
}