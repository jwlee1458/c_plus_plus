//
// Created by 이지원 on 2022/10/18.
// p.247-4

#include "CH5_PRO_EX_4.h"
#include <iostream>
#include <string>
using namespace std;

class Movie {
private:
    string title;
    string director;
    double rating;

public:
    Movie() {
        title = "타이타닉";
        director = "제임스 카메론";
        rating = 9.5;
    }
    Movie(string ti, string di, double ra) {
        title = ti;
        director = di;
        rating = ra;
    }

    string getTitle() {
        return title;
    }
    string getDirector() {
        return director;
    }
    double getRating() {
        return rating;
    }

    void setTitle(string ti) {
        title = ti;
    }
    void setDirector(string di) {
        director = di;
    }
    void setRating(double ra) {
        rating = ra;
    }

    void print() {
        cout << "영화 제목: " << title << endl;
        cout << "영화 감독: " << director << endl;
        cout << "영화 평점: " << rating << endl;
    }
};

int main() {
    Movie movie1;
    Movie movie2;
    cout << "영화 #1" << endl;
    movie1.print();
    cout << endl;
    movie2.getTitle();
    movie2.getDirector();
    movie2.getRating();
    movie2.setTitle("지오스톰");
    movie2.setDirector("딘 데블린");
    movie2.setRating(8.34);
    cout << "영화 #2" << endl;
    movie2.print();
    return 0;
}