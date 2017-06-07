/*
 Sifer Aseph
 TopCoder: AccountBalance
 https://community.topcoder.com/stat?c=problem_statement&pm=6036
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <ctime>

class AccountBalance {
public:
    int processTransactions(int startingBalance, std::vector<std::string> transactions) {
        if (transactions.size() == 0) {
            return startingBalance;
        }
        
        for (int i = 0; i < transactions.size(); ++i) {
            if (transactions[i].substr(0,1) == "C") { // add
                startingBalance += stoi(transactions[i].substr(2, 6));
            }
            
            if (transactions[i].substr(0,1) == "D") { // subtract
                startingBalance -= stoi(transactions[i].substr(2, 6));
            }
        }
        
        return startingBalance;
    }
    
private:

};

int main() {
    AccountBalance test;

    std::cout << test.processTransactions(100, {"C 1000", "D 500", "D 350"}) << std::endl; // should return 250
    std::cout << test.processTransactions(100, {}) << std::endl; // 100
    
    return 0;
}
