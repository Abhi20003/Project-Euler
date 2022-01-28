#include <iostream>

int main(){
    using namespace std;
    unsigned long long int sum_square=0,square_sum=0;
    for(int i=1;i<101;i++){
        sum_square+=i*i;
        square_sum+=i;
    }
    square_sum*=square_sum;

    cout<<square_sum-sum_square;

}