#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<int>&arr,int cow,int dist){
        int count=1;
        int last=arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i]-last>=dist){
                count++;
                last=arr[i];
            }
            if(count>=cow) return true;
        }
        return false;
    }
    int solve(int n, int cows, vector<int> &stalls) {
        sort(stalls.begin(),stalls.end());
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            mini=min(mini,stalls[i]);
            maxi=max(maxi,stalls[i]);
        }
        // for(int i=1;i<=maxi-mini;i++){
        //     if(isPossible(stalls,i,cows)) continue;
        //     else return i-1;
        // }
        // return -1;
        int low=1;
        int high=maxi-mini;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(isPossible(stalls,cows,mid)){
                low=mid+1;
            }
            else high=mid-1;
        }
        return high;
    }
int main(){
}