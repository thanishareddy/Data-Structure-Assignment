#include<iostream>
using namespace std;
void asteriks(int m){
    for(int i=0;i<m;i++){
        cout<<"*"<<" ";
    }
    cout<<endl;
}
void patternPrinting(int max,int min){
    // recursive Method
    asteriks(min);
    if(min<max){
        patternPrinting(max,min+1);
    }
    asteriks(min);
    
    int main(){
    
    int n,m;
    cout<<"Enter the number of asterisks(m's value) you want in your first line of your pattern:";
    cin>>m;
    cout<<"Enter the max. number of asterisks(n's value) you want in your pattern :";
    cin>>n;
    if(n>=m){
    cout<<"Your Pattern is :"<<endl;
    patternPrinting(n,m);
    }
    else{
        cout<<"Max(n's value) value Cannot Be Smaller than first line asteriks value(m's value) "<<endl;
    }
    return 0;
}
