#include<iostream>
using namespace std;
int main(){
    int arr[4];

    for(int i=0; i<4; i++){
        cout<<"enter element of array"<<endl;
        cin>>arr[i];
    }
    cout<<"array element are"<<endl ;
    for(int i=0;i<4;i++){
        
        cout<<arr[i]<<" "<<endl;
    }
    int n=4;
    for(int i=0; i<2; i++){
        int temp= arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;

    }
    cout<<"swap array is: "<<endl;
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
        
    }
    return 0;
}