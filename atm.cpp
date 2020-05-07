#include <bits/stdc++.h>

double calculateAmount(int amount, double balance) {
    if( amount%5==0&&(double)amount<=(balance-0.50) ) {return balance-(double)amount-0.50;}
    else return balance;
}

int main() {
    int amt;
    double bal;

    std::cin>>amt;
    std::cin>>bal;

    std::cout<<std::fixed<<std::setprecision(2)<<calculateAmount(amt, bal)<<std::endl;
}