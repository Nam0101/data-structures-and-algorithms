#include <iostream>
#include <vector>
using namespace std;

int main(){
    /*vector<int> v;  //static
    vector<int> *vp=new vector<int>; //dynamic
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(23);
    v.push_back(234);
    // v[1]=100;
    // never use [ ] to insert element
    // v[4]=11012;
    /*v.push_back(23);
    v.push_back(234);
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;
    cout<<v[4]<<endl;
    */
   /*cout<<v.at(4)<<endl;
   cout<<v.at(6)<<endl;
  v.pop_back();
  for(int i=0;i<v.size();i++){
      cout<<v[i]<<endl;
  }
  */
    vector<int> *vp=new vector<int>();
    vector<int> v;
    vector<int> v2(10,-2);
    vector<int> v3(100);
    // sort(v2.begin(), v2.end());
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<endl;
    }
    for(int i=0;i<100;i++){
        cout<<"Capacity "<<v.capacity()<<endl;
        cout<<"Size:"<<v.size()<<endl;
        v.push_back(i+1);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }


}