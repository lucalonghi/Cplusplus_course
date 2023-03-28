#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>

class Movie{
private:
    std::string name;
    std::string rating;
    int watched;
public:
    Movie(std::string name_val="None", std::string rating_val="None", int watched_val=0);
    Movie(const Movie &);
    ~Movie();

    std::string get_name();
    std::string get_rating();
    int get_watched();
    void set_name(const std::string);
    void set_rating(const std::string);
    void set_watched(const int);
    void increment_watched();
    void display() const;
};

#endif