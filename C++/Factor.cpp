// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter value of n: ";
//     cin>>n;
//     int count=0;
//     cout<<"the factors are: "<<endl;
//     for (int i = 1; i <= n; i++)
//     {
//         if (n%i==0)
//         {
//             count++;
//             cout<<i<<endl;
//         }
        
//     }
//     if (count%2==0)
//     {
//         cout<<"even no of factors"<<endl;
//     }
//     else
//     {
//         cout<<"odd";
//     }
//     cout<<"total factors are: "<<count<<endl;
    
//     return 0;
// }

#include <iostream>
#include <cmath>

// Function to count the number of factors for a given number
int countFactors(int num) {
    int count = 0;
    for (int i = 1; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            // If both divisors are the same, count only one
            if (num / i == i) {
                count++;
            } else {
                // Otherwise, count both divisors
                count += 2;
            }
        }
    }
    return count;
}

// Function to check if a number has an odd number of factors
bool hasOddFactors(int num) {
    return countFactors(num) % 2 != 0;
}

int main() {
    std::cout << "Numbers with an odd number of factors between 5000 and 8000 are:" << std::endl;

    for (int i = 5000; i <= 8000; ++i) {
        if (hasOddFactors(i)) {
            std::cout << i << std::endl;
        }
    }

    return 0;
}