#include "Train.hpp"
#include <algorithm>
#include <limits>
using namespace std;

int cmp(const void* a, const void* b){
	return ((Train*)a)->Number() > ((Train*)b)->Number();
}

void read(Train *tr){ //считывание и сортировка
	for(int i = 0;i < 8; ++i){
		try{
			cin >> tr[i];
		}
		catch(const Exception& exc){
		   --i;
		   cin.ignore(numeric_limits<streamsize>::max(), '\n');
		   cin.clear();
		   cin.sync();
		}
	}
	//сортировка
	qsort(tr, 8, sizeof(Train), cmp);
}

//вывод всех найденных
void printBy(const Train *tr, int number){
	 bool found = false;
	 for(int i = 0; i < 8; ++i){
		if(tr[i].Number() == number){
		   found = true;
		   cout << tr[i] << '\n';
		}
	 }
	 if(!found) cout << "Не найдено";
}
int main(){
   setlocale(LC_ALL, "");
   Train tr[8];
   int a;
   while(true){
	   cout << "1. Ввод\n2. Вывод\n3. Поиск\n4. Выход\n->";
	   while(!(cin >> a)){
		   cin.ignore(numeric_limits<streamsize>::max(), '\n');
		   cin.clear();
		   cin.sync();
	   }
	   if(a == 1){
		  read(tr);
	   }
	   else if(a == 2){
		  for(int i = 0; i < 8; ++i){
				cout << tr[i] << '\n';
		  } 
	   }
	   else if(a == 3){
		   cout << "Введите номер: ";
		   while(!(cin >> a)){
			   cin.ignore(numeric_limits<streamsize>::max(), '\n');
			   cin.clear();
			   cin.sync();
		   }
		   printBy(tr, a);
	   }
	   else if(a == 4){
			return 0;
	   }
   }
}
