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
    Node *next;
    Node(int n){
        data = n;
        next = NULL;
    }
};

void rprint(Node *head){
    if(head == NULL){
        return;
    }
    cout << head->data << " ";
    rprint(head->next);
}
void krdiyasuru()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    rprint(head);
}
 
int main()
{
    yehbhitheekhai;
    //    solve();
    //    krosuru
    {
        krdiyasuru();
    }
}
 