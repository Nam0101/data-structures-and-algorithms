#include <iostream>
using namespace std;

void mergeArray(int x[],int y[],int a[],int s,int e){
    int mid=s/2+(e-s)/2;
    int i=s;
    int j=mid+1;
    int k=s;
    while(i<mid && j<=e){
        if(x[i]<y[j]){
            a[k]=x[i];
            i++;
            k++;
        }else{
            a[k]=y[j];
            j++;
            k++;
        }
    }

}
void mergeSort(int a[],int s,int e){
    if(s>=e){
        return;
    }
    int mid=s/2+(e-s)/2;
    int x[100],y[100];
    for(int i=0;i<mid;i++){
        x[i]=a[i];
    }
    for(int i=0;i<mid+1;i++){
        y[i]=a[i];
    }
    mergeSort(x,s,mid);
    mergeSort(y,mid+1,e);

}

int main(){

}