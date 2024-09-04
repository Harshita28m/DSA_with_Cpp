#include <bits/stdc++.h>
using namespace std;
int main(){
    int input1=2;
    int input2=20;
    int count =0;
    for(int i= 0; i<= input2;i++){
        int a=i;
        while (a > 0)
    {
        if (a % 10 == input1) count++;
        a = a / 10;
    }

    }
    cout<<count;

}