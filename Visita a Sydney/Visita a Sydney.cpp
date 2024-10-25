#include<bits/stdc++.h>
using namespace std;
#define Hd main(void)
struct Nodo{
    int val;
    Nodo *left;
    Nodo *right;
};

Nodo *create(int n){
    Nodo *new_node = new Nodo();
    new_node->val = n;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
}

void insert(Nodo *&root,int n){
    if(root==NULL){
        Nodo *new_node = create(n);
        root = new_node;
    }
    else if(root->val > n)insert(root->left,n);
    else insert(root->right,n);
}

void inorder(Nodo *root){
    if(root==nullptr)return;

    inorder(root->left);
    cout<<root->val<<"\n";
    inorder(root->right);
}


Nodo *buildinorder(vector<int> inorder,int start,int end){
    if(start>end)return nullptr;
    int mid = (start+end)/2;
    Nodo *root = create(inorder[mid]);
    root->left = buildinorder(inorder,start,mid-1);
    root->right = buildinorder(inorder,mid+1,end);

    return root;
}

void levelprint(Nodo *root){
    if(root==NULL)return;

    queue<Nodo*> q;
    q.push(root);
    while(!q.empty()){
        int level = q.size();
        for(int i=0;i<level;i++){
            Nodo* tree = q.front();
            q.pop();
            cout<<tree->val<<" ";
            if(tree->left!=NULL)q.push(tree->left);
            if(tree->right!=NULL)q.push(tree->right);
        }
        cout<<"\n";
    }
}
Hd
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    Nodo *root = NULL;
    int n;
    cin>>n;
    vector<int> inorder(0);
    for(int i=0;i<(1<<n)-1;i++){
        int aux;
        cin>>aux;
        inorder.push_back(aux);
    }
    root = buildinorder(inorder,0,inorder.size()-1);
    levelprint(root);
}