// fractional Knapsak(implemented by greedy algorithm)
#include<bits/stdc++.h>
using namespace std;
struct Item{
    int weight;
    int value;
};
bool cmp(Item a, Item b){
    double r1 = (double)a.value/(double)a.weight;
    double r2 = (double)b.value/(double)b.weight;
    return r1>r2;
}
int main(){
int n;
cin>>n;
Item items[n];
for(int i=0; i<n; i++){
    cout<<"Enter the product of "<<i+1<<" "<<"Value & Weight: ";
    cin>>items[i].value>>items[i].weight;
}

// sort the product items
sort(items, items+n, cmp);
int currentWeight = 0;
double finalValue = 0.0;
int targeted_Weight;
cout<<"Enter Targeted Weight: ";
cin>>targeted_Weight;
for(int i=0; i<n; i++){
    if(currentWeight + items[i].weight <= targeted_Weight){
        currentWeight += items[i].weight;
        finalValue += items[i].value;
    }else{
        // find the remaining weight
        int remain = targeted_Weight - currentWeight;
        finalValue += (double)items[i].value/(double)items[i].weight;
        break;
    }
}

cout<<"Max value: "<<finalValue<<"\n";

    return 0;
}
