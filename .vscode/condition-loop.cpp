#include<iostream>
using namespace std;

int main(){
    /* int n=44;

    if(n>69){
        cout<<"n is greater than 69";
    }
    else{
        cout<<"69 is bigger";
    } */

    /* int i=0;
    int sum =0;

    while(i<=n){
        cout<<i<<" "<<endl;;
        sum = sum + i;
        i=i+2;
    }
    
    cout<<"Sum is : "<<sum<<endl; */

    int n;
    cout<<"Input ";
    cin>>n;

    int i = 2;
    while(i<n){

        if(n%i==0){
            cout<<"Not prime"<<endl;
            
        }
        else{
            cout<<i <<" Prime"<<endl;
        }
        i++;
    }
}