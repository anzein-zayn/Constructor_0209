#include <iostream>
using namespace std;

class Mahasiswa{
    private:
        static int TotalMahasiswa;
    public:
        string Nama;
        string Status;
        int Usia;

        Mahasiswa(string pNama, int pUsia)
        {
            Nama = pNama;
            Usia = pUsia;
            Status = " Mahasiswa baru ";
            ++TotalMahasiswa;
            cout << Nama << " DiBuat " << " Status " << Status <<endl;
            cout << endl;
        }


        ~Mahasiswa()
        {
                cout<< Nama << " DiHancurkan " <<endl;
                --TotalMahasiswa;
                cout << endl;
        }

        static int getTotalMahasiswa(){
            return TotalMahasiswa;
        }

        static void setTotalMahasiswa(int a){
            TotalMahasiswa = a;
        }
};

int Mahasiswa::TotalMahasiswa = 0;

int main ()
{

    cout << "Total Mahasiswa adalah " << Mahasiswa::getTotalMahasiswa() <<endl;

    Mahasiswa mhs1("Maman", 20);
    Mahasiswa mhs2("Suripto", 19);

    Mahasiswa::setTotalMahasiswa(10);

    cout << "Total Mahasiswa adalah " << Mahasiswa::getTotalMahasiswa() <<endl;
    {
        Mahasiswa mhs3("Mamat", 22);
        Mahasiswa mhs4("Kiwil", 21); 
        cout << "Total Mahasiswa adalah " << Mahasiswa::getTotalMahasiswa() <<endl;
    }

    cout << "Total Mahasiswa adalah " << Mahasiswa::getTotalMahasiswa() <<endl;
}