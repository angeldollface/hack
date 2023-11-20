#include <iostream>
#include <map>
#include <string>
using namespace std;


map<string, string> database(){
    map<string, string> db;
    db["I"] = "1";
    db["Z"] = "2";
    db["E"] = "3";
    db["A"] = "4";
    db["S"] = "5";
    db["G"] = "6";
    db["T"] = "7";
    db["B"] = "8";
    db["P"] = "9";
    db["O"] = "0";

    db["i"] = "1";
    db["z"] = "2";
    db["e"] = "3";
    db["a"] = "4";
    db["s"] = "5";
    db["g"] = "6";
    db["t"] = "7";
    db["b"] = "8";
    db["p"] = "9";
    db["o"] = "0";
    return db;
}

string get_number_string(string subject){
    map<string, string> num_db = database();
    string result = subject;
    for (int i = 0; i < num_db.size(); i++){
        if (num_db[i].key == subject){
            result = num_db[i][key];
        }
        else {}
    }
    return result;
}

string join_vec(vec<string> subject, string joiner){
    string result = "";
    for (int i = 0; i < subject.size(); i++){
        result = result + joiner + subject[i];
    }
    return result;
}

string hackify(string input){
    vector<string> chars;
    for (int i = 0; i < strlen(input); i++){
        string new_char = get_number_string();
        chars.push_back(new_char);
    }
    string result = join_vec(chars, "");
    return result;
}

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

int main(int argc, char* argv[]){
    cli(argc, argv[]);
    return 0;
}