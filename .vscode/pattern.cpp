#include<iostream>
using namespace std;

int main(){
    int n, row, col;

    cout<<"Enter N = ";
    cin>>n;

    row=1;
    while(row<=n){
        
        col = 1;
        while(col<=row){
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }
}