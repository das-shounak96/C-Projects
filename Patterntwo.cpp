#include<iostream>
using namespace std;

int main(){
    int i=1,j=1,n;
    cout<< "Enter the no of elements: ";
    cin>> n;



    while(i<=n){
        while (j<=n)
        {
            cout<<i <<"\t";
            j++;
        }
    cout<<endl;
    j=1; 
    i++;
        

    }
}