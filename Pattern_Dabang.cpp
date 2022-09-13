#include<iostream>
using namespace std;

int main(){
    int i=1,n;
    cout<< "Enter the no of elements: ";
    cin>> n;

    while(i<=n){

        //First pattern
        int j =1;
        while(j<=n-i+1){
            cout<<j<<"\t";
            j++;
        }
        
   
        //first star
        int l =1;
        while(l<=i-1){
            cout<<"*\t";
            l++;
        }
        //third triangle
        int third = i-1;
        while(third){
            cout<<"*\t";
            third--;
        }

        //Last triangle Decreasing order , 
        int m = n-i+1;
        while(m){
            cout<<m<<"\t";
            m--;
        }
        cout<<endl;
        i++;

    }
}


