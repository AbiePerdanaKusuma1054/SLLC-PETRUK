//fauzi riski-1717051029
//irham setyaki-1757051005

#include <iostream> 

using namespace std;

class node 
{
  public:					
  int angka;
  node *next; 				
}; 


node *awal_node = NULL;	

void tambahdepan(int parameter)
{
  node *baru;			
  baru = new node;		
  cout << "Masukkan Angka   : ";
  cin >> baru->angka;   
  baru->next = NULL;	
  if(awal_node == NULL)	
	  {
	    awal_node=baru;		//f
	    awal_node->next = NULL;
	  }
  else
	  {
	    baru->next = awal_node;
	    awal_node = baru;
	  }
} 

void tambahbelakang(int parameter)
  {
  node *temp, *temp2, *posisi;   
  temp = new node; 
   
  cout << "Masukkan Angka     : "; 
  cin >>   temp->angka;  
    
  temp->next = NULL; 
									
	  if (awal_node == NULL)
		  {
		    awal_node = temp;
		    posisi = awal_node;
		  }
	  else
		  {
		    temp2 = awal_node;
		    										
		    while (temp2->next != NULL)		
			    {
			      temp2 = temp2->next; 			 
			    }
		  temp2->next = temp;
		  }
} 

void print_node()
{
  node *temp;
  temp = awal_node;
  cout << endl;
	  if (temp == NULL)
	    	cout << "List kosong!" << endl;
	  else
		  {
		    while (temp != NULL)
			    {
			     cout <<temp->angka << ", ";
			     temp = temp->next; 
			    }
		    cout<<endl;
		  }
} 

void hapusdepan(int parameter)
{
  node *temp;
  temp = awal_node;
  awal_node = awal_node->next;
  delete temp;
} 

void hapusbelakang(int parameter)
{
  node *temp1, *temp2;
	  if (awal_node == NULL)
	    cout << "List kosong!" << endl;
	  else
	  {
	    temp1 = awal_node;
		    if (temp1->next == NULL)
			    {
			      delete temp1;
			      awal_node = NULL;
			    }
		    else 
			    {
			      while (temp1->next != NULL)
				      {
				        temp2 = temp1;
				        temp1 = temp1->next;
				      }
			      delete temp1;
			      temp2->next = NULL;
			    }
	
	   }
} 

void tambahtengah(int parameter)
{
  node *baru, *bantu;
  int posisi_sisip;
	  if(awal_node != NULL)
	  {
	    cout<<"Akan disisip setelah Data Ke ? : ";
	    cin>>posisi_sisip;
	    bantu=awal_node;
	    baru =new node;
		    for(int i=1;i<posisi_sisip;i++) 
				{
			    	if(bantu->next != NULL)
			    		bantu=bantu->next;
			    		
			      	else
			      		continue; 
			    }
		  cout << "Masukkan Angka     : ";
		  cin >> baru->angka;
		  baru->next=bantu->next;
		  bantu->next=baru;
	  }
	  else
	  {
	    cout<<"Belum ada data !!";
	    system("pause");
	  } 
} 

void hapustengah(int parameter)
{
  int banyakdata,posisi_hapus,poshapus;
  node *hapus, *bantu;
	  if(awal_node != NULL)
		{
		    cout<<"Akan dihapus pada data ke : ";
		    cin>>posisi_hapus;
		    banyakdata=1;
		    bantu=awal_node;
			    while(bantu->next != NULL)
				    {
				      bantu=bantu->next;
				      banyakdata++;
				    }
		    if((posisi_hapus<1)||(posisi_hapus>banyakdata))
		    {
		      cout<<"Belum ada data !! \n";
		    }
		    else
			    {
			      bantu=awal_node;
			      poshapus=1;
				      while(poshapus<(posisi_hapus-1))
					      {
					        bantu=bantu->next;
					        poshapus++;
					      }
			      hapus=bantu->next;
			      bantu->next=hapus->next;
			      delete hapus;
			    }
		}
 	else 
    cout<<"Data Masih kosong, tidak bisa hapus data dari tengah! ";
}
	
