#include <iostream>
#include <string.h>
#include <cmath>

long double factorial(int n);
long double factorial(int n){
    if (n>0)
        return n*factorial(n-1);
    else
        return 1;
}

double fact(int n);
double fact(int n){
    double f=1;
    for(int i=1; i<=n;i++)
        f*=i;
    return f;
}



int main(){
    using namespace std;
    int sum=0,summ=0;
    double a = fact(100);
    string s = to_string(a);
    cout<<s<<endl;
    cout<<a<<endl;
    /*for(int j=0;j<s.length();j++){
        sum+=s[j]-'0';
        cout<<s[j]<<endl;
    }*/
    /*while(s.length()){
        summ+=s[s.length()-1]-'0';
        s.erase(s.length()-1);
    }*/
    cout<<summ<<endl;
    cout<<sum;

}