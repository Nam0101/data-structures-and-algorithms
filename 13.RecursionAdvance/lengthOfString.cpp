#include <iostream>
using namespace std;

int lengthOfString(char input[]){
    if(input[0] == '\0') return 0;
    return 1+lengthOfString(input+1);
}
void changeElement(char input[],char n,char x){
    if(input[0] == '\0') return;
    if(input[0]==n) input[0]=x;
    changeElement(input+1,n,x);
}
void print(char input[]){
    if(input[0]=='\0'){
        return;
    }
    cout << input[0];
    print(input+1);
}
void removeConsecut(char input[]){
    if(input[0]=='\0') return;
    if(input[0]!=input[1]) removeConsecut(input+1);
    else{
        for (int i=0;input[i]!='\0';i++){
            input[i]=input[i+1];
        }
        removeConsecut(input);
    }
}
int main(){
    char input[]="nguyen van nam";
    cout<<lengthOfString(input);
    cout<<" ";
    //char n,x;
    //cin>>n>>x;
    //changeElement(input,n,x);
    char test[]="aabbcddeees";
    print(input);
    cout<<endl;
    removeConsecut(test);
    print(test);

}