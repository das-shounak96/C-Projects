#include<iostream>
using namespace std;

int main(){
    int i=1,n;
    cout<< "Enter the no of elements: ";
    cin>> n;



    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<(i-j+1)<<"\t";
            j++;
        }
        cout<<endl;
        i++;
    
        

    }
}