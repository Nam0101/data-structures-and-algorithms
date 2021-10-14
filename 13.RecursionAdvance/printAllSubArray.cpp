#include<iostream>
using namespace std;

void print_subs(string input, string output,vector<string> v){
    if(input.length() == 0){
        cout<<output<<endl;
        return;
    }
    print_subs(input.substr(1), output + input[0]);  /// include
    print_subs(input.substr(1), output);   /// exclude
}

void print_subs2(char input[], char output[], int i){
    if(input[0] == '\0'){
        output[i] = '\0';
        cout<<output<<endl;
        return;
    }
    /// excluding
    print_subs2(input + 1, output, i);
    /// including
    output[i] = input[0];
    print_subs2(input + 1, output, i+1);

}


int main(){
    vector<string> v;
    string in;
    cin>>in;
    string out = "";

    print_subs(in, out,v);
    cout<<endl;


    return 0;
}
