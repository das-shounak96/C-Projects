#include<iostream>
using namespace std;

int main(){
    int i=1,n;
    cout<< "Enter the no of elements: ";
    cin>> n;



    while(i<=n){
        int j=1;
        int k=n;
        //space print
        while(j<=n-i){
            cout<<"\t";
            j++;
        }
        //star print
        while(k>=j){
        cout<<"\t*";
        k--;
        }
        //next line
        cout<<endl;
        i++;
    }
}