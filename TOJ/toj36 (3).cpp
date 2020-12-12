#include<iostream>

using namespace std ;

long long qpow( long long a ,long long b , long long c){
    if(b == 1) return a ;
    else if(b == 0) return 1 ;
    if (b&1){
		return (a % c) * qpow(a , b - 1 , c) % c ; 
    }
    else{
        long long tmp = qpow(a , b / 2 , c) ;
        return (tmp % c) * (tmp % c) % c ;
    }

}

int main(){
    long long a = LONG_LONG_MAX;
	cout<<!a<<'\n';
}
