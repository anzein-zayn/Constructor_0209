#include <iostream>
using namespace std;
#include <string>

class Petugas;
class Peminjam;
class Buku
{
private :
    string judul;
    string penulis;
    string statuspinjam;
    friend class Petugas;
public:
    void setName(string pNama);
    friend class Peminjam;
};

class Peminjam
{
    private:
        int id;
    public:
        void setId(int pId);
        void displayAll (Peminjam &a);
};
