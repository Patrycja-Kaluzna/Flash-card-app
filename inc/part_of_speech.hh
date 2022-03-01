#ifndef PART_OF_SPEECH_HH
#define PART_OF_SPEECH_HH

using namespace std;

#include <fstream>
#include <string>

class Part_of_speech {
    private:
    string word;
    string definition;

    public:
    Part_of_speech() = default;
    Part_of_speech(string& new_word, string& new_definition): 
        word(new_word), definition(new_definition){}
    ~Part_of_speech() = default;
    void set_word(string& new_word) {
        word = new_word; }
    string get_word() const {
        return word; }
    void set_definition(string& new_definition) {
        definition = new_definition; }
    string get_definition() const {
        return definition; }  
    virtual void read(ifstream& input);
};

#endif