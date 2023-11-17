#include<bits/stdc++.h>
using namespace std;

int main(){

    int x = 10; //static variable 
    
    int * a  = new int; //dynamic variable 
    *a = 15;
    cout << *a << endl;

    float *f = new float;
    *f = 1.32442;
    cout << *f << endl;

    return 0;
}