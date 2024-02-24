#include<iostream>
using namespace std;
int main(){
    int arr[]={4,5,6,7,8};
    int *ptr=arr;
    *ptr = 9;
    ptr++;
    *ptr = 8;
    ptr--;
    for(int i=0;i<5;i++){
    cout<<ptr[i]<<endl;
    }
    return 0;
}