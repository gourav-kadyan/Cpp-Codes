#include <bits/stdc++.h>
 
const long long SZ = 4e3 + 7;
const long long inf = 1e18;
const long long MOD = 1e9 + 7;
const long long mod = 1e9 + 7;
long long opnmbr = 1;
 
#define ll                  long long
#define ld                  long double
 
#define pb                  push_back
#define mp                  make_pair
#define eb                  emplace_back
 
#define pll                 pair<ll, ll>
#define vi                  vector<ll>
#define vs                  vector<string>
#define vpl                 vector<pll>
#define qi                  queue<ll>
#define si                  set<ll>
#define mi                  map<ll, ll>
#define umi                 unordered_map<ll, ll>
 
#define fi                  first
#define se                  second
 
#define sz(x)               (ll)x.size()
 
#define all(c)              (c).begin(), (c).end()
#define allr(c)             (c).rbegin(), (c).rend()
 
#define Max(a,b)            ((a > b) ? a : b)
#define Min(a,b)            ((a < b) ? a : b)
 
#define ci(X)               ll X; cin>>X
#define cii(X, Y)           ll X, Y; cin>>X>>Y
#define ciii(X, Y, Z)       ll X, Y, Z; cin>>X>>Y>>Z
#define ciiii(W, X, Y, Z)   ll W, X, Y, Z; cin>>W>>X>>Y>>Z
 
#define dbg(x)              cout<<#x<<"="<<(x)<<endl;
#define dbg2(x,y)           cout<<#x<<"="<<(x)<<" "<<#y<<"="<<(y)<<endl;
#define dbg3(x,y,z)         cout<<#x<<"="<<(x)<<" "<<#y<<"="<<(y)<<" "<<#z<<"="<<(z)<<endl;
#define dbg4(x,y,z,w)       cout<<#x<<"="<<(x)<<" "<<#y<<"="<<(y)<<" "<<#z<<"="<<(z)<<" "<<#w<<"="<<(w)<<endl;
 
#define ons()               cout<<"Case #"<<opnmbr++<<": ";
#define krosuru             ll ___T; cin>>___T; while (___T-- > 0)
#define yehbhitheekhai      ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
#define inf                 1e18
 
#define forn(i, n)          for(ll i = 0; i < (n); i++)
#define fore(i, n)          for(ll i = 1; i <= (n); i++)
#define forl(i, l, r)       for(ll i = l; i < (r); i++)
#define forr(i, l, r)       for(ll i = l; i >= (r); i--)
 
#define ms0(X)              memset((X), 0, sizeof((X)))
#define ms1(X, V)           memset((X), -1, sizeof((X)))
#define flv(X, V)           fill(all((X)), V)
 
using namespace std;

// bool isprime(int a)
// {
//     if (a <= 1)
//         return false;
//     if (a <= 3)
//         return true;

//     if (a % 2 == 0)
//         return false;
//     if(a%3==0)
//     return false;
//     for (int i = 5; i * i <=a; i += 6)
//     {
//         if (a % i == 0 || a % (i + 2) == 0)
//             return false;
//     }
//     return true;
// }
// vector<int> factor(int n)
// {
//     vector<int> f;
//     if (n <= 1)
//         cout << "0" << endl;
//     while (n % 2 == 0)
//     {
//         n = n / 2;
//         f.push_back(2);
//     }
//     while (n % 3 == 0)
//     {
//         n = n / 3;
//         f.push_back(3);
//     }
//     //cout<<f<<endl;
//     for (int i = 5; i*i <= n; i += 6)//yha tk n 5 ho jata to fir 1 bhi 5 thi to sq 25 hota na condition chlti he nhi
//     {
//         if (isprime(i) == true)
//         {
//             while (n % i == 0)
//             {
//                 n = n / i;
//                 f.push_back(i);
//             }
//         }
//         else if (isprime(i+2) == true)
//         {
//             while (n % (i+2) == 0)
//             {
//                 n = n / (i+2);
//                 f.push_back(i+2);
//             }
//         }
//         else continue;
//     }
//     return f;
// } 
// void krdiyasuru()
// {
//     cii(x,y);
//     vector<int> v = factor(y);
//     bool flag = true;
//     for(auto i : v){
//         if(x%v[i] != 0){
//             flag = false;
//             break;
//         }
//     }
//     if(flag == true) cout<< " Yes" <<endl;
//     else cout<< " No" <<endl;  
// }

int main()
{
    yehbhitheekhai;
    //    solve();
      //  krosuru
    
}
 