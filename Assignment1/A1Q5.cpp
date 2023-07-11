# include <bits/stdc++.h>
using namespace std;

bool solve(vector<int> &nums){
    int n = nums.size();
    map<int, int> ma;
    for(int i=0;i<n;i++){
        ma[nums[i]]++;
        if(ma[nums[i]]>=2){
            return true;
        }
    }return false;
    
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
    
    
    
    cout<<solve(arr);

}