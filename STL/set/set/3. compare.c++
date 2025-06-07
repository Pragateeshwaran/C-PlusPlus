#include<iostream>
#include<set>
int main()
{
    std::set<int> s1 = { 1, 2, 3, 4, 5 };
    std::set<int> s2 = { 1, 2, 3, 4, 5 };
    std::set<int> s3 = { 1, 2, 3, 4, 6 };

    std::cout << "s1 == s2: " << (s1 == s2) << std::endl;
    std::cout << "s1 != s2: " << (s1 != s2) << std::endl;
    std::cout << "s1 < s3: " << (s1 < s3) << std::endl;
    std::cout << "s1 > s3: " << (s1 > s3) << std::endl;
    std::cout << "s1 <= s2: " << (s1 <= s2) << std::endl;
    std::cout << "s1 >= s3: " << (s1 >= s3) << std::endl;

    return 0;
}