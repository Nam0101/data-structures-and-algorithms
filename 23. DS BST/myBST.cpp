#include<iostream>
#include<queue>
using namespace std;

template<typename T>
class BTNode{
public:

    T data;
    BTNode* left;
    BTNode* right;

    BTNode(T data){
      this->data = data;
      left = NULL;
      right = NULL;
    }
    ~BTNode(){
      delete left;
      delete right;
    }
};

BTNode<int>* takeInput(){
     int rootData;
     cout<<"Enter data"<<endl;
     cin>>rootData;

     if(rootData==-1){
        return NULL;
     }
     BTNode<int>* root = new BTNode<int>(rootData);
     root->left = takeInput();
     root->right = takeInput();
    return root;
}

BTNode<int>* takeInputLevelWise(){
    int rootData;
    cout<<"Enter root data"<<endl;
    cin>>rootData;
    BTNode<int>* root = new BTNode<int>(rootData);
    queue<BTNode<int>*> q;
    q.push(root);

    while(!q.empty()){
        BTNode<int>* f = q.front();
        q.pop();

         cout<<"Enter left child of "<<f->data<<endl;
         int leftChildData;
         cin>>leftChildData;
         if(leftChildData != -1){
            BTNode<int>* child = new BTNode<int>(leftChildData);
            q.push(child);
            f->left = child;
         }
         cout<<"Enter right child of "<<f->data<<endl;
         int rightChildData;
         cin>>rightChildData;
         if(rightChildData != -1){
            BTNode<int>* child = new BTNode<int>(rightChildData);
            q.push(child);
            f->right = child;
         }
    }
    return root;
}

void printTree(BTNode<int>* root){
   if(root==NULL){   /// base case
    return;
   }

   cout<<root->data<<": ";
   if(root->left!=NULL){
    cout<<"L"<<root->left->data;
   }

   if(root->right!=NULL){
    cout<<"R"<<root->right->data;
   }
   cout<<endl;

   printTree(root->left);
   printTree(root->right);
}

bool searchNode(BTNode<int>* root, int key){
   if(root==NULL){
    return false;
   }
   if(root->data == key){
    return true;
   }

   return (searchNode(root->left,key) || searchNode(root->right,key));
}

int minValue(BTNode<int>* root){
    if(root==NULL){
        return INT_MAX;
    }
    int leftMin = minValue(root->left);
    int rightMin = minValue(root->right);

    return min(root->data, min(leftMin,rightMin));
}

void minValueOtherWay(BTNode<int>* root,int &ans){
    if(root==NULL){
        return;
    }
    ans = min(ans,root->data);
    minValueOtherWay(root->left,ans);
    minValueOtherWay(root->right,ans);
}

int maxValue(BTNode<int>* root){
    if(root==NULL){
        return INT_MIN;
    }
    int leftMax = maxValue(root->left);
    int rightMax = maxValue(root->right);

    return max(root->data, max(leftMax,rightMax));
}

void maxValueOtherWay(BTNode<int>* root,int &ans){
    if(root==NULL){
        return;
    }
    ans = max(ans,root->data);
    maxValueOtherWay(root->left,ans);
    maxValueOtherWay(root->right,ans);
}

int countLeafNode(BTNode<int>* root){
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL && root->right==NULL){
        return 1;
    }

    return countLeafNode(root->left) + countLeafNode(root->right);
}

void countLeafNodeOtherWay(BTNode<int>* root,int &ans){
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        ans++;
        ///return; optional
    }
    countLeafNodeOtherWay(root->left,ans);
    countLeafNodeOtherWay(root->right,ans);
}
/// 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
int main(){

 /* BTNode<int>* root = new BTNode<int>(1);
  BTNode<int>* n1 = new BTNode<int>(2);
  BTNode<int>* n2 = new BTNode<int>(3);

  root->left = n1;
  root->right = n2;*/
  BTNode<int>* root = takeInputLevelWise();
  printTree(root);

  cout<<"Searching for 11"<<endl;
  if(searchNode(root,11)){
    cout<<"found"<<endl;
  }else{
    cout<<"not found"<<endl;
  }
  cout<<"Min Value "<<minValue(root)<<endl;
  cout<<"Min value other way ";
  int mnVal = INT_MAX;
  minValueOtherWay(root,mnVal);
  cout<<mnVal<<endl;

   cout<<"Max Value "<<maxValue(root)<<endl;
  cout<<"Max value other way ";
  int mxVal = INT_MIN;
  maxValueOtherWay(root,mxVal);
  cout<<mxVal<<endl;

  cout<<"No of leaf nodes "<<countLeafNode(root)<<endl;
  cout<<"No of leaf nodes other way ";
  int count = 0;
  countLeafNodeOtherWay(root,count);
  cout<<count<<endl;


  delete root;
  return 0;
}
