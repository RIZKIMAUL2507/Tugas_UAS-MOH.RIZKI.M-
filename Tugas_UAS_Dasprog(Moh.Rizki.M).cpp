#include <iostream>

using namespace std;

void program(){
	cout<<"PROGRAM MENGHITUNG NILAI AKHIR MAHASISWA" << endl;
	cout<<"----------------------------------------" << endl;
}

int main(){
	
	//Deklarasi variabel
	float absensi, tugas, uts, uas, nilai_akhir;
	char nilai_huruf;
	int plh;
	string nama[1];
	program();
	
	do{
		
	system("cls");
	cout << "Masukan Nama Anda \t: ";
	cin >> nama[0];
	
	system("cls");
	cout << "Hai " << nama[0] << endl;
	cout << "Selamat Datang Diprogram Menghitung Nilai Akhir Mahasiswa" << endl;
	cout << endl;
	
	//Proses input
	cout << "Masukan Nilai Absensi \t: ";
	cin >> absensi;
	
	cout << "Masukan Nilai Tugas \t: ";
	cin >> tugas;
	
	cout << "Masukan Nilai UTS \t: ";
	cin >> uts;
	
	cout << "Masukan Nilai UAS \t: ";
	cin >> uas;
	
	//Hitung sesuai rumus
	nilai_akhir = ((absensi*0.1)+(tugas*0.2)+(uts*0.3)+(uas*0.4));
	
	if (nilai_akhir>=80){
		nilai_huruf='A';
	}else if (nilai_akhir>=70){
		nilai_huruf='B';
	}else if(nilai_akhir>=60){
		nilai_huruf='C';
	}else if (nilai_akhir>=50){
		nilai_huruf='D';
	}else {
		nilai_huruf='E';
	}
	
	
	//Proses output
	cout << endl;
	cout << "Nama Mahasiswa \t\t: " << nama[0] << endl;
	cout << "Nilai Akhir \t\t: " << nilai_akhir << endl;
	cout << "Nilai Huruf \t\t: " << nilai_huruf << endl;
	
	cout << endl;
	cout << "tekan (1) untuk keluar \t: ";
	cin >> plh;
	
	}while (plh == 1);
	system("cls");
	cout << endl;
	cout << "TERIMAKASIH TELAH MENGGUNAKAN PROGRAM INI";
	
	return 0;
}
