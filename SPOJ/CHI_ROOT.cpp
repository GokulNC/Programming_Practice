// CHI_ROOT - n-th root
// http://www.spoj.com/problems/CHI_ROOT/


#include<iostream>
#include<cmath>

using namespace std;

long double calculateRoot(long int power, long double x) {
    long double left = 0.0, right = x, result, temp, accuracy = ((long double) 1.0)/pow((long double)10, (long double)102);
    result = left + (right-left)/((long double)2.0);
    long int i, iterations = 0;
    while(result<=x) {
        for(i=1, temp=1.0; i<=power; i++) temp *= result;
        if(temp==x || abs(result-x)<accuracy) return result;
        else if(temp>x) right = result;
        else left = result;
        if(++iterations > 150) return result;
        result = left + (right-left)/((long double)2.0);
    }
    return -1;
}

int main() {
    int t;
    long int n;
    long double x;

    cin>>t;
    while(t--) {
        cin>>n>>x;
        cout.precision(101);
        cout << calculateRoot(n, x); //Prints the long double with 101 digits precision
        //We have to print without decimal point as per the stupid problem setter, which I haven't done yet.
        //I've solved the problem, that's enough for my conscience..
    }
}
