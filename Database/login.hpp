#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Login{
	public :
		bool login(void);
};

bool Login::login(){
	ifstream ID("Text/ID.txt");
    ifstream Pass("Text/Pass.txt");
    string line_id,line_pass;
    string input_id,input_pass;
    bool check=false;
    int num_check=0;
    do{
    cout<<"Plese Input ID: ";
    getline(cin,input_id);
    cout<<"Plese Input PASS: ";
    getline(cin,input_pass);
    while(getline(ID,line_id)){
    	getline(Pass,line_pass);
    	if(line_id==input_id && line_pass==input_pass){
    		check=true;
    		break;
		}
	}
	num_check++;
}while(check==false &&num_check<=2);
	return check;
};



