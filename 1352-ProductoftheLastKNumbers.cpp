/*
 * Author: Gulam Jakaria
 * Date: 14/02/2025
 */

class ProductOfNumbers {
private:
    vector<int> p;
    int size = 0;
public:
    ProductOfNumbers() {
        p.push_back(1);
        size = 0;
    }
    
    void add(int num) {
        if(num == 0){
            p = {1};
            size = 0;
        }else{
            p.push_back(p[size] * num);
            size++;
        }
    }
    
    int getProduct(int k) {
        if(k > size) return 0;

        return (p[size]/(p[size-k]));
    }
};