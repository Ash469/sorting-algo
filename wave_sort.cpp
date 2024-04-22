#include <iostream>
using namespace std;
void swap(int arr[],int a,int b){
    int temp;
    temp=arr[b];
    arr[b]=arr[a];
    arr[a]=temp;
}
void wave_sort(int a[],int n){
    for(int i=1;i<n;i=i+2){
        if(a[i-1]<a[i]){
            swap(a,i,i-1);
        }
        if(a[i]>a[i+1]&&i<=n-2){
            swap(a,i,i+1);
        }
    }
}
int main(){
int arr[7]={1,3,4,7,5,6,2};
wave_sort(arr,7);
for(int i=0;i<7;i++){
    cout<<arr[i]<<" ";
}
}