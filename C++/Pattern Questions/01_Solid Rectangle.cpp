// Print a solid rectangle

#include<iostream>
using namespace std;
int main(){
    int rows,columns;
    cout<<"Enter the rows and columns: ";
    cin>>rows>>columns;
    for (int i=0; i<rows; i++){
        for (int j=0; j<columns; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}