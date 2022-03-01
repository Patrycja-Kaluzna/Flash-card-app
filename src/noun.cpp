#include "noun.hh"

Noun::Noun(string& new_article, string& new_word) {
    article = new_article;
    set_word(new_word);    
}

void Noun::read(ifstream& input_stream) {
    string input_text, new_article, new_word, new_definition;
    char* na, * nw, * nd;
    int first_position, second_position;

    getline(input_stream, input_text);
    first_position = input_text.find_first_of("_", 0);
    na = new char[first_position + 1];
    input_text.copy(na, first_position, 0);
    new_article.insert(0, na);
    second_position = input_text.find_first_of("_", first_position);
    nw = new char[second_position - first_position];
    input_text.copy(nw, second_position - first_position - 1, first_position + 1);
    new_word.insert(0, nw);
    nd = new char[input_text.length() - second_position];
    input_text.copy(nd, input_text.length() - second_position - 1, second_position + 1);
    new_definition.insert(0, nd);
    delete [] na;
    delete [] nw;
    delete [] nd;
}