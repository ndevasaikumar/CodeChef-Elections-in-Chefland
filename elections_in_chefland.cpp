#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int xa,xb,xc;
	    cin >> xa >> xb >> xc;
	    if(xa > 50){
	        cout << "A" << endl;
	        continue;
	    }
	    if(xb > 50){
	        cout << "B" << endl;
	        continue;
	    }
	    if(xc > 50){
	       cout << "C" << endl;
	       continue;
	    }
	        
	    else
	        cout << "nota" << endl;
	}

}
