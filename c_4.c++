#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int arraySum(int arr[], int n){
        //Write your code here...
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        return sum;
    }
};