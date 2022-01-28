#include <iostream>
bool checkdivisors(int i);

bool checkdivisors(int i){
    int arr[10]={11,12,13,14,15,16,17,18,19,20};
    for(int j=0;j<10;j++){
        if(i%arr[j]==0)
            continue;
        else 
            return false;
    }
    return true;
}

int main(){
    using namespace std;
    for(int i=20;i==i;i+=20){
        if (checkdivisors(i)){
            cout<<i;
            break;
        }
    }
    return 0;
}

