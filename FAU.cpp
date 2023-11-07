#include<bits/stdc++.h>
using namespace std;
int merge(int arr[], int low, int mid, int high){
    vector<int>temp;
    int left = low;
    int right = mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
     
    for(int i = low; i<=high; i++){
        arr[i] = temp[i-low];
    }

}
void mergeSort(int arr[], int low, int high){
    // base case
    if(low>=high){
        return;
    }  
    int mid = (low+high)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);
}
int main(){

int n;
cin>>n; 
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}

mergeSort(arr, 0, n-1);

for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}

    return 0;
}








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
