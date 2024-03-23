#include <iostream>
using namespace std;

struct mahasiswa{
    string nim,nama,alamat,jenis,prodi,input;
};

void data_mahasiswa_ti(){
    cout<<"=====DAFTAR NAMA MAHASISWA TEKNIK INFORMATIKA====="<<endl;
    cout<<"1. AZKA IBAD      (TI2023001)"<<endl;
    cout<<"2. GUNAWAN        (TI2023002)"<<endl;
    cout<<"3. PENDI JAYADI   (TI2023003)"<<endl;
    cout<<"4. NAUFAL SAFII   (TI2023004)"<<endl;
    cout<<"5. ROMZI          (TI2023005)"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;
};
void data_mahasiswa_si(){
    cout<<"=====DAFTAR NAMA MAHASISWA SISTEM INFORMASI====="<<endl;
    cout<<"1. RIDHO' GANTENG (SI2023001)"<<endl;
    cout<<"2. IKHWAN JONO    (SI2023002)"<<endl;
    cout<<"3. SABOLAH        (SI2023003)"<<endl;
    cout<<"4. JAYADI MAHSUN  (SI2023004)"<<endl;
    cout<<"5. HERVINA HALIMI (SI2023005)"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;
};
int main(){
    cout<<"=============================================================="<<endl;
    cout<<"\tSELAMAT DATANG DI PROGRAM LOGIN DATA MAHASISWA\t"<<endl;
    cout<<"=============================================================="<<endl;
    cout<<endl;
string input,ulang;
string paswoard("12345678");
cout<<"Disini anda akan di suruh untuk memasukkan pasword yg sudah terdaftar"<<endl;
cout<<"KET : "<<endl;
cout<<"1). Program akan mengulang jikalau pasword anda salah "<<endl;
cout<<"2). Dan program akan lanjut jikalau pasword anda benar"<<endl;
cout<<"========================================================"<<endl;
cout<<endl;
do{
while(true){
    cout<<"Silahkan masukkan paswoard : ";cin>>input;
    if(input==paswoard){
        cout<<"Paswoard anda benar!!"<<endl;
        cout<<endl;
        break;
    }
    else{
    cout<<"Paswoard anda salah!!"<<endl;
    cout<<"Mohon maukkan pawoard dengan benar!!"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;
    break;
    }
    return 0;
}
}while(input !=paswoard);

do{
data_mahasiswa_ti();
data_mahasiswa_si();
cout<<"-------------------------"<<endl;
cout<<"SILAHKAN INGAT NIM ANDA!!"<<endl;
cout<<"-------------------------"<<endl;
cout<<"apakah anda sudah mengingat NIM anda ? <y/n> : ";
cin>>ulang;
}while (ulang !="y");
cout<<"==================================================="<<endl;
cout<<endl;

string msk;
string pswrd[10]= {"TI2023001","TI2023002","TI2023003","TI2023005","TI2023005","SI2023001","SI2023002","SI2023003","SI2023004","SI2023005"};
do{
while(true){
    cout<<"Silahkan masukkan NIM untuk menampilkan data anda : ";
    cin>>msk;
    cout<<"==================================================="<<endl;
    cout<<endl;

    if(msk == pswrd[10]){
        if(pswrd[10]=="SI2023005"){
            cout<<"==================================="<<endl;
            mahasiswa nim;
            nim.nim="SI2023005";
            nim.nama="HERVINA HALIMI";
            nim.alamat="BOGOK";
            nim.jenis="PEREMPUAN";
            nim.prodi="SISTEM INFORMASI";
            cout<<"1. NAMA          : "<<nim.nama<<endl;
            cout<<"2. NIM           : "<<nim.nim<<endl;
            cout<<"3. ALAMAT        : "<<nim.alamat<<endl;
            cout<<"4. JENIS KELAMIN : "<<nim.jenis<<endl;
            cout<<"5. PRODI         : "<<nim.prodi<<endl;
            cout<<"==================================="<<endl;
            break;
        }
        else if(pswrd[10]=="SI2023004"){
            cout<<"==================================="<<endl;
            mahasiswa nama;
            nama.nim="SI2023004";
            nama.nama="JAYADI MAHSUN";
            nama.alamat="DERMAJI";
            nama.jenis="LAKI-LAKI";
            nama.prodi="SISTEM INFORMASI";
            cout<<"1. NAMA          : "<<nama.nim<<endl;
            cout<<"2. NIM           : "<<nama.nama<<endl;
            cout<<"3. ALAMAT        : "<<nama.alamat<<endl;
            cout<<"4. JENIS KELAMIN : "<<nama.jenis<<endl;
            cout<<"5. PRODI         : "<<nama.prodi<<endl;
            cout<<"==================================="<<endl;
            break;
        }
        else if(pswrd[10]=="SI2023003"){
            cout<<"==================================="<<endl;
            mahasiswa nama;
            nama.nim="SI2023003";
            nama.nama="SABOLAH";
            nama.alamat="PEMGADANG";
            nama.jenis="LAKI-LAKI";
            nama.prodi="SISTEM INFORMASI";
            cout<<"1. NAMA          : "<<nama.nim<<endl;
            cout<<"2. NIM           : "<<nama.nama<<endl;
            cout<<"3. ALAMAT        : "<<nama.alamat<<endl;
            cout<<"4. JENIS KELAMIN : "<<nama.jenis<<endl;
            cout<<"5. PRODI         : "<<nama.prodi<<endl;
            cout<<"==================================="<<endl;
            break;
        }
         else if(pswrd[10]=="SI2023002"){
            cout<<"==================================="<<endl;
            mahasiswa nama;
            nama.nim="SI2023002";
            nama.nama="IKHWAN JONO";
            nama.alamat="PEGADING";
            nama.jenis="LAKI-LAKI";
            nama.prodi="SISTEM INFORMASI";
            cout<<"1. NAMA          : "<<nama.nim<<endl;
            cout<<"2. NIM           : "<<nama.nama<<endl;
            cout<<"3. ALAMAT        : "<<nama.alamat<<endl;
            cout<<"4. JENIS KELAMIN : "<<nama.jenis<<endl;
            cout<<"5. PRODI         : "<<nama.prodi<<endl;
            cout<<"==================================="<<endl;
            break;
        }
         else if(pswrd[10]=="SI2023001"){
            cout<<"==================================="<<endl;
            mahasiswa nama;
            nama.nim="SI2023001";
            nama.nama="RIDHO' GANTENG";
            nama.alamat="PRAYA";
            nama.jenis="LAKI-LAKI";
            nama.prodi="SISTEM INFORMASI";
            cout<<"1. NAMA          : "<<nama.nim<<endl;
            cout<<"2. NIM           : "<<nama.nama<<endl;
            cout<<"3. ALAMAT        : "<<nama.alamat<<endl;
            cout<<"4. JENIS KELAMIN : "<<nama.jenis<<endl;
            cout<<"5. PRODI         : "<<nama.prodi<<endl;
            cout<<"==================================="<<endl;
            break;
        }
         else if(pswrd[10]=="TI2023001"){
            cout<<"==================================="<<endl;
            mahasiswa nama;
            nama.nim="TI2023001";
            nama.nama="AZKA IBAD";
            nama.alamat="BERAIM";
            nama.jenis="LAKI-LAKI";
            nama.prodi="TEKNIK INFORMATIKA";
            cout<<"1. NAMA          : "<<nama.nim<<endl;
            cout<<"2. NIM           : "<<nama.nama<<endl;
            cout<<"3. ALAMAT        : "<<nama.alamat<<endl;
            cout<<"4. JENIS KELAMIN : "<<nama.jenis<<endl;
            cout<<"5. PRODI         : "<<nama.prodi<<endl;
            cout<<"==================================="<<endl;
            break;
        }
        else if(pswrd[10]=="TI2023002"){
            cout<<"==================================="<<endl;
            mahasiswa nama;
            nama.nim="TI2023002";
            nama.nama="GUNAWAN";
            nama.alamat="KOPANG";
            nama.jenis="LAKI-LAKI";
            nama.prodi="TEKNIK INFORMATIKA";
            cout<<"1. NAMA          : "<<nama.nim<<endl;
            cout<<"2. NIM           : "<<nama.nama<<endl;
            cout<<"3. ALAMAT        : "<<nama.alamat<<endl;
            cout<<"4. JENIS KELAMIN : "<<nama.jenis<<endl;
            cout<<"5. PRODI         : "<<nama.prodi<<endl;
            cout<<"==================================="<<endl;
            break;
        }
        else if(pswrd[10]=="TI2023003"){
            cout<<"==================================="<<endl;
            mahasiswa nama;
            nama.nim="TI2023003";
            nama.nama="PENDI JAYADI";
            nama.alamat="BISOK BOKAH";
            nama.jenis="LAKI-LAKI";
            nama.prodi="TEKNIK INFORMATIKA";
            cout<<"1. NAMA          : "<<nama.nim<<endl;
            cout<<"2. NIM           : "<<nama.nama<<endl;
            cout<<"3. ALAMAT        : "<<nama.alamat<<endl;
            cout<<"4. JENIS KELAMIN : "<<nama.jenis<<endl;
            cout<<"5. PRODI         : "<<nama.prodi<<endl;
            cout<<"==================================="<<endl;
            break;
        }
        else if(pswrd[10]=="TI2023004"){
            cout<<"==================================="<<endl;
            mahasiswa nama;
            nama.nim="TI2023004";
            nama.nama="NAUFAL SYAFII";
            nama.alamat="TERONG TAWAH";
            nama.jenis="LAKI-LAKI";
            nama.prodi="TEKNIK INFORMATIKA";
            cout<<"1. NAMA          : "<<nama.nim<<endl;
            cout<<"2. NIM           : "<<nama.nama<<endl;
            cout<<"3. ALAMAT        : "<<nama.alamat<<endl;
            cout<<"4. JENIS KELAMIN : "<<nama.jenis<<endl;
            cout<<"5. PRODI         : "<<nama.prodi<<endl;
            cout<<"==================================="<<endl;
            break;
        }
        else if(pswrd[10]=="TI2023005"){
            cout<<"==================================="<<endl;
            mahasiswa nama;
            nama.nim="TI2023005";
            nama.nama="ROMZI";
            nama.alamat="MATARAM";
            nama.jenis="LAKI-LAKI";
            nama.prodi="TEKNIK INFORMATIKA";
            cout<<"1. NAMA          : "<<nama.nim<<endl;
            cout<<"2. NIM           : "<<nama.nama<<endl;
            cout<<"3. ALAMAT        : "<<nama.alamat<<endl;
            cout<<"4. JENIS KELAMIN : "<<nama.jenis<<endl;
            cout<<"5. PRODI         : "<<nama.prodi<<endl;
            cout<<"==================================="<<endl;
            break;
        };
    }
    else{
    cout<<"NIM anda tidak terdaftar di kampus kami!!"<<endl;
    cout<<"Mohon maukkan NIM anda dengan benar!!"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;
    break;
    }
}
}while(msk != pswrd[10]);
cout<<"==================================================="<<endl;
cout<<"\t MAKSIH DAN PROGRAM SELSAI\t"<<endl;
cout<<"==================================================="<<endl;
}