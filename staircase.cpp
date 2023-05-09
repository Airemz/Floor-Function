#include <iostream>

int main();

int main() {

    double x{};

    std::cout << "Enter value of x: ";
    std::cin >> x;

    // This local variable should hold the result of stair( x )
    int stair{};
    
    if (x>=0){
        for (int k{0}; k <= x; k++){
            if (x >= k && x <= k + 1) {
                stair = k;
            }
        }
    }

    else if (x<0){
        for (int k{0}; k >= x; k--){
            if (x < k && x > k-1){
                stair = k-1;
            } else if (x==k){
                stair = k;
            }
        }
    }
    
    
    
    std::cout << "The value of stair(x) is: ";
    std::cout << stair;
    std::cout << std::endl;
    
    return 0;

}