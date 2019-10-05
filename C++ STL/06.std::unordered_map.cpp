#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout << "We will map every uppercase letter to its it's order in the alphabet " << endl;
    
    unordered_map<char, int> m;
    for(int i = 0; i < 26; ++i)
        m['A' + i] = i + 1;
    
    cout << "Iterating through the unordered_map gives us:" << endl;
    
    for(auto i = m.begin(); i != m.end(); ++i)
        cout << i->first << "->" << i->second << endl;
    
    cout << "Key is Q, ";
    cout << "value is " << m['Q'] << endl;
    
    cout << "Key is D, ";
    cout << "value is " << m['D'] << endl;
    return 0;
}
