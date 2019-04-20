#include<stdio.h>
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

template<class T>
struct BTNode
{
    BTNode<T> *_lchild, *_rchild;
    T element;
    BTNode(const T &e)
    {
        element = e;
        _lchild = _rchild = NULL;
    }
};

template<class T>
class BinaryTree
{
    public:
    BinaryTree();
    BinaryTree(const vector<T>&a, size_t size, int& index, const T & invalid);
    ~BinaryTree();
    void clear();
    BTNode<T> *_root;
    BTNode<T>* makeTree(const vector<T>&a, size_t size, int& index, const T & invalid );
    void breakTree(T &x, BinaryTree<T>* left, BinaryTree<T>* right);
    void preOrder(BTNode<T>* t);
    void inOrder(BTNode<T>* t);
    void PostOrder(BTNode<T>* t);
};

template<class T>
BinaryTree<T>::BinaryTree()
{
    _root = nullptr;
}
template<class T>
BinaryTree<T>::BinaryTree(const vector<T>&a, size_t size, int& index, const T & invalid)
{
    _root = makeTree(a,  size, index, invalid);
}
template<class T>
BinaryTree<T>:: ~BinaryTree()
{
    clear();
}
template<class T>
void BinaryTree<T>::clear()
{
    if(_root==nullptr)
    {
        return;
    }
    else
    {
        delete _root;
        _root = nullptr;
    }
}
template <class T>
BTNode<T>* BinaryTree<T>::makeTree(const vector<T>& a, size_t size, int& index, const T& invalid)
{
    BTNode<T> * root =NULL;
    if(index<size&& a[index]!=invalid)
    {
        root = new BTNode<T>(invalid);
        root->element = a[index];
        root->_lchild = makeTree(a,size,++index,invalid);
        root->_rchild = makeTree(a,size,++index,invalid);
    }
    return root;
}
template<class T>
void BinaryTree<T>::preOrder(BTNode<T> *t)
{
    BTNode<T> *cur = _root;
    stack<BTNode<T>*> s;
    if(cur==nullptr)
    {
        return ;
    }
    while(cur||!s.empty())
    {
        while(cur)
        {
            s.push(cur);
            cout<<cur->element<<" ";
            cur = cur->_lchild;
        }
        BTNode<T>* top = s.top();
        s.pop();
        cur = top->_rchild;
    }
    cout<<endl;
}
template<class T>
void BinaryTree<T>::inOrder(BTNode<T> *t)
{
    BTNode<T> *cur = _root;
    stack<BTNode<T>*> s;
    if(cur==nullptr)
    {
        return ;
    }
    while(cur||!s.empty())
    {
        while(cur)
        {
            s.push(cur);
            
            cur = cur->_lchild;
        }
        BTNode<T>* top = s.top();
        s.pop();
        cout<<top->element<<" ";
        cur = top->_rchild;
    }
    cout<<endl;
}
template<class T>
void BinaryTree<T>::PostOrder(BTNode<T> *t)
{
    BTNode<T> *cur = _root;
    BTNode<T> * prev = nullptr;
    stack<BTNode<T>*> s;
    if(cur==nullptr)
    {
        return ;
    }
    while(cur||!s.empty())
    {
        while(cur)
        {
            s.push(cur);
            
            cur = cur->_lchild;
        }
        BTNode<T>* top = s.top();
        if(top->_rchild==NULL||prev == top->_rchild)
        {
            cout<<top->element<<" ";
            prev = top;
            s.pop();
        }
        else
        {
            cur = top->_rchild;
        }
    }
    cout<<endl;
}
int main()
{
    vector<char> a={'1','2','3','#','#','4','#','#','5','6'};
    const char invalid = '#';
    size_t size = a.size();
    int index = 0;
    BinaryTree<char> *tree = new BinaryTree<char>(a,size,index,invalid);
    tree->preOrder(tree->_root);
    tree->inOrder(tree->_root);
    tree->PostOrder(tree->_root);
    system("pause");
    return 0;
}