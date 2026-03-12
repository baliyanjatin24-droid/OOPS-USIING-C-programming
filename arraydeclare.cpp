#include<iostream>
using namespace std;
int main(){
    int arr[6];
    for(int i=0; i<6; i++){
        cout<<"enter array element"<<endl;
        cin>>arr[i];
    }
    cout<<"elements are"<<endl;
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}