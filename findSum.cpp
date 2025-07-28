#include<bits/stdc++.h>
using namespace std;

int findSum(int a[],int n){
int sum =0;
for(int i =0;i<n;i++){
    sum += a[i];
}
return sum;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = findSum(arr, n);
    cout << "Sum of array elements: " << result << endl;
    return 0;
}