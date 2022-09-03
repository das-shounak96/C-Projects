#include<iostream>
using namespace std;

int main(){
    int i=1,n;
    cout<< "Enter the no of elements: ";
    cin>> n;




    while(i<=n){
        int j=i;
        while(j<=(2*i-1)){
            cout<< j<<"\t";
            j++;
        }
        cout<<endl;
        i++;
    }
}