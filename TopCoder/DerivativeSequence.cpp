/*
 Sifer Aseph
 TopCoder: DerivativeSequence
 https://community.topcoder.com/stat?c=problem_statement&pm=6665
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <ctime>

class DerivativeSequence {
public:
    std::vector<int> derSeq(std::vector<int> a, int n) {
        for (int i = 0; i < n; ++i) {
            std::vector<int> nextIteration;
            
            for (int j = 0; j < a.size()-1; ++j) {
                int op = a[j+1] - a[j];
                nextIteration.push_back(op);
            }
            
            a.clear();
            a = nextIteration;
        }
        
        return a;
    }
    
private:

};

int main() {
    DerivativeSequence test;

    std::vector<int> me1 = test.derSeq({5,6,3,9,-1}, 1); // should return {1,-3,6,-10}
    std::vector<int> me2 = test.derSeq({5,6,3,9,-1}, 2); // {-4,9,-16}
    
    for (int i = 0; i < me1.size(); ++i) {
        std::cout << me1[i] << " ";
    }
    
    std::cout << std::endl;
    
    for (int i = 0; i < me2.size(); ++i) {
        std::cout << me2[i] << " ";
    }
    
    std::cout << std::endl;
    
    return 0;
}
