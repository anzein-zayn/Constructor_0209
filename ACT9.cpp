#include <iostream>
using namespace std;
#include <string>

class Buku
{
private :
    string judul;
    string penulis;
    string statuspinjam;
    friend class Petugas;
public:
    void setName(string pNama);
    friend class Petugas;
}