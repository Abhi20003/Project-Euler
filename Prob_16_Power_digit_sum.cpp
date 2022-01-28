#include <iostream>
#include <cmath>
#include <string.h>  

int main(){
    using namespace std;
    int sum,j=0;
    long double a = pow(2,1000);
    string s = to_string(a);
    s.erase(s.length()-7);
    int len=s.length();
    while (s.length()){
        sum+=s[s.length()-1]-'0';
        s.erase(s.length()-1);
        j++;
    }  
    cout<<sum;

}