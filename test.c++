#include <iostream>
#include <algorithm>
#include <string>
#include <chrono>  // For measuring time

#define GREEN "\033[32m"
#define RED "\033[31m"
#define RESET "\033[0m"

int main() {
    std::string targetPassword = "P155W049X";
    std::string guess = targetPassword;

    // Sort the guess string to start with the lexicographically smallest permutation
    std::sort(guess.begin(), guess.end());

    // Start measuring time
    auto start = std::chrono::high_resolution_clock::now();

    // Line number counter
    int lineNumber = 0;

    // Generate and print permutations with line numbers until the target password is found
    do {
        ++lineNumber;
        std::cout <<GREEN << lineNumber << ": " <<RESET<< guess << std::endl;  // Print each permutation with line number

        if (guess == targetPassword) {
            std::cout << "Password found at Line " << lineNumber << ": " << guess << std::endl;
            break;  // Exit the loop when the password is found
        }
    } while (std::next_permutation(guess.begin(), guess.end()));

    // Stop measuring time
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end - start;

    // Print execution time
    std::cout << RED<<"Execution time: " << elapsed.count() << " seconds" <<RESET<< std::endl;

    return 0;
}
