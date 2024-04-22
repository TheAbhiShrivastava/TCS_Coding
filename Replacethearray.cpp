#include<bits/stdc++.h>
using namespace std;
int ReplacetheArray(int arr[],int n){
    for(int i = 0 ;i <n;i++){
        set<int>s;
        for(int j = 0; j< n;j++){
            if(arr[j]< arr[i]){
             s.insert(arr[j]);   
            }
        }
        cout << s.size()+1 << " ";
    }
}
int main(){
    int n;
    cin >>n;
    int arr[n];
    for(int i =0 ;i < n; i++){
        cin >> arr[i];
    }
    int replacenumber = ReplacetheArray(arr,n);

    return 0;
}