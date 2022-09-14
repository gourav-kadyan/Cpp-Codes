#include <bits/stdc++.h>
 
#define ll                  long long

#define ci(X)               ll X; cin>>X
#define cii(X, Y)           ll X, Y; cin>>X>>Y
#define ciii(X, Y, Z)       ll X, Y, Z; cin>>X>>Y>>Z
#define ciiii(W, X, Y, Z)   ll W, X, Y, Z; cin>>W>>X>>Y>>Z
 
#define krosuru             ll ___T; cin>>___T; while (___T-- > 0)
#define yehbhitheekhai      ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
 
using namespace std;
bool ispal(int val){
    int x = val;
    int  res = 0;
    while(x != 0){
        res = res*10 + x%10;
        x /= 10;
    }
    return (val == res);
}
int chkpal(int arr[],int n,int a,int b){
    int c=0;
    for(int i=a;i<b;i++){
        if(ispal(arr[i])==true){
            c++;
        }
    }
    return c;
}
void krdiyasuru()
{
    ci(n);
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    ci(que);
    while(que--){
        cii(a,b);
        int count = chkpal(arr,n,a-1,b);
        cout << count << endl;
    }
}
 
int main()
{
    yehbhitheekhai;
    //    solve();
     //   krosuru
    {
        krdiyasuru();
    }
}
 