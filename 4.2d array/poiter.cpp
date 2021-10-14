#include <iostream>
using namespace std;

int main(){
    int a[1001],n;
    int *b=&a[0];
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> *(b+i);
    }
    for(int i=0;i<n;i++){
        cout << *(b+i) << " ";
    }
}