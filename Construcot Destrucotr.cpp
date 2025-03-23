#include <iostream>
using namespace std;

class Book
{
    private:
        string title;
        string author;
        string release;
        string genre;
        float *rating;

    public:
        Book(string title, string author, string release, string genre, float rating)
        {
            this->title = title;
            this->author = author;
            this->release = release;
            this->genre = genre;
            this->rating = new float(rating);
        }

        ~Book()
        {
            cout<<"The Book has been deleted";
        }

        void display()
        {
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Release: " << release << endl;
            cout << "Genre: " << genre << endl;
            cout << "Rating: " << *rating << endl;
        }
};

int main(){
    Book seirei("Spirit Chronicles", "Yuri Kitayama", "2021", "Fantasy", 4.5);
    seirei.display();
}
