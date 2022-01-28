#include <iostream>


int main(){
    using namespace std;
    bool a = true;
    long int count=0,temp=0;
    unsigned long long int number=0,n;
    for (unsigned long long int i=100000;i<=1000000;i++){
        cout<<i<<endl;
        n=i;
        temp=1;
        while(n!=1){
            temp++;
            if (n%2==0)
                n/=2;
            else
                n=3*n+1;
        }
        if (temp>count){
            count=temp;
            number=i;
        }
    }
    cout<<number;

}


