#include<iostream>
using namespace std;

int main(){
    int i=1,n;
    cout<< "Enter the no of elements: ";
    cin>> n;


    while(i<=n){

        //space print
        int space = n-i;
        while(space){
            cout<<"\t";
            space--;
        }
        //first triangle
        int j =1;
        while(j<=i){
            cout<<j<<"\t";
            j++;
        }
        //third triangle
        int third = i-1;
        while(third){
            cout<<third<<"\t";
            third--;
        }
        cout<<endl;
        i++;
    }
}


    