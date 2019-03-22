#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Login{
	public :
		bool login(string ,string);
};

bool Login::login(string input_id,string input_pass){
	ifstream ID("Text/ID.txt");
    ifstream Pass("Text/Pass.txt");
    string line_id,line_pass;
    bool check=false;
    int num_check=0;
    while(getline(ID,line_id)){
    	getline(Pass,line_pass);
    	if(line_id==input_id && line_pass==input_pass){
    		check=true;
    		break;
        }
}while(check==false &&num_check<=2);
	return check;
    ID.close();
    Pass.close();
};



