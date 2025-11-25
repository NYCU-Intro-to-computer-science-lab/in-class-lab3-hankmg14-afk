// 題目 3：破解數學家的謎題 (Cracking the Mathematician's Puzzle) - 30分

#include <iostream>
using namespace std;

bool isPrime(int n){
    int i ;
    for(i=2;i<n;i++){
        if(n%i==0){
            return false;
            break;
        }else if (n-1==i){
            return true;
            break;
        }
    }
}
int main() {
    int n, i ;
    cin>>n;
    for(i=1;i<=n/2;i++){
        if(isPrime(i)==1&&isPrime(n-i)==1){
            break ;
        }
    }
    cout<<i<<" "<<n-i<<endl;
    
    return 0;
}
