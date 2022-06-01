#include <iostream>
using namespace std;

class data{
	public:
		void input();
		void proses();
		void caridata();
	private:
		int jml, pilih;
		string nim[5], nama[30], prodi[20], nohp[12];
		string tmp, cari;
};

void data::input(){
	cout << "Jumlah Mahasiswa = ";
	cin >> jml;
	for(int i=0;i<jml;i++){
		cout << "Data ke-" << i+1 << endl;
		cout << "NIM    : ";
        cin >> nim[i];
        cout << "NAMA   : ";
        cin >> nama[i];
        cout << "PRODI  : ";
        cin >> prodi[i];
        cout << "NO. HP : ";
        cin >> nohp[i];
        cout << "\n";
	}
}

void data::proses(){
	cout<<"1. Ascending"<<endl;
	cout<<"2. Descending"<<endl;
	cout<<"Pilihan anda : ";
	cin>>pilih;
	switch (pilih){
		case 1:
			cout<<"Data Ascending: ";
	     	for(int a=0; a<jml; a++)
	      	{
	            for(int b=jml-1; b>=a; b--)
	            {
	             if(nim[b]<nim[b-1]){
	             tmp = nim[b];
	             nim[b] = nim[b-1];
	             nim[b-1] = tmp;
	             
	        	tmp = nama[b];
				nama[b] = nama[b-1];
				nama[b-1] = tmp;
				
				tmp = prodi[b];
				prodi[b] = prodi[b-1];
				prodi[b-1] = tmp;
				
				tmp = nohp[b];
				nohp[b] = nohp[b-1];
				nohp[b-1] = tmp;
	            }
	
	            }
	            cout<<nim[a]<<" ";
	        }
	        break;
	    case 2:
	    	cout<<"\nData Descending : ";
	       	for(int i=1;i<jml;i++)
    		{
		        for(int d=0;d<jml-i;d++)
		        {
		            if(nim[d]<nim[d+1])
		            {
		                tmp=nim[d];
		                nim[d]=nim[d+1];
		                nim[d+1]=tmp;
		                
		                tmp=nama[d];
		                nama[d]=nama[d+1];
		                nama[d+1]=tmp;
		                
		                tmp=prodi[d];
		                prodi[d]=prodi[d+1];
		                prodi[d+1]=tmp;
		                
		                tmp=nohp[d];
		                nohp[d]=nohp[d+1];
		                nohp[d+1]=tmp;
		            }
		        }
		    }
		    for(int i=0;i<jml;i++)
		    {
		        cout << " " << nim[i];
		    }
		break;
	}
}

void data::caridata(){
	cout << "\n";
	cout << "Cari Data" << endl;
	cout << "Masukkan NIM : ";
	cin >> cari;
	
	for(int i = 0; i <= jml; i++){
	    if(nim[i] == cari){
			cout << "data ditemukan pada data ke-" << i+1 << endl;
			cout << "NIM    : " << nim[i] << endl;
			cout << "NAMA   : " << nama[i] << endl;
			cout << "PRODI  : " << prodi[i] << endl;
			cout << "NO. HP : " << nohp[i] << endl;
	    }
	}
}
  

int main(){
	data d;
	d.input();
	d.proses();
	d.caridata();
	
	return 0;
}
