//How to take user input from a graph where one vertex is connected to another vertex
#include<bits/stdc++.h>
using namespace std;


// decleare a graph
// int v,e;
// cin>>v>>e; // v=4, e =5

// // create 2d array
// int graph[v][v] = {0}; // set all vertex are 0
// int from, to, weight;

// for(int i=0; i<e; i++){
//     cin>>from>>to>>weight; // 0 ---> 1
//     graph[from][to] = weight;
//     graph[to][from] = weight;
// }

// for(int i=0; i<v; i++){
//     for(int j=0; j<v; j++){
//         cout<<graph[i][j]<<" ";
//     }
//     cout<<"\n";
// }

//  Q3.
// vector<int>v(5);
// cout<<v.size()<<"\n";
// v.resize(3);
// cout<<v.size();

// Q4>
// priority_queue
// i>> maxHeap >> maximum value will be the highest priority

// decleare
// priority_queue<int, vector<int>, greater<int> >minHeap;
// // assign values
// minHeap.push(5);
// minHeap.push(7); 
// minHeap.push(2);
// minHeap.push(9);

// // 9, 7, 5, 2

//     while(!minHeap.empty()){
//         cout<<minHeap.top()<<" ";
//         minHeap.pop();
//     }
    

// Q5. pair
// declear
// pair<int, int>p;
// // assign
// p.first = 30;
// p.second = 69;
// // access
// cout<<p.first<<" "<<p.second<<" ";

// // q6.
// // implement queue
// queue<int>qu;
// qu.push(1);
// qu.push(2);
// qu.push(3);
// qu.push(4);
// qu.push(5);

// // print the queue values
// while(!qu.empty()){
//     cout<<qu.front()<<" ";
//     qu.pop();
// }

// implemet stack
// stack<string>st;
// value assign
// st.push(1);
// st.push(2);
// st.push(3);
// st.push(4);
// st.push(5);

// st.push("Nadim");
// st.push("Nahee");
// st.push("Fardeen");


// while(!st.empty()){
//     cout<<st.top()<<" ";
//     st.pop();
// }

// Mid question

//

// struct Time{
//     int start, end;
// };

// bool cmp(Time a, Time b){
//     return a.end< b.end;
// }
int main(){
// int n;
// cin>>n;
// Time arr[n];
// for(int i=0; i<n; i++){
//     cout<<"enter the start and end time for "<<i+1<<" : ";
//     cin>>arr[i].start>>arr[i].end;
// }

// sort(arr, arr+n, cmp);

// for(int i=0; i<n; i++){
//     cout<<arr[i].start<<" "<<arr[i].end<<" \n";
// }

// Create a 2d array
// int n,m;
// cin>>n>>m; // 4 4
// int arr[n][m];
// for(int i=0; i<n; i++){
//     for(int j =0; j<m; j++){
//         if(i ==0 || j==0){
//             arr[i][j] = 0;
//         }else{
//             arr[i][j]  = 1;
//         }
//     }
// }

// for(int i=0; i<n; i++){
//     for(int j=0; j<m; j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<"\n";
// }

// string len
// string s1 = "Nadim";
// int  a =s1.length();
// cout<<a<<"\n";

// find the mid value from an array
int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}

int low = 0; 
int high = n;
int mid = (low+high)/2;
cout<<mid<<"\n";

    return 0;
}
