#include <iostream>
using namespace std;

int main(){
	string sentences[100];
	int row = 0;
	int column = 0;
	//Row 叫列(橫)、Column 叫行(直的)
	while(getline(cin, sentences[row])){
		if (column > sentences[row].length()){
			column = column;
		}else{
			column = sentences[row].length();
		}
		row++;
	}
	for(int i=0;i<column;i++){
		for(int j=row-1;j>=0;j--){
			if(i>=sentences[j].length()){
				if(j!=0){
					cout << " ";
				}else{
					cout << "";
				}
			}else{
				cout << sentences[j][i];
			}
		}
		cout << endl;
	}
	return 0;
}