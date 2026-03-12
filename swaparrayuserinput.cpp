#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of array";
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cout<<"enter element of array";
        cin>>arr[i];
    }
    cout<<"array element are "<<endl ;
    for(int i=0;i<n;i++){
        
        cout<<arr[i]<<" "<<endl;
    }
 
    for(int i=0; i<n/2; i++){
        int temp= arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;

    }
    cout<<"swap array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
    
    return 0;
}