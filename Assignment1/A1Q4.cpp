# include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &nums1, vector<int> &nums2){
    int m = nums1.size();
    int n = nums2.size();
    int k = m-n;
    for(int i=k;i<m+n;i++){
        nums1[i] = nums2[i-m+n];
    }sort(nums1.begin(), nums1.end());
    for(auto it: nums1){
        cout<<it<<" ";
    }
    
}
int main(){
    int n,t;
    cout<<"Please enter the size of the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Please Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Please enter the size of the array: ";
    cin>>t;
    vector<int> arr1(n+t);
    cout<<"Please Enter the elements of the array: ";
    for(int i=0;i<t;i++){
        cin>>arr1[i];
    }for(int i=t;i<n+t;i++){
        arr1[i]=0;
    }
    
    
    solve(arr1, arr);

}