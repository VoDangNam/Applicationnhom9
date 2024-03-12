
void xuattv()
{
    cout << "\n\t           DANH SACH HOA DON            \n";
    cout<<"\t||So Luong la : "<< tongsl<<"                \n";
   	cout<<"\t||Tong tien la : "<<sum  << " vnd      \n";
    cout<<"\t||-------------------------------------------\n";
    cout<<"\t|| Da duoc ban boi:                          \n";
    Quan_ly_quan_cafe::xuat();
}
};

//ham menu

void tknv(vector<Quan_ly_nhan_vien *>dsnv)
{
    string Msnvtk;
    int dem=0;
    cout << "Nhap ma so nhan vien ban can tim kiem: ";
    cin >> Msnvtk;
    cout<<"\n\t\t==DAY LA NHAN VIEN BAN MUON TIM==\n\t\t";
    for(int i = 0; i<dsnv.size(); i++)
    {
        if(dsnv[i]->getter_msnv()==Msnvtk)
        {
            dsnv[i]->xuat();
            dem++;
            break;
        }
    }
    if(dem == 0)
    {
    	 cout << "Ma so vua nhap khong co trong danh sach!" << endl;
	}    
}
void  MenuQlnv(vector<Quan_ly_nhan_vien*>dsnv)
{
	int luachonnv;
	while(true)
	{
		system("cls");
	    cout << "\n\t        MENU QUAN LY NHAN VIEN      \n";
	    cout << "\t||----------------------------------------||\n";
	    cout << "\t|| 1. Nhap thong tin nhan vien            ||\n";
	    cout << "\t|| 2. Xuat thong tin nhan vien            ||\n";
	    cout << "\t|| 3. Tim kiem nhan vien                  ||\n";
	    cout << "\t|| 0. Thoat                               ||\n";
	    cout << "\t||----------------------------------------||\n";
        
        while (true)
            {
            	string input;
                cout << "Nhap vao lua chon: ";
                getline(cin,input);
                stringstream lcnv(input);
                if (lcnv >>luachonnv && lcnv.eof())
                {
                   
                    break;
                }
                //cout << "Lua chon khong hop le. Vui long nhap lai.\n";
            }
        if(luachonnv==1)
        {
        	system("cls"); 
        	int n;
      
         while (true)
            {
            	string input;
                 cout<<"\nNhap vao so luong nhan vien ban muon nhap : ";
                getline(cin,input);
                stringstream slnv(input);
                if (slnv >>n && slnv.eof())
                {
                   
                    break;
                }
                cout << "Lua chon khong hop le. Vui long nhap lai.\n";
            }
       // system("cls"); 
        	for(int i=0;i<n;i++)
        	{
        		Quan_ly_nhan_vien *nhan_vien = new Quan_ly_nhan_vien();
             	nhan_vien->nhap();
        	    dsnv.push_back(nhan_vien);
			}
        	//system("pause");
		}
		else if(luachonnv==2)
		{
			system("cls"); 
			 cout << "\n\t\t====Danh sach Thong tin nhan vien====\n";
            for(int i = 0; i < dsnv.size(); i++){
                dsnv[i]->xuat();
            }
            system("pause");
		}
		else if(luachonnv==3)
		{
			system("cls"); 
			cout<<"\n\t\tNhan Vien Ban Muon Tim\t\t\n";
			tknv(dsnv);
			system("pause");
		}
		else if(luachonnv==0) {
			break;
		}
	}
}

void MenQlnl(vector<Quan_ly_nguyen_lieu *> dsnl)
{ 
    while (true)
    {
    	system("cls");
        cout << "\n\t       MENU QUAN LY NGUYEN LIEU       \n";
	    cout << "\t||--------------------------------------||\n";
	    cout << "\t|| 1. Nhap thong tin nguyen lieu        ||\n";
	    cout << "\t|| 2. Xuat thong tin nguyen lieu        ||\n";
	    cout << "\t|| 0. Thoat                             ||\n";
	    cout << "\t||--------------------------------------||\n";

        string input;// save gia tri
		int luachonnl;
        while (true)
        {
            cout << "Nhap vao lua chon: ";
            getline(cin, input);// doc va luu gia tri vao input
            stringstream ss(input); //Su dung de chuyen doi gia tri trong input thanh int
            if (ss >> luachonnl && ss.eof())//neu chuyen doi thanh cong ,gan vao bien luachon nl bang ">>"
            {                               //ss.eof de kiem tra chuyen doi da ok chua(cuoi chuoi) 
                // neu dam bao rang nhap chuoi string dung kie
                break;
            }
            else
            {
             cout << "Lua chon khong hop le. Vui long nhap lai.\n";
			}
            
        }

        if (luachonnl == 1)
        {
        	system("cls");
            int n;

            while (true)
            {
            	
                cout << "\nNhap vao so luong nguyen lieu ban muon nhap vao : ";
                getline(cin, input);
                stringstream slnl(input);
                if (slnl >> n && slnl.eof())
                {
                   
                    break;
                }
                cout << "So luong khong hop le. Vui long nhap lai.\n";
            }

            for (int i = 0; i < n; i++)
            {
                Quan_ly_nguyen_lieu *nguyen_lieu = new Quan_ly_nguyen_lieu();
                nguyen_lieu->nhap();
                dsnl.push_back(nguyen_lieu);
            }
        }
        else if (luachonnl == 2)
        {
        	system("cls"); 
            cout << "\n\t\t====Danh sach Thong tin nguyen lieu====\n";
            for (int i = 0; i < dsnl.size(); i++)
            {
                dsnl[i]->xuat();
            }
             system("pause");
        }
        else
        {
            break;
        }
    }
}

void MenuQlOder(vector<Quan_ly_don_hang *>dsdh)
{
	int luachondh;
	while(true)
	{
	    system("cls");
		cout << "\n\t\t\tMENU QUAN LY DON HANG\t\t\t\n";
	    cout << "\t||----------------------------------------------||\n";
	    cout << "\t|| 1. Nhap thong tin don hang                   ||\n";
	    cout << "\t|| 2. Xuat danh sach hoa don nhung ngay vua qua ||\n";
	    cout << "\t|| 0. Thoat                                     ||\n";
	    cout << "\t||----------------------------------------------||\n";
        while (true)
            {
            	string input;
                cout << "Nhap vao lua chon: ";
                getline(cin,input);
                stringstream sldh(input);
                if (sldh >> luachondh && sldh.eof())
                {
                   
                    break;
                }
            }
        if(luachondh==1)
        {
        	system("cls"); 
        	int lcmn;
        	cout<<"1. Vietnamese\n";
        	cout<<"2. English\n";
        	while (true)
            {
            	string inputmn;
                cout << "Nhap vao lua chon: ";
                getline(cin,inputmn);
                stringstream mn(inputmn);
                if (mn >> lcmn && mn.eof())
                {
                   
                    break;
                }
                //cout << "Lua chon khong hop le. Vui long nhap lai.\n";
            }
            if(lcmn==1)
            {
            	Quan_ly_don_hang  *don_hang = new Quan_ly_don_hang ();
             	don_hang ->nhaptv();
        	    dsdh.push_back(don_hang );
			}
			else if (lcmn==2)
			{
				Quan_ly_don_hang  *don_hang = new Quan_ly_don_hang ();
             	don_hang ->nhapta();
        	    dsdh.push_back(don_hang );
			}
			system("pause");	
		}
		else if(luachondh==2)
		{
			system("cls"); 
			 cout << "\n\t\t====Danh sach Thong tin don hang====\n";
            for(int i = 0; i < dsdh.size(); i++){
                dsdh[i]->xuattv();
            }
             system("pause");
		}
		else if(luachondh==0) {
			break;
		}
}
}

void Menumain(vector<Quan_ly_nhan_vien*>dsnv,vector<Quan_ly_nguyen_lieu *> dsnl,vector<Quan_ly_don_hang *>dsdh)
{
    	int luachonmain;
           do {
				
					system("cls");
					cout<<"\n\t\t+======                                                            ======+\t\t";
					cout<<"\n\t\t+========                                                        ========+\t\t";
					cout<<"\n\t\t+==========                                                    ==========+\t\t";
					cout<<"\n\t\t+=======================================================================+\t\t";
					cout<<"\n\t\t   || QUAN CAFE NTLHT                                               ||  \t\t";
					cout<<"\n\t\t   ||                 xin kinh chao quy khach <3 <3                 ||  \t\t";
			     	cout<<"\n\t\t+=======================================================================+\t\t";
			     	cout<<endl;
			     	cout<<endl;
					    cout << "\n\t\t\t\t\t\tQUAN LY QUAN CAFE\t\t\t\n";
					    cout << "\t\t\t\t||-------------------------------------||\n";
					    cout << "\t\t\t\t|| 1. Quan ly Nhan su                  ||\n";
					    cout << "\t\t\t\t|| 2. Quan ly Nguyen Lieu              ||\n";
					    cout << "\t\t\t\t|| 3. Quan ly hang hoa                 ||\n";
					    cout << "\t\t\t\t|| 0. Thoat                            ||\n";
					    cout << "\t\t\t\t||-------------------------------------||\n";
           	while(true)
           	{
           		string input;
                cout<<"\nMoi ban nhap vao lua chon : ";
                getline(cin,input);
                stringstream lcqlqcf(input);
                if (lcqlqcf >>luachonmain && lcqlqcf.eof())
                {
                   
                    break;
                }
                else
                {
                	cout << "Lua chon khong hop le. Vui long nhap lai.\n";
				}
			   }
        if(luachonmain==1)
        {
        	system("cls"); // Thêm dòng này d? xóa màn hình tru?c khi hi?n th? menu Qlnv
        	MenuQlnv(dsnv);
        //	system("pause") ;
        	
		}
		else if(luachonmain==2)
		{
			system("cls"); 
			MenQlnl(dsnl);
			//system("pause") ;
		}
		else if(luachonmain==3)
		{
			system("cls"); // Thêm dòng này d? xóa màn hình tru?c khi hi?n th? menu QlOder
			MenuQlOder(dsdh);
			//system("pause") ;
		}
		else if(luachonmain==0)
		{
			system("cls");
			cout<<"\n\t\tHEN GAP LAI QUY KHACH !!!!\n\n";
		    system("pause");
		}
	
	} while (luachonmain != 0);
}

int main()
{
	vector< Quan_ly_nhan_vien *>dsnv;
    vector<Quan_ly_nguyen_lieu *> dsnl;
    vector<Quan_ly_don_hang *> dsdh;
	Menumain(dsnv,dsnl,dsdh);
	return 0;
}
