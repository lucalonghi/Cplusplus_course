#include "Movies.h"
#include <iostream>

Movies::Movies(){}
Movies::~Movies(){}
bool Movies::add_movie(std::string name, std::string rating, int watched){
    for(auto m: movies){
        if(m.get_name() == name){
            std::cout << name << " already exists" << std::endl;
            return false;
        }
    }
    movies.push_back(Movie(name,rating,watched));
    std::cout << name << " added" << std::endl;

    return true;
}
bool Movies::increment_watched(std::string name){
    for(auto m: movies){
        if(m.get_name() == name){
            m.increment_watched();
            return true;
        }
    }
    std::cout << "Sorry " << name << " not found" << std::endl;

    return false;
}
void Movies::display() const{
    if(movies.empty()){
        std::cout << "Sorry, no movies to display" << std::endl;
    }else{
        std::cout << "-------------------------------" << std::endl;
        for(auto m: movies){
            m.display();
        }
        std::cout << "-------------------------------" << std::endl;
    }
}