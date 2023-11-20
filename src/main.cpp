/*
HACK by Alexander Abraham 
a.k.a. "Angel Dollface".
Licensed under the MIT license.
*/

// Importing the header
// to use maps.
#include <map>

// Importing the header
// to use vectors.
#include <vector>

// Importing the header
// to use strings.
#include <string>

// Importing the header
// to use c-like strings.
#include <cstring>

// Importing the header
// to use "cout".
#include <iostream>

// We only want to use the
// "std" namespace.
using namespace std;


// This function returns a database
// of numeric characters that can be mapped
// to lowercase or uppercase letters.
map<char, char> database(){
    map<char, char> db;
    db['I'] = '1';
    db['Z'] = '2';
    db['E'] = '3';
    db['A'] = '4';
    db['S'] = '5';
    db['G'] = '6';
    db['T'] = '7';
    db['B'] = '8';
    db['P'] = '9';
    db['O'] = '0';

    db['i'] = '1';
    db['z'] = '2';
    db['e'] = '3';
    db['a'] = '4';
    db['s'] = '5';
    db['g'] = '6';
    db['t'] = '7';
    db['b'] = '8';
    db['p'] = '9';
    db['o'] = '0';
    return db;
}

// We take a character in, convert it to a number
// if possible and return it.
char get_number_string(char subject){
    map<char, char> num_db = database();
    char result = subject;
    for (auto i = num_db.begin(); i != num_db.end(); i++){
        char letter = i->first;
        char number = i->second;
        if (subject == letter){
            result = number;
        }
        else {}
    }
    return result;
}

// We join a vector of characters and return
// the resulting string.
string join_vec(vector<char> subject){
    string result = "";
    for (int i = 0; i < subject.size(); i++){
        result = result + subject[i];
    }
    return result;
}

// We take in a string, replace characters that can
// be replaced with numbers and return the resulting
// string.
string hackify(string input){
    vector<char> chars;
    for (int i = 0; i < input.length(); i++){
        char new_char = get_number_string(input[i]);
        chars.push_back(new_char);
    }
    string result = join_vec(chars);
    return result;
}

// Hack's tiny CLI!
void cli(int argc, char* argv[]){
    if (argc == 2){
        string user_string = argv[1];
        string res = hackify(user_string);
        cout << res << endl;
    }
    else {
        cout << "Invalid arguments supplied!" << endl;
    }
}

// The main point of entry for
// the Clang compiler.
int main(int argc, char* argv[]){
    cli(argc, argv);
    return 0;
}