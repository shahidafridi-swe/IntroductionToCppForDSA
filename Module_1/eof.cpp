#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int a, b;
    //In C
    // while( scanf("%d %d", &a, &b) != EOF)
    // {
    //     printf("%d %d\n", a,b);
    // }

    // In C++
    while( cin >> a >> b)
    {
        cout << a << " " << b << endl;
    }
}