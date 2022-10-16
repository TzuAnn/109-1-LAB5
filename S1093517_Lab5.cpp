#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//比較大的數字放前面


int main() {
    string num ;
    char k ;
    int n ;
    cin >> num ;
    for( int i =num.length()-1 ; i >=0 ; i --)
        {
            cout << num<<"a"<<endl ;
       for(int n = 0 ; n <= i ; n++ )
            {

           if( num[n] < num [n+1] )
              {

               k = num[n] ;
               num[n] = num [n+1] ;
            num[n+1] = k ;
            cout << num<<"c"<<endl ;
              }
            }
       }
    cout << num<<endl ;
}
