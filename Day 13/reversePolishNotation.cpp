#include<bits/stdc++.h>
using namespace std;
bool isOperator(string num){
    return (num=="+" || num=="*" || num=="/" ||num=="-");
    }
    int evalRPN(vector<string>& A) {
        stack<string>st;
    for(int i=0;i<A.size();i++){
        if(!isOperator(A[i])){
            st.push(A[i]);
        }
        else{
            string a=st.top();
            st.pop();
            string b=st.top();
            st.pop();
            int num1=stoi(a);
            int num2=stoi(b);
            if(A[i]=="+") st.push(to_string(num1+num2));
            else if(A[i]=="-") st.push(to_string(num2-num1));
            else if(A[i]=="*") st.push(to_string(num2*num1));
            else if(A[i]=="/") st.push(to_string(num2/num1));
        }
    }
    return stoi(st.top());
}
int main(){
}