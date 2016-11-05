#include <iostream>
#include <vector>

unsigned int erase_minimum(std::vector<unsigned int>& contests)
{
    unsigned int minimum = contests[0];
    unsigned int minimum_index = 0;
    for (unsigned int i = 1; i != contests.size(); ++i) {
        if (contests[i] < minimum) {
            minimum = contests[i];
            minimum_index = i;
        }
    }
    contests.erase(contests.begin() + minimum_index);
    return minimum;
}

int main(void)
{
    unsigned int N, K, L, T;
    std::cin >> N >> K;
    std::vector<unsigned int> important_contests;
    std::vector<unsigned int> not_important_contests;
    unsigned int i = 0;
    unsigned int j = 0;
    for (unsigned int n = 0; n != N; ++n) {
        std::cin >> L >> T;
        if (T == 1)
            important_contests.push_back(L);
        else
            not_important_contests.push_back(L);
    }
    unsigned int losses = 0;
    unsigned int I = important_contests.size();
    int luck_balance = 0;
    if (I > K) {
        while (important_contests.size() > 0 && losses < I - K) {
            luck_balance -= erase_minimum(important_contests);
            ++losses;
        }
    }
    for (const auto& balance : important_contests)
        luck_balance += balance;
    for (const auto& balance : not_important_contests)
        luck_balance += balance;
    std::cout << luck_balance << std::endl;
    return 0;
}
