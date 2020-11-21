#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
using namespace std;

int main() {
	int test;
	cin >> test;
	while(test--){
	    int n;
        cin >> n;
	    int c[n];
	    for(int j=0; j<n; j++)
	        cin >> c[j];
	    int i = 0;
        int t = 0;
	    if(n==1){
	        cout << c[0];
	        t = 1;
	    }
	    else if(t == 0 && n != 1){
	        int minTime = 0;
            list<int> b;
            list<int>::iterator it = b.begin();
	        for(int j=0; j<n; j++){
	            for(int k=j+1; k<n; k++){
	                if(c[j]<c[k]){
	                    int temp = c[j];
	                    c[j] = c[k];
	                    c[k] = temp;
	                }
	            }
	        }
            i = 0;
            while (i<n){
                int length_b = b.size();
                if(i+1==n && length_b==0){
                    b.push_back(c[i]);
                    break;
                }
                else if(i==0 or length_b==0){
                    b.push_back(c[i]);
                    b.push_back(c[i+1]);
                    i = i+2;
                }
                else{
                    b.push_back(c[i]);
                    i++;
                }
                int small = min(b);
                minTime += small;
                for(int l=0; l<2; l++)
                    advance(it, l) = advance(it, l)-small;
                b.remove(0);
            }
            
	        
	        
	    }
	}
	return 0;
}