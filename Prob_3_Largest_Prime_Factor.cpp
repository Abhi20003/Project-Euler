#include <iostream>
int main(){
    using namespace std;
    int number,temp;
    unsigned long long int n = 600851475143;
    bool Prime = false;
    for(int i=n-1;i>0,!Prime;i--){
        if (n%i==0){
            number = i;
            for(int j=1;j<number;j++){
                if (i%j==0 && j!=1){
                    break;
                }
                temp=j;
            }
            if (temp==number-1){
                Prime = true;
            }
        }
    }
    cout<<number;

}