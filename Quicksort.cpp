#include<bits/stdc++.h>
using namespace std;
int partition_array(int arr[], int start, int end){
    int pivot = arr[end];
    int partition_index = start;
    for(int i=start; i<end; i++){
        if(arr[i]<= pivot){
            swap(arr[i], arr[partition_index]);
            partition_index++;
        }
    }

    swap(arr[partition_index], arr[end]);
    return partition_index;
}
void quickSort(int arr[], int start, int end){
    if(start<end){
        int partition = partition_array(arr, start, end);
        quickSort(arr, start, partition-1);
        quickSort(arr, partition+1, end);
    }
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}

quickSort(arr, 0, n-1);
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}


    return 0;
}
