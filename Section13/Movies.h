#ifndef _MOVIES_H_
#define _MOVIES_H_

#include "Movie.h"
#include <string>
#include <vector>

class Movies{
private:
    std::vector<Movie> movies;
public:
    Movies();
    ~Movies();
    bool add_movie(std::string, std::string, int);
    bool increment_watched(std::string);
    void display() const;
};

#endif