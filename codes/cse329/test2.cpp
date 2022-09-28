#include <bits/stdc++.h>
 
#define ll                  long long

#define ci(X)               ll X; cin>>X
#define cii(X, Y)           ll X, Y; cin>>X>>Y
#define ciii(X, Y, Z)       ll X, Y, Z; cin>>X>>Y>>Z
#define ciiii(W, X, Y, Z)   ll W, X, Y, Z; cin>>W>>X>>Y>>Z
 
#define krosuru             ll ___T; cin>>___T; while (___T-- > 0)
#define yehbhitheekhai      ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
 
using namespace std;

struct Node{
    int data;
    Node *next,*prev;
}*head = NULL, *dummy;
Node *addnode(int data){
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = newNode->prev = NULL;
    return newNode;
}
bool _empty(){
    return (dummy->next == NULL); 
}
int _top(){
    if(_empty()) return -1;
    return (dummy->next->data);
}
int getMiddle(){
    if(_empty()) return -1;
    return mid->data;
}
void rmmid(){
    if(empty()) return;
    size--;
    Node *temp = mid;
    if(mid )
}
void _push(int val){
    size++;
    Node *newNode = addnode(val);
    newNode->next = dummy->next;
    newNode->prev = dummy;
    dummy->next = newNode;
}
void _pop(){
    if(_empty()){
        return -1;
    }
    if(!size == 0){
        mid = NULL;
    }
    if(size % 2 != 0){
        mid = mid->next
    }
    if(dummy->next != NULL){
        dummy->next->prev = newNode;
    }
    if(mid == NULL){
        mid = newNode;
    }
    if(size % 2 == 0){
        mid = mid->prev;
    }
}
void print(){
    Node *curr = dummy->prev;
    Node *prev = dummy;
    while(curr != NULl){
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
    curr = prev;
    while(curr !=0){
        cout << curr->data << " ";
        curr = curr->prev;
    }
}
void krdiyasuru()
{
    
}
 
int main()
{
    yehbhitheekhai;
    //    solve();
        krosuru
    {
        krdiyasuru();
    }
}
 




 /*
        fib(5)--> fib(4) and fib(3)
                   3  2        2 1
                2 1   1       1  
 */