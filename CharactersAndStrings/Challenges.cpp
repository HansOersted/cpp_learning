#include <iostream>
#include <string>

int main() {

    std::string alphabet {"QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm"};
    std::string key {"poiuytrewqlkjhgfdsamnbvcxzPOIUYTREWQLKJHGFDSAMNBVCXZ"};
    
    std::string msg;
    std::string msg_coded;

    std::cout << "Enter your message: ";
    std::getline(std::cin, msg);
    std::cout << "original message: " << msg << std::endl;

    for (auto charater: msg) {
        if (alphabet.find(charater) != std::string::npos)
            msg_coded.push_back(key[alphabet.find(charater)]);
        else
            msg_coded.push_back(charater);
    }
    std::cout << "coded message: " << msg_coded << std::endl;

    std::string msg_traslated;
    for (auto charater: msg_coded) {
        if (key.find(charater) != std::string::npos)
            msg_traslated.push_back(alphabet[key.find(charater)]);
        else
            msg_traslated.push_back(charater);
    }
    std::cout << "translated message: " << msg_traslated << std::endl;

    return 0;
}