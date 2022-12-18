#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main(){
    vector<int> vec;
    int num, key = 4;
    cout << "Vector elements(q to exit): ";
    while(cin){
        cin >> num;
        vec.push_back(num);
        if(num % 10 == key){
            vec.push_back(key);
        }
    }
    for(int i : vec){
        cout << i << " ";
    }
    cout << endl;
}