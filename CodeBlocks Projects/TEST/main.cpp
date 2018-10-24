#include <iostream>
#include <vector>

using namespace std;

int countfact(vector<int> &set, int n, int total) {

  int ret = 0;
  if (n == 0) {
    /* uncomment to print out each ordering */


    for (int j=0; j<total; j++) cout << set[j] << " " ;
    cout << endl;

    return 1;
  }

  for( int i = 0; i < n; i++ ) {
           swap( set[i], set[n-1] );
           ret += countfact( set, n-1, total );
           swap( set[i], set[n-1] );
  }
  return ret;
}


main() {
        vector<int> set(11);
        int n;
        for( int i = 0; i < 11; i++ ) set[i] = i+1;
        while( cin >> n && n != 0 ) {
                cout << countfact(set, n, n) << endl;
        }
}
