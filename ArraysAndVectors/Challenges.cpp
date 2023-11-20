#include <iostream>
#include <vector>

int main() {
    std::vector <int> vector1;
    std::vector <int> vector2;
    vector1.push_back(10);
    vector1.push_back(20);
    std::cout << vector1.at(0) <<std::endl;
    std::cout << vector1.at(1) <<std::endl;
    std::cout << vector1.size() <<std::endl;
    vector2.push_back(100);
    vector2.push_back(200);
    std::cout << vector2.at(0) << std::endl;
    std::cout << vector2.at(1) << std::endl;

    std::vector <std::vector<int>> vector2d;
    vector2d.push_back(vector1);
    vector2d.push_back(vector2);
    std::cout << vector2d.at(0).at(0) << " " << vector2d.at(0).at(1) << std::endl;
    std::cout << vector2d.at(1).at(0) << " " << vector2d.at(1).at(1) << std::endl;

    vector1.at(0) = 1000;
    std::cout << vector2d.at(0).at(0) << " " << vector2d.at(0).at(1) << std::endl;
    std::cout << vector2d.at(1).at(0) << " " << vector2d.at(1).at(1) << std::endl;

    return 0;
}