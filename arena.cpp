#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Simple cryptographic duel game simulation

string generateKey() {
    string key = "";
    string chars = "ABCDEF123456";
    for (int i = 0; i < 6; i++) {
        key += chars[rand() % chars.size()];
    }
    return key;
}

int main() {
    srand(time(0));

    cout << "=== Cipher Duel ===\n";
    cout << "Match Private Key with Public Key patterns!\n\n";

    string privateKey = generateKey();
    string publicKey = generateKey();

    int score = 0;

    cout << "Private Key: " << privateKey << endl;
    cout << "Public Key:  " << publicKey << endl;

    for (int i 

    return 0;
}
