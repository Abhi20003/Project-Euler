#include <iostream>
int factors(int a);
int factors(int a){
    int count=0;
    for(int i=1;i<=a;i++){
        if(a%i==0)
            count++;
    }
    return count;
}

int main(){
    int triangle_nummber=1;
    int c = 2;
    while(factors(triangle_nummber)<=500){
        triangle_nummber+=c;
        c++;
        std::cout<<triangle_nummber<<"  "<<factors(triangle_nummber)<<std::endl;
    }
    std::cout<<triangle_nummber;
}
