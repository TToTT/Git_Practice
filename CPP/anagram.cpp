#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

bool anagram(string x, string y) {
    if(x.length() != y.length()) return false;
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    if(x.compare(y)) return false;
    else return true;
}

int main() {
    bool result;
    string s, t;
    cin>>s>>t;
    result = anagram(s, t);
    cout<<"Is anagram?"<<result<<endl;
    return 0;
}

