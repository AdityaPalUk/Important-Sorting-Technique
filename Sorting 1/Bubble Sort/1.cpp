#include <iostream>
using namespace std;
void bubble(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main(){
    cout<<"enter size of array:";
    int n;
    cin>>n;
    int arr[n];
    cout<<"insert element of array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubble(arr,n);

    cout<<"Sorted array are:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}