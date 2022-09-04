#include<iostream>
using namespace std;

int main(){
    int i=1,n;
    cout<< "Enter the no of elements: ";
    cin>> n;



    while(i<=n){
        int j=1;
        char ch = 'A' +n -i;
        while(j<=i){
            cout<<ch << "\t";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
}