#include <iostream>
using namespace std;
class Solution {
public:
    int summation(int a, int b) {
        int sum = a;
        int adder = a;
        for(int i = a; i < b; i++) {
           
            
            sum = sum + (adder + 1);
            adder = adder + 1;
            
        }
        
            return sum;
    }
	int pivotInteger(int n) {
		int finalNum = -1;
		int pivot    = 1;
		int pivotSum = summation(1,pivot);
		int nSum  = summation(pivot,n);
		

		while (pivotSum != nSum) {
		    pivotSum =  summation(1, pivot);
		    nSum      = summation(pivot, n);
		    
		    
		    
		    pivot = pivot + 1;
		    
		    if  (pivot > nSum) {
		        break;
		    }
		}
		
		    if(pivot > nSum ) {
		        finalNum = -1;
		    } else if(pivot == 1) {
		        finalNum = pivot;
		    }
		    else {
		        finalNum = pivot - 1;
		    }
		
		    return finalNum;
		   
	}
};


int main() {
    
    Solution solution1;
    cout << solution1.pivotInteger(8);
    
    
    return 0;
}
