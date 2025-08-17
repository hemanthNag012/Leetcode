#include <iostream>
using namespace std;

//parameterised recursion
void print(int n,int ans){
    if(n==1){
        cout<<ans;
        return;
    }
    print(n-1,ans*n);
}

//Functional Recursion
int print1(int n){
    if(n==1){
        return 1;
    }
    return n * print1(n-1);
}

int main()
{
    int n = 5;
    //print(n,1);
    int ans = print1(n);
    cout<<ans;

    return 0;
}
