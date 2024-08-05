#include<bits/stdc++.h>
using namespace std;
class info{
    public:
    int a;
    int b;
    info(int p,int q){
        a=p;
        b=q;
    }
};
class comp{
    public:
        bool operator()(info*p1,info*p2){
            int distanceA=((p1->a*p1->a)+(p1->b*p1->b));
            int distanceB=((p2->a*p2->a)+(p2->b*p2->b));
            return distanceA>distanceB;
        }
};
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<info*,vector<info*>,comp> pq;
        for(int i=0;i<points.size();i++){
            int x=points[i][0];
            int y=points[i][1];
            info* newInfo=new info(x,y);
            pq.push(newInfo);
        }
        vector<vector<int>> ans;
        int i=0;
        while(i<k){
            auto temp=pq.top();
            pq.pop();
            ans.push_back({temp->a,temp->b});
            i++;
        }
        return ans;
    }
};
int main(){
}