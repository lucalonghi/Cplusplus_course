#include <iostream>
#include <string>

using namespace std;

int main()
{
    string message, encr_message, dencr_message;

    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key{"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    cout << "Enter your secret message: ";
    getline(cin,message);

    cout << "Encrypting message..." << endl;

    for(auto c: message){
        size_t pos = alphabet.find(c);
        if(pos != string::npos){
            encr_message += key.at(pos);
        }
        else{
            encr_message += c;
        }
    }

    cout << "Encrypted message: " << encr_message << endl;

    cout << "Dencrypting message..." << endl;

    for(auto c: encr_message){
        size_t pos = key.find(c);
        if(pos != string::npos){
            dencr_message += alphabet.at(pos);
        }
        else{
            dencr_message += c;
        }
    }

    cout << "Decrypted message: " << dencr_message << endl;

    return 0;
}
