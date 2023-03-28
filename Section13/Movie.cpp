#include "Movie.h"
#include <iostream>

Movie::Movie(std::string name_val, std::string rating_val, int watched_val)
    : name{name_val}, rating{rating_val}, watched{watched_val} {
}

Movie::Movie(const Movie &source)
    : Movie{source.name, source.rating, source.watched}{
}
Movie::~Movie(){}

std::string Movie::get_name(){
    return name;
}

std::string Movie::get_rating(){
    return rating;
}
int Movie::get_watched(){
    return watched;
}
void Movie::set_name(const std::string val){
    name = val;
}
void Movie::set_rating(const std::string val){
    rating = val;
}
void Movie::set_watched(const int val){
    watched = val;
}
void Movie::increment_watched(){
    watched++;
    std::cout << name << "watch incremented" << std::endl;
}
void Movie::display() const{
    std::cout << "Movie name: " << name << std::endl;
    std::cout << "Movie rating: " << rating << std::endl;
    std::cout << "Movie watched " << watched << " times" << std::endl;
}