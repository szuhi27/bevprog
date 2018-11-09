#include "std_lib_facilities.h"
 
int Bitte(int numb, string ert) {
	int Value = 0;
	
	if (ert == "b") {
		Value = numb;

	} else if (ert == "kb") {
		Value = (numb * 1024);

	} else if (ert == "mb") {
		Value = (numb * 1048576);

	} else if (ert == "gb") {
		Value = (numb * 1073741824);
	}

}




int main(int argc, char *argv[]) {

ifstream InputFile;
InputFile.open(argv[1]);
ofstream Output;
Output.open(argv[2]);

int number = stoi(argv[3], nullptr);

char k;

for (int i = 0; i <= (Bitte(number, argv[4])); i++) {

InputFile.get(k);
Output<<k;
}

InputFile.close();
Output.close();


}

