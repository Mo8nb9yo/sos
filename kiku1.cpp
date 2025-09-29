#include <iostream>
#include <algorithm>
using namespace std;
long long sumEvenlnRange(long long a, long long b) {
if (a>b) swap(a,b);
long long first = (a % 2 !=0) ? (a+1) : a;
long long last =(b % 2 != 0) ? (b - 1) : b;
if (first > last) return 0LL;
long long n = ((last - first)/2) + 1;
return n*(first + last)/2;
}
int main() {
long long a, b;
count <<"numbers two!:";
if (!(cin >>a>> b)) return 0;
count <<"suma two pair:" << sumEvenlnRange(a, b)<< "\n";
return 0;
}
