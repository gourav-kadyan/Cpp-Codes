#include <bits/stdc++.h>
using namespace std;


class TwoStack{
    public:
    int *arr;
    int s1,s2;
    int cap;
    int t1,t2;
    TwoStack(int val){
        arr = new int[val];
        cap = val;
        s1= 0;
        s2 = 0;
        t1 = 0;
        t2 = val - 1;
    }
    void push1(int val){
        if(t1 <= t2){
            arr[t1] = val;
            s1++;
            t1++;
        }
        return;
    }
    int pop1(){
        if(t1 == 0){
            cout << "bhai kya krr rha hai ";
            return -69;
        }
        int lol = arr[t1-1];
        t1--;
        s1--;
        return lol;
    }
    bool emp1(){
        return (s1 == 0);
    }
    int top1(){
        if(t1 == 0){
            return -69;
        }
        return arr[t1-1];
    }

    int size1(){
        return s1;
    }
    void push2(int val){
        if(t2 >= t1){
            arr[t2] = val;
            s2++;
            t2--;
        }
        return;
    }
    int pop2(){
        if(t2 < t1){
            return -69;
        }
        if(t2 == cap-1){
            cout << "bhai kya krr rha hai ";
            return -69;
        }
        int lol = arr[t2+1];
        t2++;
        s2--;
        return lol;
    }
    bool emp2(){
        return (s2 == 0);
    }
    int top2(){
        if(t2 == cap - 1){
            return -69;
        }
        return arr[t2+1];
    }
    int size2(){
        return s2;
    }
};      


int main(){
    TwoStack s(0);
    s.push1(5);
    s.push1(10);
    s.push1(15);
    s.push2(1);
    s.push2(2);
    s.push2(3);
    cout << s.top1() << endl;
    cout << s.top2() << endl;
    cout << s.pop1() << endl;
    cout << s.pop2() << endl;
    cout << s.size1() << endl;
    cout << s.size2() << endl;
    cout << s.emp1() << endl;
    cout << s.emp2() << endl;


    return 0;
}