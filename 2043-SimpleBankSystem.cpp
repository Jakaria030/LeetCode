class Bank {
private: 
    vector<long long> balance;
public:

    Bank(vector<long long>& balance) {
        this->balance = balance;
    }

    bool isValidAccountNumber(int accountNumber) {
        return (accountNumber >= 1 && accountNumber <= balance.size());
    }
    
    bool transfer(int account1, int account2, long long money) {
        if(!isValidAccountNumber(account1) || !isValidAccountNumber(account2)){
            return false;
        }

        account1--;
        account2--;

        if(balance[account1] < money){
            return false;
        }

        balance[account2] += money;
        balance[account1] -= money;
        return true;
    }
    
    bool deposit(int account, long long money) {
        if(!isValidAccountNumber(account)){
            return false;
        }

        account--;

        balance[account] += money;
        return true;
    }
    
    bool withdraw(int account, long long money) {
        if(!isValidAccountNumber(account)){
            return false;
        }

        account--;

        if(balance[account] < money){
            return false;
        }

        balance[account] -= money;
        return true;
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */