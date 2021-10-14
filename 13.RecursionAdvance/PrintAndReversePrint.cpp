#include <iostream>
using namespace std;

void print(char input[]){
    if(input[0]=='\0'){
        return;
    }
    cout << input[0];
    print(input+1);
}
void reversePrint(char input[]){
    if(input[0]=='\0'){
        return;
    }
    reversePrint(input+1);
    cout << input[0];
}
int main(){
    char input[]="nguyen van nam";
    print(input);
    cout<<endl;
    reversePrint(input);
    return 0;
}
