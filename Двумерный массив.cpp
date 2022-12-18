#include<iostream>
using namespace std;

int main(){
    int a[10][10];
    int m,n;
 
    cout << "M: ";
    cin >> m;
    cout << "N: ";
    cin >> n;
    int j;
    for (j=0; j<n; ++j){
        cin >> a[0][j];
    }
 
    int i;
    for (i=1; i<m; ++i){
        for (j=0; j<n; ++j){
            a[i][j] = a[0][j];
        }
    }
 
 
    for (i=0; i<m; ++i){
        for (j=0; j<n; ++j){
            cout << " : " << a[i][j];
        }
        cout << " : " << endl;
    }
    return 0;
}