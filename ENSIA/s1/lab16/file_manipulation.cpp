#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

string encrypt() {
    bool still;
    cout << "Do you want to encrypt? (1 or 0): ";
    cin >> still;
    if (!still) return "-1";
    cout << "Name the encrypted file: ";
    string proto_file_name;
    cin >> proto_file_name;
    // store the file name in a constant variable so that it never changes while manipulating it
    const string file_name = proto_file_name;

    while (still) {
        fstream new_file;
        new_file.open(file_name, ios::app);
        if (!new_file.is_open()) {
            cerr << "Error opening file: " << file_name << endl;
            return "-1"; // Return an error indicator
        }

        string line;
        cout << "Enter a line: ";

        // Clear the newline character from the input buffer
        cin.ignore();

        getline(cin, line);

        // encrypt every letter to its ASCII value:
        for (int i = 0; i < line.length(); ++i) {
            int ascii_value = static_cast<int>(line[i]); // get the ASCII value
            new_file << ascii_value; // write it to the file;
            new_file << " "; // write it to the file;
        }
        new_file << endl; // so in the new line, encrypting will start on a new line also
        cout << "Do you still want to encrypt? (1 or 0): ";
        cin >> still;
        new_file.close();
    }
    return file_name; // return the file name to be used in the decrypting function
}

void decrypt(string file_name) {
    fstream encrypted_file;
    fstream decrypted_file;
    encrypted_file.open(file_name, ios::in);
    decrypted_file.open((file_name + "_decrypted.txt"), ios::app);

    if (!encrypted_file.is_open()) {
        cerr << "Error opening file: " << file_name << endl;
        return;
    }

    string line;
    while (getline(encrypted_file, line)) {
        vector<int> ascii_values;

        // Use push_back to add elements to the vector
        for (int i = 0; i < line.length(); i++) {
            ascii_values.push_back(static_cast<int>(line[i]));
        }

        // Open the decrypted file outside the loop to avoid unnecessary open-close operations
        decrypted_file.open("decrypted_file.txt", ios::app);

        if (decrypted_file.is_open()) {
            for (int i = 0; i < ascii_values.size(); i++) {
                decrypted_file << static_cast<char>(ascii_values[i]);
            }
            decrypted_file << endl;
        }

        decrypted_file.close(); // Close the decrypted file after writing a line
    }

    encrypted_file.close();
}

int main() {
    string file_name = encrypt();
    if (file_name != "-1") {
        decrypt(file_name);
    }

    return 0;
}
