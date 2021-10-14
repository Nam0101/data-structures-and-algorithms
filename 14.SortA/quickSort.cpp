#include <bits/stdc++.h>
using namespace std;

int partition(int a[],int s,int e){
    int i=s;
    int pivot = a[e];
    for(int j=s; j<=e; j++){
        if(a[j]<pivot){
            swap(a[i],a[j]);
            i++;
        }
    }
    swap(a[e],a[i]);
    return i;
}

void quickSort(int a[],int s,int e){
    if(s>=e) return;
    int p=partition(a,s,e);
    quickSort(a,s,p-1);
    quickSort(a,p+1,e);

}

int main(){

}