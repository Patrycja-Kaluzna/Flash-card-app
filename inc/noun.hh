#ifndef WORD_HH
#define WORD_HH

#include "part_of_speech.hh"

class Noun: protected Part_of_speech {
    private:
    string article;

    public:
    Noun() = default;
    Noun(string& new_article, string& new_word);
    ~Noun() = default;
    void set_article(string& new_article) {
        article = new_article; }
    string get_article() const {
        return article; }
    void read(ifstream& input_stream) override;
};

#endif